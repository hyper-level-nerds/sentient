//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_DETAIL_MAKE_GETTER_HPP
#define SENTIENT_DETAIL_MAKE_GETTER_HPP

#include <sentient/concepts/atomic.hpp>
#include <sentient/concepts/primitive.hpp>

#include <type_traits>

namespace snt {
namespace detail {

template <typename Type>
struct make_getter
{
    using type =
        std::conditional_t<
            (snt::concepts::primitive<Type> || snt::concepts::atomic<Type>),
            Type,
            std::add_lvalue_reference_t<Type>
        >;
        
};
template <typename Type>
using make_getter_t = make_getter<Type>::type;

}
}

#endif