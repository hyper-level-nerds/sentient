//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONTAINER_VECTOR_HPP
#define SENTIENT_CONTAINER_VECTOR_HPP

#include <sentient/memory/allocator.hpp>

#include <memory>
#include <type_traits>
#include <iterator>
#include <vector>

namespace snt {

/**
 * @author Jin (jaehwanspin@gmail.com)
 * @brief the standard spec satisfied vector class has its own size type for serialization
 * 
 * @tparam ValueType value type
 * @tparam PayloadSizeType payload size type for serialization
 * @tparam Allocator allocator for string, default std::allocator<CharType>
 * @tparam BaseContainer base vector container type, default std::vector<...>
 */
template <
    class ValueType,
    class PayloadSizeType,
    class Allocator = snt::allocator<ValueType>,
    class BaseContainer = std::vector<ValueType, Allocator>
>
class vector :
    public BaseContainer
{
private:
    static_assert(std::is_integral_v<PayloadSizeType>, "PayloadSizeType must be integer");
    static_assert(std::is_unsigned_v<PayloadSizeType>, "PayloadSizeType must be unsigned integer");

    static constexpr const char* exceeded_message = "max size exceeded";
    using this_type =
        vector<ValueType, PayloadSizeType, Allocator, BaseContainer>;
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

    
    /**
     * @
     */
    constexpr vector() noexcept(noexcept(allocator_type())) :
        base_type()
    { }

    constexpr explicit vector(const allocator_type& alloc) noexcept :
        base_type(alloc)
    { }

    constexpr vector(size_type count, const value_type& value, const allocator_type& alloc = allocator_type()) :
        base_type(count, value, alloc)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    constexpr explicit vector(size_type count, const allocator_type& alloc = allocator_type()) :
        base_type(count, alloc)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    template <typename InputIteratorType>
    constexpr vector(InputIteratorType first, InputIteratorType last, const allocator_type& alloc = allocator_type()) :
        base_type(first, last, alloc)
    {
        if (std::distance(first, last) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    constexpr vector(const vector& other) :
        base_type(other) { }

    constexpr vector(const vector& other, const allocator_type& alloc) :
        base_type(other, alloc) { }

    constexpr vector(vector&& other) noexcept :
        base_type(std::move(other)) { }

    constexpr vector(vector&& other, const allocator_type& alloc) :
        base_type(std::move(other), alloc) { }

    constexpr vector(base_type&& other) noexcept :
        base_type(std::move(other))
    {
        if (other.size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }
        
    constexpr vector(base_type&& other, const allocator_type& alloc) :
        base_type(std::move(other), alloc)
    {
        if (other.size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    constexpr vector(std::initializer_list<value_type> init, const allocator_type& alloc = allocator_type()) :
        base_type(init, alloc)
    {
        if (std::distance(init.begin(), init.end()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

	/**
	 * @brief standard spec reserve
	 * @param new_cap internal buffer allocation size
	 * @return void
	 */
    constexpr void reserve(size_type new_cap)
    {
        if (new_cap > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::reserve(new_cap);
    }

	/**
	 * @brief standard spec resize 1
	 * @param count new size
	 * @return void
	 */
    constexpr void resize(size_type count)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::resize(count);
    }

	/**
	 * @brief standard spec resize 2
	 * @param count new size
	 * @param value value to be filled with
	 * @return void
	 */
    constexpr void resize(size_type count, const value_type& value)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::resize(count, value);
    }

	/**
	 * @brief standard spec push_back 1
	 * @param value
	 * @return void
	 */
    constexpr void push_back(const value_type& value)
    {
        if ((base_type::size() + 1) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::push_back(value);
    }

    constexpr void push_back(value_type&& value)
    {
        if ((base_type::size() + 1) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::push_back(std::move(value));
    }

    template <typename ...ArgTypes>
    constexpr reference emplace_back(ArgTypes&&... args)
    {
        if ((base_type::size() + 1) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::emplace_back(std::forward<ArgTypes>(args)...);
    }

    constexpr iterator insert(const_iterator pos, const value_type& value)
    {
        if ((base_type::size() + 1) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(pos, value);
    }

    constexpr iterator insert(const_iterator pos, value_type&& value)
    {
        if ((base_type::size() + 1) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(pos, std::move(value));
    }

    constexpr iterator insert(const_iterator pos, size_type count, const value_type& value)
    {
        if ((base_type::size() + count) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(pos, count, value);
    }

    template <typename InputIteratorType>
    constexpr iterator insert(const_iterator pos, InputIteratorType first, InputIteratorType last)
    {
        if ((base_type::size() + std::distance(first, last)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(pos, first, last);
    }

    constexpr iterator insert(const_iterator pos, std::initializer_list<value_type> ilist)
    {
        if ((base_type::size() + std::distance(ilist.begin(), ilist.end())) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(pos, ilist);
    }

    template <
        typename InputIter,
        typename = std::enable_if_t<
            std::is_convertible_v<
                typename std::iterator_traits<InputIter>::iterator_category,
                std::input_iterator_tag
            >
        >
    >
    constexpr void assign(InputIter f, InputIter l)
    {
        if (std::distance(f, l) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(f, l);
    }

    constexpr void assign(std::initializer_list<value_type> l)
    {
        if (std::distance(l.begin(), l.end()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(l);
    }

    constexpr void assign(size_type n, const value_type& val)
    {
        if (n > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(n, val);
    }

    constexpr size_type max_size() const noexcept
    {
        constexpr auto type_size_max = static_cast<std::size_t>(std::numeric_limits<payload_size_type>::max());
        auto allc_max =
            static_cast<decltype(type_size_max)>(std::allocator_traits<allocator_type>::max_size(base_type::get_allocator()));

        return std::min(type_size_max, allc_max);
    }

};

}

#endif