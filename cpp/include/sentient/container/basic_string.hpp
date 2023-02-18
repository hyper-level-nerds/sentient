//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONTAINER_BASIC_STRING_HPP
#define SENTIENT_CONTAINER_BASIC_STRING_HPP

#include <string>
#include <memory>
#include <type_traits>
#include <stdexcept>

namespace snt {

/**
 * @brief the standard spec satisfied basic_string class has its own size type for serialization
 * @author Jin (jaehwanspin@gmail.com)
 * @tparam CharType value type
 * @tparam PayloadSizeType payload size type for serialization
 * @tparam CharTraits traits type for CharType, default std::char_traits<CharType>
 * @tparam Allocator allocator for string, default std::allocator<CharType>
 * @tparam BaseContainer base standard string container type, default std::basic_string<...>
 */
template <
    class CharType,
    class PayloadSizeType,
    class CharTraits = std::char_traits<CharType>,
    class Allocator = std::allocator<CharType>,
    class BaseContainer =
        std::basic_string<
            CharType,
            CharTraits,
            Allocator
        >
>
class basic_string : public BaseContainer
{
private:
    static_assert(std::is_integral_v<PayloadSizeType>, "PayloadSizeType must be integer");
    static_assert(std::is_unsigned_v<PayloadSizeType>, "PayloadSizeType must be unsigned integer");

    static constexpr const char* exceeded_message = "max size exceeded";

    using this_type =
        basic_string<CharType, PayloadSizeType, CharTraits, Allocator, BaseContainer>;
    using base_type = BaseContainer;

public:
    using traits_type = typename base_type::traits_type;
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

public:

    /////////////////////////////////////////////////////////////////
    // constructor 0
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec default (c++20 ~)
     */
    constexpr basic_string() noexcept(noexcept(allocator_type())) :
        base_type()
    { }

    /////////////////////////////////////////////////////////////////
    // constructor 1
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec 1st (c++20 ~)
     * @param alc allocator object
     */
    explicit constexpr basic_string(
        const allocator_type& alc) noexcept :
        base_type(alc)
    { }

    /////////////////////////////////////////////////////////////////
    // constructor 2
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec 2nd (c++20 ~)
     * @param count string buffer size
     * @param ch value to be filled
     * @param alc allocator object (optional)
     */
    constexpr basic_string(
        size_type count,
        value_type ch,
        const allocator_type& alc = allocator_type()) :
        base_type(count, ch, alc)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    /////////////////////////////////////////////////////////////////
    // constructor 3
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec 3rd for the Sentient String (c++20 ~)
     * @param other other "Sentient" basic_string object to copy
     * @param pos other object string offset to start copying
     * @param alc allocator object (optional)
     */
    constexpr basic_string(
        const basic_string& other,
        size_type pos,
        const allocator_type alc = allocator_type()) :
        base_type(other, pos, alc)
    { }

    /**
     * @brief standard string constructor spec 3th for the Base Type (c++20 ~)
     * @param other other "base type" object to copy
     * @param pos other object string offset to start copying
     * @param alc allocator object (optional)
     */
    constexpr basic_string(
        const base_type& other,
        size_type pos,
        const allocator_type alc = allocator_type()) :
        base_type(other, pos, alc)
    {
        if ((other.size() - pos) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    /////////////////////////////////////////////////////////////////
    // constructor 4
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec 4th for the Sentient String (c++20 ~)
     * @param other other "Sentient" basic_string object to copy
     * @param pos other object string offset to start copying
     * @param count buffer count to copy
     * @param alc allocator object (optional)
     */
    constexpr basic_string(
        const basic_string& other,
        size_type pos,
        size_type count,
        const allocator_type& alloc = allocator_type()) :
        base_type(other, pos, count, alloc)
    { }

    /**
     * @brief standard string constructor spec 4th for the Base Type (c++20 ~)
     * @param other other "base type" object to copy
     * @param pos other object string offset to start copying
     * @param count buffer count to copy
     * @param alc allocator object (optional)
     */
    constexpr basic_string(
        const base_type& other,
        size_type pos,
        size_type count,
        const allocator_type& alloc = allocator_type()) :
        base_type(other, pos, count, alloc)
    {
        if ((other.size() - pos - count) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    /////////////////////////////////////////////////////////////////
    // constructor 5
    /////////////////////////////////////////////////////////////////
    
    /**
     * @brief standard string constructor spec 5th (c++20 ~)
     * @param s C string to be copied from
     * @param count number of elements to copy
     * @param alc allocator object (optional)
     */
    constexpr basic_string(
        const_pointer s,
        size_type count,
        const allocator_type& alc = allocator_type()) :
        base_type(s, count, alc)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    /////////////////////////////////////////////////////////////////
    // constructor 6
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec 6th (c++20 ~)
     * @param s C string to be copied from (must have 0 value at the last index)
     * @param alc allocator object (optional)
     */
    constexpr basic_string(
        const_pointer s,
        const allocator_type& alloc = allocator_type()) :
        base_type(s, alloc)
    {
        if (traits_type::length(s) >  this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    /////////////////////////////////////////////////////////////////
    // constructor 7
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec 7th (c++20 ~)
     * @tparam InputIt standard input iterator spec satisfied type for basic_string
     * @param first input iterator begin
     * @param last input iterator end
     * @param alc allocator object (optional)
     */
    template <class InputIt>
    constexpr basic_string(
        InputIt first,
        InputIt last,
        const allocator_type& alloc = allocator_type()) :
        base_type(first, last, alloc)
    {
        if (std::distance(first, last) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    /////////////////////////////////////////////////////////////////
    // constructor 8
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec 8th for the Sentient String (c++20 ~)
     * @param other other "Sentient" basic_string object to copy
     */
    constexpr basic_string(const basic_string& other) :
        base_type(other)
    { }

    /**
     * @brief standard string constructor spec 8th for the Base Type (c++20 ~)
     * @param other other "base type" object to copy
     */
    constexpr basic_string(const base_type& other) :
        base_type(other)
    {
        if (other.size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    /////////////////////////////////////////////////////////////////
    // constructor 9
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec 9th for the Sentient String (c++20 ~)
     * @param other other "Sentient" basic_string object to copy
     * @param alloc allocator object
     */
    constexpr basic_string(
        const basic_string& other,
        const allocator_type& alloc) :
        base_type(other, alloc)
    { }

    /**
     * @brief standard string constructor spec 9th for the Base Type (c++20 ~)
     * @param other other "base type" object to copy
     * @param alloc allocator object
     */
    constexpr basic_string(
        const base_type& other,
        const allocator_type& alloc) :
        base_type(other, alloc)
    {
        if (other.size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    /////////////////////////////////////////////////////////////////
    // constructor 10
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec 10th for the Sentient String (c++20 ~)
     * @param other other "Sentient" basic_string object to move
     */
    constexpr basic_string(basic_string&& other) noexcept :
        base_type(std::move(other))
    { }

    /**
     * @brief standard string constructor spec 8th for the Base Type (c++20 ~)
     * @param other other "base type" object to move
     */
    constexpr basic_string(base_type&& other) :
        base_type(std::move(other))
    {
        if (base_type::size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    /////////////////////////////////////////////////////////////////
    // constructor 11
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec 11th for the Sentient String (c++20 ~)
     * @param other other "Sentient" basic_string object to move
     * @param alloc allocator object
     */
    constexpr basic_string(
        basic_string&& other,
        const allocator_type& alloc) :
        base_type(std::move(other), alloc)
    { }

    /**
     * @brief standard string constructor spec 11th for the Base Type (c++20 ~)
     * @param other other "base type" object to move
     * @param alloc allocator object
     */
    constexpr basic_string(
        base_type&& other,
        const allocator_type& alloc) :
        base_type(std::move(other), alloc)
    {
        if (base_type::size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    /////////////////////////////////////////////////////////////////
    // constructor 12
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec 12th (c++20 ~)
     * @param ilist initializer_list object for value_type
     * @param alloc allocator_type object (optional)
     */
    constexpr basic_string(
        std::initializer_list<value_type> ilist,
        const allocator_type& alloc = allocator_type()) :
        base_type(ilist, alloc)
    {
        if (std::distance(ilist.begin(), ilist.end()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    /////////////////////////////////////////////////////////////////
    // constructor 13
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec 13th (c++20 ~)
     * @tparam StringViewLike standard string_view spec satisfied type
     * @param t standard string_view spec satisfied object
     * @param alloc allocator_type object (optional)
     */
    template <class StringViewLike>
    constexpr explicit basic_string(
        const StringViewLike& t,
        const allocator_type& alloc = allocator_type()) :
        base_type(t, alloc)
    {
        if (t.size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    /////////////////////////////////////////////////////////////////
    // constructor 14
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec 14th (c++20 ~)
     * @tparam StringViewLike standard string_view spec satisfied type
     * @param t standard string_view spec satisfied object
     * @param pos t's offset
     * @param n buffer count to copy
     * @param alloc allocator_type object (optional)
     */
    template <class StringViewLike>
    constexpr basic_string(
        const StringViewLike& t,
        size_type pos,
        size_type n,
        const allocator_type& alloc = allocator_type()) :
        base_type(t, pos, n, alloc)
    {
        if ((t.size() - pos - n) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    

    constexpr basic_string(const basic_string& other,
        size_type pos, const allocator_type& alc = allocator_type()) :
        base_type(other, pos, alc)
    {
        if (other.size() + pos > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    constexpr basic_string(const base_type& other,
        size_type pos, const allocator_type& alc = allocator_type()) :
        base_type(other, pos, alc)
    {
        if (other.size() + pos > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    

    



    

    

    

    

    

    

    constexpr basic_string& assign(size_type count, value_type ch)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(count, ch);
        return *this;
    }

    constexpr basic_string& assign(const basic_string& str)
    {
        base_type::assign(str);
        return *this;
    }

    constexpr basic_string& assign(const base_type& str)
    {
        if (str.size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(str);
        return *this;
    }

    constexpr basic_string& assign(const basic_string& str,
        size_type pos, size_type count = base_type::npos)
    {
        if ((str.size() - pos + (count == base_type::npos ? str.size() : count)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(str, pos, count);
        return *this;
    }

    constexpr basic_string& assign(const base_type& str,
        size_type pos, size_type count = base_type::npos)
    {
        if ((str.size() - pos + (count == base_type::npos ? 0 : count)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(str, pos, count);
        return *this;
    }

    constexpr basic_string& assign(basic_string&& str)
        noexcept(noexcept(base_type::assign(str)))
    {
        base_type::assign(std::move(str));
        return *this;
    }

    constexpr basic_string& assign(base_type&& str)
        noexcept(noexcept(base_type::assign(str)))
    {
        if (str.size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(std::move(str));
        return *this;
    }

    constexpr basic_string& assign(const_pointer s, size_type count)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(s, count);
        return *this;
    }

    constexpr basic_string& assign(const_pointer s)
    {
        if (traits_type::length(s) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(s);
        return *this;
    }

    template <class InputIt>
    constexpr basic_string& assign(InputIt first, InputIt last)
    {
        if (std::distance(first, last) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(first, last);
        return *this;
    }

    constexpr basic_string& assign(std::initializer_list<value_type> ilist)
    {
        if (std::distance(ilist.begin(), ilist.end()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(ilist);
        return *this;
    }

    template <class StringViewLike>
    constexpr basic_string& assign(const StringViewLike& t)
    {
        if (t.size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(t);
        return *this;
    }

    template <class StringViewLike>
    constexpr basic_string& assign(const StringViewLike& t,
        size_type pos, size_type count = base_type::npos)
    {
        if ((t.size() - pos + (count == base_type::npos ? 0 : count)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(t, pos, count);
        return *this;
    }

    constexpr void reserve(size_type new_cap)
    {
        if (new_cap > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::reserve(new_cap);
    }


    constexpr basic_string& insert(size_type index, size_type count, value_type ch)
    {
        if ((base_type::size() + count) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::insert(index, count, ch);
        return *this;
    }

    constexpr basic_string& insert(size_type index, const_pointer s)
    {
        if ((base_type::size() + traits_type::length(s)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::insert(index, s);
        return *this;
    }

    constexpr basic_string& insert(size_type index,
        const_pointer s, size_type count)
    {
        if ((base_type::size() + count) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::insert(index, s, count);
        return *this;
    }

    constexpr basic_string& insert(size_type index, const basic_string& str)
    {
        if ((base_type::size() + str.size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::insert(index, str);
        return *this;
    }

    constexpr basic_string& insert(size_type index, const basic_string& str,
        size_type index_str, size_type count = base_type::npos)
    {
        // if ((str.size() - pos + (count == base_type::npos ? 0 : count)) > this->max_size())
        // {
        //     throw std::overflow_error(exceeded_message);
        // }
        base_type::insert(index, str, index_str, count);
        return *this;
    }

    constexpr iterator insert(const_iterator pos, value_type ch)
    {
        if ((base_type::size() + 1) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(pos, ch);
    }

    constexpr iterator insert(const_iterator pos, size_type count, value_type ch)
    {
        if ((base_type::size() + count) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(pos, count, ch);
    }

    template< class InputIt >
    constexpr iterator insert(const_iterator pos, InputIt first, InputIt last)
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

    template <class StringViewLike>
    constexpr basic_string& insert(size_type pos, const StringViewLike& t)
    {
        if ((base_type::size() + t.size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::insert(pos, t);
        return *this;
    }

    template< class StringViewLike >
    constexpr basic_string& insert(size_type index, const StringViewLike& t,
        size_type index_str, size_type count = base_type::npos)
    {
        if ((base_type::size() + count) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::insert(index, t, index_str, count);
        return *this;
    }

    constexpr void push_back(value_type ch)
    {
        if ((base_type::size() + 1) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::push_back(ch);
    }

    constexpr basic_string& append(size_type count, value_type ch)
    {
        if ((base_type::size() + count) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(count, ch);
        return *this;
    }

    constexpr basic_string& append(const basic_string& str)
    {
        if ((base_type::size() + str.size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(str);
        return *this;
    }

    constexpr basic_string& append(const base_type& str)
    {
        if ((base_type::size() + str.size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(str);
        return *this;
    }

    constexpr basic_string& append(const basic_string& str,
        size_type pos, size_type count = base_type::npos)
    {
        if ((base_type::size() + (str.size() - pos)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(str, pos, count);
        return *this;
    }

    constexpr basic_string& append(const base_type& str,
        size_type pos, size_type count = base_type::npos)
    {
        if ((base_type::size() + (str.size() - pos)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(str, pos, count);
        return *this;
    }

    constexpr basic_string& append(const_pointer s, size_type count)
    {
        if ((base_type::size() + count) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(s, count);
        return *this;
    }

    constexpr basic_string& append(const_pointer s)
    {
        if ((base_type::size() + traits_type::length(s)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(s);
        return *this;
    }

    template <class InputIt>
    constexpr basic_string& append(InputIt first, InputIt last)
    {
        if ((base_type::size() + std::distance(first, last)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(first, last);
        return *this;
    }

    constexpr basic_string& append(std::initializer_list<value_type> ilist)
    {
        if ((base_type::size() + std::distance(ilist, ilist)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(ilist);
        return *this;
    }

    template <class StringViewLike>
    constexpr basic_string& append(const StringViewLike& t)
    {
        if ((base_type::size() + t.size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(t);
        return *this;
    }

    template <class StringViewLike>
    constexpr basic_string& append(const StringViewLike& t,
        size_type pos, size_type count = base_type::npos)
    {
        if ((base_type::size() + (t.size() - pos)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(t, pos, count);
        return *this;
    }

    constexpr basic_string& operator+=(const basic_string& str)
    {
        if ((base_type::size() + str.size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::operator+=(str);
        return *this;
    }

    constexpr basic_string& operator+=(const base_type& str)
    {
        if ((base_type::size() + str.size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::operator+=(str);
        return *this;
    }

    constexpr basic_string& operator+=(value_type ch)
    {
        if ((base_type::size() + 1) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::operator+=(ch);
        return *this;
    }

    constexpr basic_string& operator+=(const_pointer s)
    {
        if ((base_type::size() + traits_type::length(s)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::operator+=(s);
        return *this;
    }

    constexpr basic_string& operator+=(std::initializer_list<value_type> ilist)
    {
        if ((base_type::size() + std::distance(ilist.begin(), ilist.end())) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::operator+=(ilist);
        return *this;
    }

    template <class StringViewLike>
    constexpr basic_string& operator+=(const StringViewLike& t)
    {
        if ((base_type::size() + t.size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::operator+=(t);
        return *this;
    }

    constexpr basic_string& replace(size_type pos, size_type count,
        const basic_string& str)
    {
        base_type::replace(pos, count, str);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    constexpr basic_string& replace(size_type pos, size_type count,
        const base_type& str)
    {
        base_type::replace(pos, count, str);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    constexpr basic_string& replace(const_iterator first, const_iterator last,
        const basic_string& str)
    {
        base_type::replace(first, last, str);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    constexpr basic_string& replace(const_iterator first, const_iterator last,
        const base_type& str)
    {
        base_type::replace(first, last, str);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    constexpr basic_string& replace(size_type pos, size_type count,
        const basic_string& str, size_type pos2, size_type count2 = base_type::npos)
    {
        base_type::replace(pos, count, str, pos2, count2);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    template <class InputIt>
    constexpr basic_string& replace(const_iterator first, const_iterator last,
        InputIt first2, InputIt last2)
    {
        base_type::replace(first, last, first2, last2);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    constexpr basic_string& replace(size_type pos, size_type count,
        const_pointer cstr, size_type count2)
    {
        base_type::replace(pos, count, cstr, count2);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    constexpr basic_string& replace( const_iterator first, const_iterator last,
        const_pointer cstr, size_type count2)
    {
        base_type::replace(first, last, cstr, count2);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    constexpr basic_string& replace(size_type pos, size_type count,
        const_pointer cstr)
    {
        base_type::replace(pos, count, cstr);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    constexpr basic_string& replace(const_iterator first, const_iterator last,
        const_pointer cstr)
    {
        base_type::replace(first, last, cstr);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    constexpr basic_string& replace(size_type pos, size_type count,
        size_type count2, value_type ch)
    {
        base_type::replace(pos, count, count2, ch);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    constexpr basic_string& replace(const_iterator first, const_iterator last,
        size_type count2, value_type ch)
    {
        base_type::replace(first, last, count2, ch);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    constexpr basic_string& replace(const_iterator first, const_iterator last,
        std::initializer_list<value_type> ilist)
    {
        base_type::replace(first, last, ilist);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    template <class StringViewLike>
    constexpr basic_string& replace(size_type pos, size_type count,
        const StringViewLike& t)
    {
        base_type::replace(pos, count, t);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    template <class StringViewLike>
    constexpr basic_string& replace(const_iterator first, const_iterator last,
        const StringViewLike& t)
    {
        base_type::replace(first, last, t);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    template < class StringViewLike >
    constexpr basic_string& replace(size_type pos, size_type count,
        const StringViewLike& t, size_type pos2, size_type count2 = base_type::npos)
    {
        base_type::replace(pos, count, t, pos2, count2);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    constexpr void resize(size_type count)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::resize(count);
    }

    constexpr void resize(size_type count, value_type ch)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::resize(count, ch);
    }

    constexpr size_type max_size() const noexcept
    {
        using atraits = std::allocator_traits<allocator_type>;
        using nlim = std::numeric_limits<payload_size_type>;
        constexpr auto type_size_max =
            static_cast<std::size_t>(nlim::max());
        auto allc_max =
            static_cast<decltype(type_size_max)>(atraits::max_size(base_type::get_allocator()));

        return std::min(type_size_max, allc_max);
    }

};

template <typename PayloadSizeType>
using string = basic_string<char, PayloadSizeType>;
template <typename PayloadSizeType>
using wstring = basic_string<wchar_t, PayloadSizeType>;
template <typename PayloadSizeType>
using u8string = basic_string<char8_t, PayloadSizeType>;
template <typename PayloadSizeType>
using u16string = basic_string<char16_t, PayloadSizeType>;
template <typename PayloadSizeType>
using u32string = basic_string<char32_t, PayloadSizeType>;

}

#endif