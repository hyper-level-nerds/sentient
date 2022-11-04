//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_MEMORY_DEFAULT_DELETE_HPP
#define SENTIENT_MEMORY_DEFAULT_DELETE_HPP

#include <sentient/memory/detail/object_delete.hpp>
#include <sentient/memory/detail/array_delete.hpp>

#include <type_traits>

namespace snt {

template <typename Type>
using default_delete =
    std::conditional_t<
        std::is_array_v<Type>,
        detail::array_delete<Type>,
        detail::object_delete<Type>
    >;

}

#endif