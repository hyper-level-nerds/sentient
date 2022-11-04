//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_MEMORY_OBJECT_DELETE_HPP
#define SENTIENT_MEMORY_OBJECT_DELETE_HPP

#include <sentient/memory/allocator.hpp>

#include <memory>

namespace snt {
namespace detail {

template <typename Type>
class object_delete
{
private:
    using alc_traits =
        std::allocator_traits<snt::allocator<Type>>;

public:
    constexpr void operator()(Type* ptr)
    {
        alc_traits::deallocate(this->alloc_, ptr, 1);
    }

    snt::allocator<Type> alloc_;
};

}
}

#endif