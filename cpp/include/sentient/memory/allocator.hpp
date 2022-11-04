//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_ALLOCATOR_ALLOCATOR_HPP
#define SENTIENT_ALLOCATOR_ALLOCATOR_HPP

#include <cstddef>
#include <memory>
#include <type_traits>

namespace snt {

template <
    typename ElemType,
    typename AlternativeAllocator =
        std::allocator<ElemType>
>
class allocator
{
private:
    using alternative_allocator_type =
        AlternativeAllocator;
    using alter_traits =
        std::allocator_traits<
                alternative_allocator_type
            >;

public:
    using value_type =
        typename std::allocator_traits<
            alternative_allocator_type
        >::value_type;
    using size_type =
        typename std::allocator_traits<
            alternative_allocator_type
        >::size_type;
    using difference_type =
        typename std::allocator_traits<
            alternative_allocator_type
        >::difference_type;
    using propagate_on_container_move_assignment =
        std::true_type;

    [[nodiscard]] constexpr value_type* allocate(size_type n)
    {
        value_type* mem = nullptr;

        if (false)
        {

        }
        else
        {
            mem = alter_traits::allocate(this->alternative_, n);
        }

        return mem;
    }

    constexpr void deallocate(value_type* p, size_type n)
    {
        if (false)
        {
            
        }
        else
        {
            alter_traits::deallocate(this->alternative_, p, n);
        }
    }

    

private:
    alternative_allocator_type alternative_;
};

}

#endif