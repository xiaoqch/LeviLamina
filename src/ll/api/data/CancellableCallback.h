#pragma once

#include <atomic>
#include <functional>

namespace ll::data {
class CancellableCallback {
    std::function<void()> callback;
    std::atomic_bool      available{true};

public:
    CancellableCallback(std::function<void()>&& callback) : callback(std::move(callback)) {}

    bool cancel() { return available.exchange(false); }

    void call() {
        if (available.exchange(false)) callback();
    }
    template <class F>
    bool moveTo(F&& f) {
        if (available.exchange(false)) {
            return f(std::move(callback));
        }
        return false;
    }
};
} // namespace ll::data
