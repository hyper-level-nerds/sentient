//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_DETAIL_MAKE_SETTER_HPP
#define SENTIENT_DETAIL_MAKE_SETTER_HPP

#include <sentient/concepts/atomic.hpp>
#include <sentient/concepts/primitive.hpp>

#include <type_traits>

namespace snt {
namespace detail {

template <typename Type, typename OtherType>
struct make_setter
{
    using type =
        std::conditional_t<
            std::is_assignable_v<OtherType, Type> &&
            (snt::concepts::primitive<Type> || snt::concepts::atomic<Type>),
            OtherType,
            std::conditional_t<
                (std::is_move_assignable_v<Type> && std::is_rvalue_reference_v<OtherType>),
                OtherType,
                std::add_lvalue_reference_t<std::add_const_t<OtherType>>
            >
        >;
        
};
template <typename Type, typename OtherType>
using make_setter_t = make_setter<Type>::type;

}
}

#endif