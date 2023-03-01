//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_OBSERVABLE_HPP
#define SENTIENT_OBSERVABLE_HPP

#include <sentient/concepts/primitive.hpp>

#include <boost/signals2/signal.hpp>
#include <boost/asio/any_io_executor.hpp>

namespace snt {

template <
    typename Type,
    typename Executor = boost::asio::any_io_executor
> requires snt::concepts::primitive<Type>
struct observable
{
private:
    using genuine_value_type = std::atomic<Type>;
    using signal_type = boost::signals2::signal<void(value_type)>;

public:
    using value_type = Type;
    using executor_type = Executor;

public:
    constexpr observable(const executor_type& exec) noexcept :
        exec_(exec)
    { }

    constexpr observable(const executor_type& exec, value_type val) noexcept :
        exec_(exec), value_(val)
    { }

    constexpr value_type get_value() const noexcept
    {
        return this->value_.load();
    }

    constexpr void set_value(value_type val) noexcept
    {
        this->value_.store(val);
        
    }


private:
    template <typename Fn, typename... ArgTypes>
    void notify(Fn&& fn, ArgTypes&&... args) noexcept
    {

    }

private:
    genuine_value_type value_;
    executor_type      exec_;
    signal_type        sig_;
};

}

#endif