//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_OBJECT_POOL_DETAIL_SPINLOCK_HPP
#define SENTIENT_OBJECT_POOL_DETAIL_SPINLOCK_HPP

#include <atomic>

namespace snt {
namespace detail {

struct spinlock
{
public:
    spinlock(spinlock&& other) noexcept :
        occupied_(other.occupied_.load()) {}
    spinlock(const spinlock& other) noexcept :
        occupied_(other.occupied_.load()) {}

    spinlock& operator=(const spinlock&) = delete;
    spinlock() noexcept = default;
    ~spinlock() = default;

    void lock() noexcept
    {
        bool expected = false;
        bool desired = true;
        while (!this->occupied_.compare_exchange_strong(expected, desired))
        {
            expected = false;
        }
    }

    void unlock() noexcept
    {
        this->occupied_.store(false);
    }

    bool try_lock()
    {
        bool expected = false;
        bool desired = true;
        return occupied_.compare_exchange_strong(expected, desired);
    }

private:
    std::atomic_bool occupied_;
};

}
}

#endif