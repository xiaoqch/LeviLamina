#pragma once

// This header-only concurrency data structure implementation is based on Intel's
// implementation in its Threading Building Blocks ("Intel Material").

/*
    Intel Material Copyright 2005-2008 Intel Corporation.  All Rights Reserved.
*/

#include <atomic>
#include <memory>
#include <thread>
#include <utility>

namespace ll::data {
namespace detail {
//! Compile-time constant that is upper bound on cache line/sector size.
// It should be used only in situations where having a compile-time upper
// bound is more useful than a run-time exact answer.
constexpr size_t max_nfs_size =
    (std::max)(std::hardware_destructive_interference_size, std::hardware_constructive_interference_size);

//! Class that implements exponential backoff.
class atomic_backoff {
    //! Time delay, in units of "pause" instructions.
    // Should be equal to approximately the number of "pause" instructions
    // that take the same time as an context switch. Must be a power of two.
    static constexpr std::int32_t LOOPS_BEFORE_YIELD = 16;
    std::int32_t                  count;

    static inline void machine_pause([[maybe_unused]] int32_t delay) {
#ifdef LL_MACHINE_PAUSE
        while (delay-- > 0) {
            LL_MACHINE_PAUSE;
        }
#else
        std::this_thread::yield();
#endif
    }

public:
    // In many cases, an object of this type is initialized eagerly on hot path,
    // as in for(atomic_backoff b; ; b.pause()) { /*loop body*/ }
    // For this reason, the construction cost must be very small!
    atomic_backoff() : count(1) {}
    // This constructor pauses immediately; do not use on hot paths!
    atomic_backoff(bool) : count(1) { pause(); }

    //! No Copy
    atomic_backoff(const atomic_backoff&)            = delete;
    atomic_backoff& operator=(const atomic_backoff&) = delete;

    //! Pause for a while.
    void pause() {
        if (count <= LOOPS_BEFORE_YIELD) {
            machine_pause(count);
            // Pause twice as long the next time.
            count *= 2;
        } else {
            // Pause is so long that we might as well yield CPU to scheduler.
            std::this_thread::yield();
        }
    }
};

//! Spin WHILE the condition is true.
/** T and U should be comparable types. */
template <typename T, typename C>
T spin_wait_while(const std::atomic<T>& location, C comp, std::memory_order order) {
    atomic_backoff backoff;
    T              snapshot = location.load(order);
    while (comp(snapshot)) {
        backoff.pause();
        snapshot = location.load(order);
    }
    return snapshot;
}

//! Spin WHILE the value of the variable is equal to a given value
/** T and U should be comparable types. */
template <typename T, typename U>
T spin_wait_while_eq(
    const std::atomic<T>& location,
    const U               value,
    std::memory_order     order = std::memory_order_acquire
) {
    return spin_wait_while(location, [&value](T t) { return t == value; }, order);
}

//! Spin UNTIL the value of the variable is equal to a given value
/** T and U should be comparable types. */
template <typename T, typename U>
T spin_wait_until_eq(
    const std::atomic<T>& location,
    const U               value,
    std::memory_order     order = std::memory_order_acquire
) {
    return spin_wait_while(location, [&value](T t) { return t != value; }, order);
}

// A function to compute arg modulo divisor where divisor is a power of 2.
template <typename ArgIntegerType, typename DivisorIntegerType>
inline ArgIntegerType modulo_power_of_two(ArgIntegerType arg, DivisorIntegerType divisor) {
    return arg & (divisor - 1);
}

template <typename Func>
class raii_guard {
public:
    static_assert(
        std::is_nothrow_copy_constructible<Func>::value && std::is_nothrow_move_constructible<Func>::value,
        "Throwing an exception during the Func copy or move construction cause an unexpected behavior."
    );

    raii_guard(Func const& f) noexcept : my_func(f), is_active(true) {}

    raii_guard(raii_guard&& g) noexcept : my_func(std::move(g.my_func)), is_active(g.is_active) { g.is_active = false; }

    ~raii_guard() {
        if (is_active) {
            my_func();
        }
    }

    void dismiss() { is_active = false; }

private:
    Func my_func;
    bool is_active;
};

template <typename Func>
auto make_raii_guard(Func&& f) {
    return raii_guard<std::remove_cvref_t<Func>>(std::forward<Func>(f));
}

template <typename Body>
struct try_call_proxy {
    Body body;

    try_call_proxy(Body b) : body(b) {}

    template <typename OnExceptionBody>
    void on_exception(OnExceptionBody on_exception_body) {
        auto guard = make_raii_guard(on_exception_body);
        body();
        guard.dismiss();
    }
};

// Template helper function for API
// try_call(lambda1).on_exception(lambda2)
// Executes lambda1 and if it throws an exception - executes lambda2
template <typename Body>
auto try_call(Body&& b) {
    return try_call_proxy<std::remove_cvref_t<Body>>(std::forward<Body>(b));
}

using ticket_type = std::size_t;

template <typename Page>
inline bool is_valid_page(const Page p) {
    return reinterpret_cast<std::uintptr_t>(p) > 1;
}

template <typename T, typename Allocator>
struct concurrent_queue_rep;

template <typename Container, typename T, typename Allocator>
class micro_queue_pop_finalizer;

// A queue using simple locking.
// For efficiency, this class has no constructor.
// The caller is expected to zero-initialize it.
template <typename T, typename Allocator>
class micro_queue {
private:
    using queue_rep_type = concurrent_queue_rep<T, Allocator>;
    using self_type      = micro_queue<T, Allocator>;

public:
    using size_type       = std::size_t;
    using value_type      = T;
    using reference       = value_type&;
    using const_reference = const value_type&;

    using allocator_type        = Allocator;
    using allocator_traits_type = std::allocator_traits<allocator_type>;
    using queue_allocator_type  = typename allocator_traits_type::template rebind_alloc<queue_rep_type>;

    static constexpr size_type item_size      = sizeof(T);
    static constexpr size_type items_per_page = item_size <= 8   ? 32
                                              : item_size <= 16  ? 16
                                              : item_size <= 32  ? 8
                                              : item_size <= 64  ? 4
                                              : item_size <= 128 ? 2
                                                                 : 1;

    struct padded_page {
        padded_page() {}
        ~padded_page() {}

        reference operator[](std::size_t index) { return items[index]; }

        const_reference operator[](std::size_t index) const { return items[index]; }

        padded_page*                next{nullptr};
        std::atomic<std::uintptr_t> mask{};

        union {
            value_type items[items_per_page];
        };
    };

    using page_allocator_type = typename allocator_traits_type::template rebind_alloc<padded_page>;

protected:
    using page_allocator_traits = std::allocator_traits<page_allocator_type>;

public:
    micro_queue()                              = default;
    micro_queue(const micro_queue&)            = delete;
    micro_queue& operator=(const micro_queue&) = delete;

    size_type prepare_page(ticket_type k, queue_rep_type& base, page_allocator_type page_allocator, padded_page*& p) {
        k               &= ~(queue_rep_type::n_queue - 1);
        size_type index  = modulo_power_of_two(k / queue_rep_type::n_queue, items_per_page);
        if (!index) {
            try_call([&] { p = page_allocator_traits::allocate(page_allocator, 1); }).on_exception([&] {
                ++base.n_invalid_entries;
                invalidate_page(k);
            });
            page_allocator_traits::construct(page_allocator, p);
        }

        spin_wait_until_my_turn(tail_counter, k, base);

        if (p) {
            std::lock_guard lock(page_mutex);
            padded_page*    q = tail_page.load(std::memory_order_relaxed);
            if (is_valid_page(q)) {
                q->next = p;
            } else {
                head_page.store(p, std::memory_order_relaxed);
            }
            tail_page.store(p, std::memory_order_relaxed);
        } else {
            p = tail_page.load(std::memory_order_relaxed);
        }
        return index;
    }

    template <typename... Args>
    void push(ticket_type k, queue_rep_type& base, queue_allocator_type& allocator, Args&&... args) {
        padded_page*        p = nullptr;
        page_allocator_type page_allocator(allocator);
        size_type           index = prepare_page(k, base, page_allocator, p);
        try_call([&] {
            page_allocator_traits::construct(page_allocator, &(*p)[index], std::forward<Args>(args)...);
            // If no exception was thrown, mark item as present.
            p->mask.store(p->mask.load(std::memory_order_relaxed) | uintptr_t(1) << index, std::memory_order_relaxed);
        }).on_exception([&] {
            ++base.n_invalid_entries;
            tail_counter.fetch_add(queue_rep_type::n_queue);
        });
        tail_counter.fetch_add(queue_rep_type::n_queue);
    }

    void abort_push(ticket_type k, queue_rep_type& base, queue_allocator_type& allocator) {
        padded_page* p = nullptr;
        prepare_page(k, base, allocator, p);
        ++base.n_invalid_entries;
        tail_counter.fetch_add(queue_rep_type::n_queue);
    }

    bool pop(void* dst, ticket_type k, queue_rep_type& base, queue_allocator_type& allocator) {
        k &= ~(queue_rep_type::n_queue - 1);
        spin_wait_until_eq(head_counter, k);
        spin_wait_while_eq(tail_counter, k);
        padded_page* p       = head_page.load(std::memory_order_relaxed);
        size_type    index   = modulo_power_of_two(k / queue_rep_type::n_queue, items_per_page);
        bool         success = false;
        {
            page_allocator_type                                                   page_allocator(allocator);
            micro_queue_pop_finalizer<self_type, value_type, page_allocator_type> finalizer(
                *this,
                page_allocator,
                k + queue_rep_type::n_queue,
                index == items_per_page - 1 ? p : nullptr
            );
            if (p->mask.load(std::memory_order_relaxed) & (std::uintptr_t(1) << index)) {
                success = true;
                assign_and_destroy_item(dst, *p, index);
            } else {
                --base.n_invalid_entries;
            }
        }
        return success;
    }
    template <bool Move>
    micro_queue& assign(const micro_queue& src, queue_allocator_type& allocator) {
        head_counter.store(src.head_counter.load(std::memory_order_relaxed), std::memory_order_relaxed);
        tail_counter.store(src.tail_counter.load(std::memory_order_relaxed), std::memory_order_relaxed);

        const padded_page* srcp = src.head_page.load(std::memory_order_relaxed);
        if (is_valid_page(srcp)) {
            ticket_type g_index = head_counter.load(std::memory_order_relaxed);
            size_type   n_items =
                (tail_counter.load(std::memory_order_relaxed) - head_counter.load(std::memory_order_relaxed))
                / queue_rep_type::n_queue;
            size_type index = modulo_power_of_two(
                head_counter.load(std::memory_order_relaxed) / queue_rep_type::n_queue,
                items_per_page
            );
            size_type end_in_first_page = (index + n_items < items_per_page) ? (index + n_items) : items_per_page;

            try_call([&] {
                head_page.store(
                    make_assign<Move>(allocator, srcp, index, end_in_first_page, g_index),
                    std::memory_order_relaxed
                );
            }).on_exception([&] {
                head_counter.store(0, std::memory_order_relaxed);
                tail_counter.store(0, std::memory_order_relaxed);
            });
            padded_page* cur_page = head_page.load(std::memory_order_relaxed);

            try_call([&] {
                if (srcp != src.tail_page.load(std::memory_order_relaxed)) {
                    for (srcp = srcp->next; srcp != src.tail_page.load(std::memory_order_relaxed); srcp = srcp->next) {
                        cur_page->next = make_assign<Move>(allocator, srcp, 0, items_per_page, g_index);
                        cur_page       = cur_page->next;
                    }
                    size_type last_index = modulo_power_of_two(
                        tail_counter.load(std::memory_order_relaxed) / queue_rep_type::n_queue,
                        items_per_page
                    );
                    if (last_index == 0) last_index = items_per_page;

                    cur_page->next = make_assign<Move>(allocator, srcp, 0, last_index, g_index);
                    cur_page       = cur_page->next;
                }
                tail_page.store(cur_page, std::memory_order_relaxed);
            }).on_exception([&] {
                padded_page* invalid_page = reinterpret_cast<padded_page*>(std::uintptr_t(1));
                tail_page.store(invalid_page, std::memory_order_relaxed);
            });
        } else {
            head_page.store(nullptr, std::memory_order_relaxed);
            tail_page.store(nullptr, std::memory_order_relaxed);
        }
        return *this;
    }

    template <bool Move>
    padded_page* make_assign(
        queue_allocator_type& allocator,
        const padded_page*    src_page,
        size_type             begin_in_page,
        size_type             end_in_page,
        ticket_type&          g_index
    ) {
        page_allocator_type page_allocator(allocator);
        padded_page*        new_page = page_allocator_traits::allocate(page_allocator, 1);
        new_page->next               = nullptr;
        new_page->mask.store(src_page->mask.load(std::memory_order_relaxed), std::memory_order_relaxed);
        for (; begin_in_page != end_in_page; ++begin_in_page, ++g_index) {
            if (new_page->mask.load(std::memory_order_relaxed) & uintptr_t(1) << begin_in_page) {
                construct_item<Move>(*new_page, begin_in_page, *src_page, begin_in_page);
            }
        }
        return new_page;
    }

    void invalidate_page(ticket_type k) {
        // Append an invalid page at address 1 so that no more pushes are allowed.
        padded_page* invalid_page = reinterpret_cast<padded_page*>(std::uintptr_t(1));
        {
            std::lock_guard lock(page_mutex);
            tail_counter.store(k + queue_rep_type::n_queue + 1, std::memory_order_relaxed);
            padded_page* q = tail_page.load(std::memory_order_relaxed);
            if (is_valid_page(q)) {
                q->next = invalid_page;
            } else {
                head_page.store(invalid_page, std::memory_order_relaxed);
            }
            tail_page.store(invalid_page, std::memory_order_relaxed);
        }
    }

    padded_page* get_head_page() { return head_page.load(std::memory_order_relaxed); }

    void clear(queue_allocator_type& allocator, padded_page* new_head = nullptr, padded_page* new_tail = nullptr) {
        padded_page* curr_page = get_head_page();
        size_type    index = (head_counter.load(std::memory_order_relaxed) / queue_rep_type::n_queue) % items_per_page;
        page_allocator_type page_allocator(allocator);

        while (curr_page && is_valid_page(curr_page)) {
            while (index != items_per_page) {
                if (curr_page->mask.load(std::memory_order_relaxed) & (std::uintptr_t(1) << index)) {
                    page_allocator_traits::destroy(page_allocator, &curr_page->operator[](index));
                }
                ++index;
            }

            index                  = 0;
            padded_page* next_page = curr_page->next;
            page_allocator_traits::destroy(page_allocator, curr_page);
            page_allocator_traits::deallocate(page_allocator, curr_page, 1);
            curr_page = next_page;
        }
        head_counter.store(0, std::memory_order_relaxed);
        tail_counter.store(0, std::memory_order_relaxed);
        head_page.store(new_head, std::memory_order_relaxed);
        tail_page.store(new_tail, std::memory_order_relaxed);
    }

    void clear_and_invalidate(queue_allocator_type& allocator) {
        padded_page* invalid_page = reinterpret_cast<padded_page*>(std::uintptr_t(1));
        clear(allocator, invalid_page, invalid_page);
    }

private:
    // template <typename U, typename A>
    friend class micro_queue_pop_finalizer<self_type, value_type, page_allocator_type>;

    // Class used to ensure exception-safety of method "pop"
    class destroyer {
        value_type& my_value;

    public:
        destroyer(reference value) : my_value(value) {}
        destroyer(const destroyer&)            = delete;
        destroyer& operator=(const destroyer&) = delete;
        ~destroyer() { my_value.~T(); }
    };


    template <bool Move>
    void construct_item(padded_page& dst, size_type dindex, const padded_page& src, size_type sindex) {
        auto& src_item = src[sindex];
        if constexpr (Move) {
            std::construct_at(&dst[dindex], std::move(src_item));
        } else {
            std::construct_at(&dst[dindex], std::as_const(src_item));
        }
    }

    void assign_and_destroy_item(void* dst, padded_page& src, size_type index) {
        auto&     from = src[index];
        destroyer d(from);
        *static_cast<T*>(dst) = std::move(from);
    }

    void spin_wait_until_my_turn(std::atomic<ticket_type>& counter, ticket_type k, queue_rep_type& rb) const {
        for (atomic_backoff b{};; b.pause()) {
            ticket_type c = counter.load(std::memory_order_acquire);
            if (c == k) return;
            else if (c & 1) {
                ++rb.n_invalid_entries;
                throw std::bad_alloc();
            }
        }
    }

    std::atomic<padded_page*> head_page{};
    std::atomic<ticket_type>  head_counter{};

    std::atomic<padded_page*> tail_page{};
    std::atomic<ticket_type>  tail_counter{};

    std::mutex page_mutex{};
};

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4324)
#endif

template <typename Container, typename T, typename Allocator>
class micro_queue_pop_finalizer {
public:
    using padded_page           = typename Container::padded_page;
    using allocator_type        = Allocator;
    using allocator_traits_type = std::allocator_traits<allocator_type>;

    micro_queue_pop_finalizer(Container& queue, Allocator& alloc, ticket_type k, padded_page* p)
    : my_ticket_type(k),
      my_queue(queue),
      my_page(p),
      allocator(alloc) {}

    micro_queue_pop_finalizer(const micro_queue_pop_finalizer&)            = delete;
    micro_queue_pop_finalizer& operator=(const micro_queue_pop_finalizer&) = delete;

    ~micro_queue_pop_finalizer() {
        padded_page* p = my_page;
        if (is_valid_page(p)) {
            std::lock_guard lock(my_queue.page_mutex);
            padded_page*    q = p->next;
            my_queue.head_page.store(q, std::memory_order_relaxed);
            if (!is_valid_page(q)) {
                my_queue.tail_page.store(nullptr, std::memory_order_relaxed);
            }
        }
        my_queue.head_counter.store(my_ticket_type, std::memory_order_release);
        if (is_valid_page(p)) {
            allocator_traits_type::destroy(allocator, static_cast<padded_page*>(p));
            allocator_traits_type::deallocate(allocator, static_cast<padded_page*>(p), 1);
        }
    }

private:
    ticket_type  my_ticket_type;
    Container&   my_queue;
    padded_page* my_page;
    Allocator&   allocator;
};

template <typename T, typename Allocator>
struct concurrent_queue_rep {
    using self_type             = concurrent_queue_rep<T, Allocator>;
    using size_type             = std::size_t;
    using micro_queue_type      = micro_queue<T, Allocator>;
    using allocator_type        = Allocator;
    using allocator_traits_type = std::allocator_traits<allocator_type>;
    using padded_page           = typename micro_queue_type::padded_page;
    using page_allocator_type   = typename micro_queue_type::page_allocator_type;

private:
    using page_allocator_traits = std::allocator_traits<page_allocator_type>;
    using queue_allocator_type  = typename allocator_traits_type::template rebind_alloc<self_type>;

public:
    // must be power of 2
    static constexpr size_type n_queue = 8;
    // Approximately n_queue/golden ratio
    static constexpr size_type phi            = 3;
    static constexpr size_type item_size      = micro_queue_type::item_size;
    static constexpr size_type items_per_page = micro_queue_type::items_per_page;

    concurrent_queue_rep() {}

    concurrent_queue_rep(const concurrent_queue_rep&)            = delete;
    concurrent_queue_rep& operator=(const concurrent_queue_rep&) = delete;

    void clear(queue_allocator_type& alloc) {
        for (size_type index = 0; index < n_queue; ++index) {
            array[index].clear(alloc);
        }
        head_counter.store(0, std::memory_order_relaxed);
        tail_counter.store(0, std::memory_order_relaxed);
        n_invalid_entries.store(0, std::memory_order_relaxed);
    }

    template <bool Move>
    void assign(const concurrent_queue_rep& src, queue_allocator_type& alloc) {
        head_counter.store(src.head_counter.load(std::memory_order_relaxed), std::memory_order_relaxed);
        tail_counter.store(src.tail_counter.load(std::memory_order_relaxed), std::memory_order_relaxed);
        n_invalid_entries.store(src.n_invalid_entries.load(std::memory_order_relaxed), std::memory_order_relaxed);

        // copy or move micro_queues
        size_type queue_idx = 0;
        try_call([&] {
            for (; queue_idx < n_queue; ++queue_idx) {
                array[queue_idx].template assign<Move>(src.array[queue_idx], alloc);
            }
        }).on_exception([&] {
            for (size_type i = 0; i < queue_idx + 1; ++i) {
                array[i].clear_and_invalidate(alloc);
            }
            head_counter.store(0, std::memory_order_relaxed);
            tail_counter.store(0, std::memory_order_relaxed);
            n_invalid_entries.store(0, std::memory_order_relaxed);
        });
    }

    bool empty() const {
        ticket_type tc = tail_counter.load(std::memory_order_acquire);
        ticket_type hc = head_counter.load(std::memory_order_relaxed);
        // if tc!=r.tail_counter, the queue was not empty at some point between the two reads.
        return tc == tail_counter.load(std::memory_order_relaxed)
            && std::ptrdiff_t(tc - hc - n_invalid_entries.load(std::memory_order_relaxed)) <= 0;
    }

    std::ptrdiff_t size() const {
        std::ptrdiff_t hc  = head_counter.load(std::memory_order_acquire);
        std::ptrdiff_t tc  = tail_counter.load(std::memory_order_relaxed);
        std::ptrdiff_t nie = n_invalid_entries.load(std::memory_order_relaxed);

        return tc - hc - nie;
    }

    friend class micro_queue<T, Allocator>;

    // Map ticket_type to an array index
    static size_type index(ticket_type k) { return k * phi % n_queue; }

    micro_queue_type& choose(ticket_type k) {
        // The formula here approximates LRU in a cache-oblivious way.
        return array[index(k)];
    }

    alignas(max_nfs_size) micro_queue_type array[n_queue];

    alignas(max_nfs_size) std::atomic<ticket_type> head_counter{};
    alignas(max_nfs_size) std::atomic<ticket_type> tail_counter{};
    alignas(max_nfs_size) std::atomic<size_type> n_invalid_entries{};
};

#ifdef _MSC_VER
#pragma warning(pop)
#endif

template <typename Value, typename Allocator>
class concurrent_queue_iterator_base {
    using queue_rep_type = concurrent_queue_rep<Value, Allocator>;
    using padded_page    = typename queue_rep_type::padded_page;

protected:
    concurrent_queue_iterator_base() = default;

    concurrent_queue_iterator_base(const concurrent_queue_iterator_base& other) { assign(other); }

    concurrent_queue_iterator_base(queue_rep_type* queue_rep)
    : my_queue_rep(queue_rep),
      my_head_counter(my_queue_rep->head_counter.load(std::memory_order_relaxed)) {
        for (std::size_t i = 0; i < queue_rep_type::n_queue; ++i) {
            my_array[i] = my_queue_rep->array[i].get_head_page();
        }

        if (!get_item(my_item, my_head_counter)) advance();
    }

    void assign(const concurrent_queue_iterator_base& other) {
        my_item      = other.my_item;
        my_queue_rep = other.my_queue_rep;

        if (my_queue_rep != nullptr) {
            my_head_counter = other.my_head_counter;

            for (std::size_t i = 0; i < queue_rep_type::n_queue; ++i) {
                my_array[i] = other.my_array[i];
            }
        }
    }

    void advance() {
        std::size_t k = my_head_counter;
        std::size_t i = modulo_power_of_two(k / queue_rep_type::n_queue, my_queue_rep->items_per_page);
        if (i == my_queue_rep->items_per_page - 1) {
            padded_page*& root = my_array[queue_rep_type::index(k)];
            root               = root->next;
        }
        // Advance k
        my_head_counter = ++k;
        if (!get_item(my_item, k)) advance();
    }

    concurrent_queue_iterator_base& operator=(const concurrent_queue_iterator_base& other) {
        this->assign(other);
        return *this;
    }

    bool get_item(Value*& item, std::size_t k) {
        if (k == my_queue_rep->tail_counter.load(std::memory_order_relaxed)) {
            item = nullptr;
            return true;
        } else {
            padded_page* p = my_array[queue_rep_type::index(k)];
            std::size_t  i = modulo_power_of_two(k / queue_rep_type::n_queue, my_queue_rep->items_per_page);
            item           = &(*p)[i];
            return (p->mask & uintptr_t(1) << i) != 0;
        }
    }

    Value*          my_item{nullptr};
    queue_rep_type* my_queue_rep{nullptr};
    ticket_type     my_head_counter{};
    padded_page*    my_array[queue_rep_type::n_queue]{};
};

struct concurrent_queue_iterator_provider {
    template <typename Iterator, typename Container>
    static Iterator get(const Container& container) {
        return Iterator(container);
    }
};

template <typename Container, typename Value, typename Allocator>
class concurrent_queue_iterator
: public concurrent_queue_iterator_base<typename std::remove_cv<Value>::type, Allocator> {
    using base_type = concurrent_queue_iterator_base<typename std::remove_cv<Value>::type, Allocator>;

public:
    using value_type        = Value;
    using pointer           = value_type*;
    using reference         = value_type&;
    using difference_type   = std::ptrdiff_t;
    using iterator_category = std::forward_iterator_tag;

    concurrent_queue_iterator() = default;

    /** If Value==Container::value_type, then this routine is the copy constructor.
        If Value==const Container::value_type, then this routine is a conversion constructor. */
    concurrent_queue_iterator(
        const concurrent_queue_iterator<Container, typename Container::value_type, Allocator>& other
    )
    : base_type(other) {}

private:
    concurrent_queue_iterator(const Container& container) : base_type(container.my_queue_representation) {}

public:
    concurrent_queue_iterator&
    operator=(const concurrent_queue_iterator<Container, typename Container::value_type, Allocator>& other) {
        this->assign(other);
        return *this;
    }

    reference operator*() const { return *static_cast<pointer>(this->my_item); }

    pointer operator->() const { return &operator*(); }

    concurrent_queue_iterator& operator++() {
        this->advance();
        return *this;
    }

    concurrent_queue_iterator operator++(int) {
        concurrent_queue_iterator tmp = *this;
        ++*this;
        return tmp;
    }

    friend bool operator==(const concurrent_queue_iterator& lhs, const concurrent_queue_iterator& rhs) {
        return lhs.my_item == rhs.my_item;
    }

private:
    friend struct concurrent_queue_iterator_provider;
};

template <typename QueueRep, typename Allocator>
std::pair<bool, ticket_type> internal_try_pop_impl(void* dst, QueueRep& queue, Allocator& alloc) {
    ticket_type ticket{};
    do {
        // Basically, we need to read `head_counter` before `tail_counter`. To achieve it we build happens-before on
        // `head_counter`
        ticket = queue.head_counter.load(std::memory_order_acquire);
        do {
            if (static_cast<std::ptrdiff_t>(queue.tail_counter.load(std::memory_order_relaxed) - ticket)
                <= 0) { // queue is empty
                // Queue is empty
                return {false, ticket};
            }
            // Queue had item with ticket k when we looked.  Attempt to get that item.
            // Another thread snatched the item, retry.
        } while (!queue.head_counter.compare_exchange_strong(ticket, ticket + 1));
    } while (!queue.choose(ticket).pop(dst, ticket, queue, alloc));
    return {true, ticket};
}

// A high-performance thread-safe non-blocking concurrent queue.
// Multiple threads may each push and pop concurrently.
// Assignment construction is not allowed.
template <typename T, typename Allocator = std::allocator<T>>
class concurrent_queue {
    using allocator_traits_type     = std::allocator_traits<Allocator>;
    using queue_representation_type = concurrent_queue_rep<T, Allocator>;
    using queue_allocator_type      = typename allocator_traits_type::template rebind_alloc<queue_representation_type>;
    using queue_allocator_traits    = std::allocator_traits<queue_allocator_type>;

public:
    using size_type       = std::size_t;
    using value_type      = T;
    using reference       = T&;
    using const_reference = const T&;
    using difference_type = std::ptrdiff_t;

    using allocator_type = Allocator;
    using pointer        = typename allocator_traits_type::pointer;
    using const_pointer  = typename allocator_traits_type::const_pointer;

    using iterator       = concurrent_queue_iterator<concurrent_queue, T, Allocator>;
    using const_iterator = concurrent_queue_iterator<concurrent_queue, const T, Allocator>;

    concurrent_queue() : concurrent_queue(allocator_type()) {}

    explicit concurrent_queue(const allocator_type& a) : my_allocator(a), my_queue_representation(nullptr) {
        my_queue_representation = static_cast<queue_representation_type*>(
            ::operator new(sizeof(queue_representation_type), (std::align_val_t)max_nfs_size)
        );
        queue_allocator_traits::construct(my_allocator, my_queue_representation);
    }

    template <typename InputIterator>
    concurrent_queue(InputIterator begin, InputIterator end, const allocator_type& a = allocator_type())
    : concurrent_queue(a) {
        for (; begin != end; ++begin) push(*begin);
    }

    concurrent_queue(std::initializer_list<value_type> init, const allocator_type& alloc = allocator_type())
    : concurrent_queue(init.begin(), init.end(), alloc) {}

    concurrent_queue(const concurrent_queue& src, const allocator_type& a) : concurrent_queue(a) {
        my_queue_representation->assign<false>(*src.my_queue_representation, my_allocator);
    }

    concurrent_queue(const concurrent_queue& src)
    : concurrent_queue(queue_allocator_traits::select_on_container_copy_construction(src.get_allocator())) {
        my_queue_representation->assign<false>(*src.my_queue_representation, my_allocator);
    }

    // Move constructors
    concurrent_queue(concurrent_queue&& src) : concurrent_queue(std::move(src.my_allocator)) { internal_swap(src); }

    concurrent_queue(concurrent_queue&& src, const allocator_type& a) : concurrent_queue(a) {
        // checking that memory allocated by one instance of allocator can be deallocated
        // with another
        if (my_allocator == src.my_allocator) {
            internal_swap(src);
        } else {
            // allocators are different => performing per-element move
            my_queue_representation->assign<true>(*src.my_queue_representation, my_allocator);
            src.clear();
        }
    }

    // Destroy queue
    ~concurrent_queue() {
        clear();
        my_queue_representation->clear(my_allocator);
        queue_allocator_traits::destroy(my_allocator, my_queue_representation);
        ::operator delete(my_queue_representation, (std::align_val_t)max_nfs_size);
    }

    concurrent_queue& operator=(const concurrent_queue& other) {
        // TODO: implement support for std::allocator_traits::propagate_on_container_copy_assignment
        if (my_queue_representation != other.my_queue_representation) {
            clear();
            my_allocator = other.my_allocator;
            my_queue_representation->assign<false>(*other.my_queue_representation, my_allocator);
        }
        return *this;
    }

    concurrent_queue& operator=(concurrent_queue&& other) {
        // TODO: implement support for std::allocator_traits::propagate_on_container_move_assignment
        if (my_queue_representation != other.my_queue_representation) {
            clear();
            if (my_allocator == other.my_allocator) {
                internal_swap(other);
            } else {
                my_queue_representation->assign<true>(*other.my_queue_representation, other.my_allocator);
                other.clear();
                my_allocator = std::move(other.my_allocator);
            }
        }
        return *this;
    }

    concurrent_queue& operator=(std::initializer_list<value_type> init) {
        assign(init);
        return *this;
    }

    template <typename InputIterator>
    void assign(InputIterator first, InputIterator last) {
        concurrent_queue src(first, last);
        clear();
        my_queue_representation->assign<true>(*src.my_queue_representation, my_allocator);
    }

    void assign(std::initializer_list<value_type> init) { assign(init.begin(), init.end()); }

    void swap(concurrent_queue& other) { internal_swap(other); }

    // Enqueue an item at tail of queue.
    void push(const T& value) { internal_push(value); }

    void push(T&& value) { internal_push(std::move(value)); }

    template <typename... Args>
    void emplace(Args&&... args) {
        internal_push(std::forward<Args>(args)...);
    }

    // Attempt to dequeue an item from head of queue.
    /** Does not wait for item to become available.
        Returns true if successful; false otherwise. */
    bool try_pop(T& result) { return internal_try_pop(&result); }

    // Return the number of items in the queue; thread unsafe
    size_type unsafe_size() const {
        std::ptrdiff_t size = my_queue_representation->size();
        return size < 0 ? 0 : size_type(size);
    }

    // Equivalent to size()==0.
    [[nodiscard]] bool empty() const { return my_queue_representation->empty(); }

    // Clear the queue. not thread-safe.
    void clear() { my_queue_representation->clear(my_allocator); }

    // Return allocator object
    allocator_type get_allocator() const { return my_allocator; }

    //------------------------------------------------------------------------
    // The iterators are intended only for debugging.  They are slow and not thread safe.
    //------------------------------------------------------------------------

    iterator       unsafe_begin() { return concurrent_queue_iterator_provider::get<iterator>(*this); }
    iterator       unsafe_end() { return iterator(); }
    const_iterator unsafe_begin() const { return concurrent_queue_iterator_provider::get<const_iterator>(*this); }
    const_iterator unsafe_end() const { return const_iterator(); }
    const_iterator unsafe_cbegin() const { return concurrent_queue_iterator_provider::get<const_iterator>(*this); }
    const_iterator unsafe_cend() const { return const_iterator(); }

private:
    void internal_swap(concurrent_queue& src) {
        using std::swap;
        swap(my_queue_representation, src.my_queue_representation);
    }

    template <typename... Args>
    void internal_push(Args&&... args) {
        ticket_type k = my_queue_representation->tail_counter++;
        my_queue_representation->choose(k).push(k, *my_queue_representation, my_allocator, std::forward<Args>(args)...);
    }

    bool internal_try_pop(void* dst) {
        return internal_try_pop_impl(dst, *my_queue_representation, my_allocator).first;
    }

    template <typename Container, typename Value, typename A>
    friend class concurrent_queue_iterator;

    queue_allocator_type       my_allocator;
    queue_representation_type* my_queue_representation;

    friend void swap(concurrent_queue& lhs, concurrent_queue& rhs) { lhs.swap(rhs); }

    friend bool operator==(const concurrent_queue& lhs, const concurrent_queue& rhs) {
        return lhs.unsafe_size() == rhs.unsafe_size()
            && std::equal(lhs.unsafe_begin(), lhs.unsafe_end(), rhs.unsafe_begin());
    }
};
} // namespace detail

using detail::concurrent_queue;

} // namespace ll::data