//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_MEMORY_ARRAY_DELETE_HPP
#define SENTIENT_MEMORY_ARRAY_DELETE_HPP

#include <type_traits>

namespace snt {
namespace detail {

template <typename Type>
class array_delete
{
private:
    using alc_traits =
        std::allocator_traits<
            std::remove_extent_t<
                snt::allocator<Type>
            >
        >;

public:

    constexpr array_delete() noexcept :
        size_(1)
    { }
    constexpr array_delete(std::size_t n) noexcept :
        size_(n)
    { }

    constexpr void operator()(Type* ptr)
    {
        alc_traits::deallocate(this->alloc_, ptr, this->size_);
    }

private:
    snt::allocator<std::remove_extent_t<Type>> alloc_;
    std::size_t size_;
};

}
}

#endif