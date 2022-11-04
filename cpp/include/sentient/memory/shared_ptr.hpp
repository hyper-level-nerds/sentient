//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_MEMORY_SHARED_PTR_HPP
#define SENTIENT_MEMORY_SHARED_PTR_HPP

#include <sentient/memory/default_delete.hpp>

#include <memory>

namespace snt {

template <typename Type>
class shared_ptr;

template <typename Type>
class weak_ptr;

template <typename Type>
class enable_shared_from_this;

}

#endif