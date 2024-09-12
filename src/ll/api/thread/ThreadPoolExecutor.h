#pragma once

#include "ll/api/thread/Executor.h"

namespace ll::thread {
class ThreadPoolExecutor : public Executor {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI explicit ThreadPoolExecutor(std::string_view name, size_t nThreads = 1);

    LLAPI ~ThreadPoolExecutor() override;

    LLAPI void resize(size_t nThreads = 1);
    LLAPI void destroy();

    LLAPI void execute(std::function<void()>) const override;

    LLAPI std::shared_ptr<CancellableCallback> executeAfter(std::function<void()>, Duration) const override;

    LLNDAPI static ThreadPoolExecutor const& getDefault();
};
} // namespace ll::thread