//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONTAINER_ARRAY_HPP
#define SENTIENT_CONTAINER_ARRAY_HPP

#if __cplusplus >= 202002L

#include <cstddef>
#include <array>

namespace snt {

/**
 * @brief Array type for the Sentient library
 * @author Jin (jaehwanspin@gmail.com)
 * @tparam ValueType element type
 * @tparam Size array size
 * @tparam BaseArrayContainer base array container type that satisfies standard specifications
 */
template <
    typename ValueType,
    std::size_t Size,
    typename BaseArrayContainer = std::array<ValueType, Size>
>
using array = BaseArrayContainer;

}

#else
#error "Go get the compiler that supports over c++20 to use Sentient"
#endif // #if __cplusplus >= 202002L

#endif 