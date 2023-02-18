//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONTAINER_LIST_HPP
#define SENTIENT_CONTAINER_LIST_HPP

#include <memory>
#include <list>

namespace snt {

/**
 * @author 
 * @brief the standard spec satisfied list class has its own size type for serialization
 * @author Jin (jaehwanspin@gmail.com)
 * @tparam ValueType value type
 * @tparam PayloadSizeType payload size type for serialization
 * @tparam Allocator allocator for string, default std::allocator<CharType>
 * @tparam BaseContainer base list container type, default std::list<...>
 */
template <
    class ValueType,
    class PayloadSizeType,
    class Allocator = std::allocator<ValueType>,
    class BaseContainer = std::list<ValueType, Allocator>
>
class list :
    BaseContainer
{
private:
    static_assert(std::is_integral_v<PayloadSizeType>, "PayloadSizeType must be integer");
    static_assert(std::is_unsigned_v<PayloadSizeType>, "PayloadSizeType must be unsigned integer");

    static constexpr const char* exceeded_message = "max size exceeded";
    using this_type =
        list<ValueType, PayloadSizeType, Allocator, BaseContainer>;
    using base_type = BaseContainer;

public:
    using value_type = typename base_type::value_type;
    using allocator_type = typename base_type::allocator_type;
    using size_type = typename base_type::size_type;
    using difference_type = typename base_type::difference_type;
    using reference = typename base_type::reference;
    using const_reference = typename base_type::const_reference;
    using pointer = typename base_type::pointer;
    using const_pointer = typename base_type::const_pointer;
    using iterator = typename base_type::iterator;
    using const_iterator = typename base_type::const_iterator;
    using reverse_iterator = typename base_type::reverse_iterator;
    using const_reverse_iterator = typename base_type::const_reverse_iterator;
    using payload_size_type = PayloadSizeType;

    list() :
        base_type()
    { }

    explicit list(const allocator_type& alc) :
        base_type(alc)
    { }

    explicit list(size_type count) :
        base_type(count)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    list(
        size_type count,
        const value_type& value,
        const allocator_type& alc = allocator_type()) :
        base_type(count, value, alc)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    explicit list(
        size_type count,
        const allocator_type& alc = allocator_type()) :
        base_type(count, alc)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    template <class InputIt>
    list(
        InputIt first,
        InputIt last,
        const allocator_type& alc = allocator_type()) :
        base_type(first, last, alc)
    {
        if (std::distance(first, last) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    list(const list& other) :
        base_type(other)
    { }

    list(const base_type& other) :
        base_type(other)
    {
        if (other.size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    list(
        const list& other,
        const allocator_type& alc) :
        base_type(other, alc)
    { }

    list(
        const base_type& other,
        const allocator_type& alc) :
        base_type(other, alc)
    {
        if (other.size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    list(list&& other) :
        base_type(std::move(other))
    { }

    list(base_type&& other) :
        base_type(std::move(other))
    {
        if (base_type::size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    list(
        list&& other,
        const allocator_type& alc) :
        base_type(std::move(other), alc)
    { }

    list(
        base_type&& other,
        const allocator_type& alc) :
        base_type(std::move(other), alc)
    {
        if (base_type::size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    list(
        std::initializer_list<value_type> init,
        const allocator_type& alloc = allocator_type()) :
        base_type(init, allc)
    {
        if (std::distance(init.begin(), init.end()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    

    size_type max_size() const noexcept
    {
        constexpr auto type_size_max = static_cast<std::size_t>(std::numeric_limits<payload_size_type>::max());
        auto allc_max =
            static_cast<decltype(type_size_max)>(std::allocator_traits<allocator_type>::max_size(base_type::get_allocator()));

        return std::min(type_size_max, allc_max);
    }
};

}

#endif