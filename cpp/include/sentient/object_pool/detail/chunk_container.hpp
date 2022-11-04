//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_OBJECT_POOL_DETAIL_CHUNK_CONTAINER_HPP
#define SENTIENT_OBJECT_POOL_DETAIL_CHUNK_CONTAINER_HPP

#include <sentient/object_pool/detail/spinlock.hpp>

#include <boost/circular_buffer.hpp>

#include <cstddef>
#include <memory>
#include <mutex>
#include <bit>

namespace snt {
namespace detail {

template <
    typename AddressType = std::uintptr_t,
    typename Allocator = std::allocator<AddressType>,
    typename Buffer = boost::circular_buffer<AddressType, Allocator>,
    typename Synchronization = spinlock
>
struct chunk_container
{
private:
    using sync_type = Synchronization;
    using uq_lock = std::unique_lock<sync_type>;
    using alc_traits = std::allocator_traits<Allocator>;

public:
    using size_type = std::size_t;
    using address_type = AddressType;
    using buffer_type = Buffer;
    using value_type = typename alc_traits::value_type;
    using pointer = typename alc_traits::pointer;
    using allocator_type = typename alc_traits::allocator_type;
    
    constexpr chunk_container(std::size_t chunk_size, std::size_t capacity) noexcept :
        buffer_(capacity)
    {
        
    }

    constexpr void available(bool& avail) const noexcept
    {
        uq_lock lock(this->sync_);
        // this->
    }

    constexpr size_type capacity() const noexcept
    {
        return this->buffer_.capacity();
    }

    constexpr void get_one(address_type& ptr) noexcept
    {
        uq_lock lock(this->sync_);

    }

    constexpr void put_one(address_type ptr) noexcept
    {
        uq_lock lock(this->sync_);
    }

private:
    constexpr void initialize() noexcept
    {
        
    }

private:
    buffer_type buffer_;
    sync_type sync_;
};

}
}

#endif