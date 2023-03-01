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

// verify the C++ standard 
#if __cplusplus >= 202002L

#include <sentient/detail/concepts/std_string_view.hpp>

#include <string>
#include <memory>
#include <type_traits>
#include <stdexcept>

namespace snt {

/**
 * @brief the standard spec satisfied basic_string class has its own size type for serialization
 * @see https://en.cppreference.com/w/cpp/string/basic_string
 * 
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
    //                      _                   _             
    //   ___ ___  _ __  ___| |_ _ __ _   _  ___| |_ ___  _ __ 
    //  / __/ _ \| '_ \/ __| __| '__| | | |/ __| __/ _ \| '__|
    // | (_| (_) | | | \__ \ |_| |  | |_| | (__| || (_) | |   
    //  \___\___/|_| |_|___/\__|_|   \__,_|\___|\__\___/|_|   
    //
    /////////////////////////////////////////////////////////////////

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
    template <class StringViewLike> requires (detail::concepts::std_string_view<StringViewLike>)
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
    template <class StringViewLike> requires (detail::concepts::std_string_view<StringViewLike>)
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

    /////////////////////////////////////////////////////////////////
    // constructor 15
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard string constructor spec 15th (c++23 ~)
     */
    basic_string(std::nullptr_t) = delete;

    /////////////////////////////////////////////////////////////////
    //                             _                   
    //   ___  _ __   ___ _ __ __ _| |_ ___  _ __ _____ 
    //  / _ \| '_ \ / _ \ '__/ _` | __/ _ \| '__|_____|
    // | (_) | |_) |  __/ | | (_| | || (_) | |  |_____|
    //  \___/| .__/ \___|_|  \__,_|\__\___/|_|         
    //       |_|
    /////////////////////////////////////////////////////////////////

    /////////////////////////////////////////////////////////////////
    // operator= 1
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec 1 satisfied operator= for Sentient
     * 
     * @param str other object
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& operator=(const basic_string& str)
    { return this->assign(str); }

    /**
     * @brief standard basic_string spec 1 satisfied operator= for Base
     * 
     * @param str other object
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& operator=(const base_type& str)
    { return this->assign(str); }

    /////////////////////////////////////////////////////////////////
    // operator= 2
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec 2 satisfied operator= for Sentient
     * 
     * @param str other object
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& operator=(basic_string&& str)
        noexcept(
            std::allocator_traits<
                allocator_type
            >::propagate_on_container_move_assignment::value)
    { return this->assign(std::move(str)); }

    /**
     * @brief standard basic_string spec 2 satisfied operator= for Base
     * 
     * @param str other object
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& operator=(base_type&& str)
    { return this->assign(std::move(str)); }

    /////////////////////////////////////////////////////////////////
    // operator= 3
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec 3 satisfied operator=
     * 
     * @param s const C string (must have 0 value at the last element)
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& operator=(const_pointer s)
    { return this->assign(s); }

    /////////////////////////////////////////////////////////////////
    // operator= 4
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec 4 satisfied operator=
     * 
     * @param ch single value
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& operator=(value_type ch)
    { return this->assign(ch); }

    /////////////////////////////////////////////////////////////////
    // operator= 5
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec 5 satisfied operator=
     * 
     * @param ilist initializer list object for value_type
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& operator=(std::initializer_list<value_type> ilist)
    { return this->assign(ilist); }

    /////////////////////////////////////////////////////////////////
    // operator= 6
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec 6 satisfied operator=
     * 
     * @tparam StringViewLike standard string_view spec satisfied type
     * @param t string_view object
     * @return constexpr basic_string& this object
     */
    template <class StringViewLike> requires (detail::concepts::std_string_view<StringViewLike>)
    constexpr basic_string& operator=(const StringViewLike& t)
    { return this->assign(t); }

    /////////////////////////////////////////////////////////////////
    // operator= 7
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec 7 satisfied operator=
     * 
     * @return constexpr basic_string& do not return
     */
    constexpr basic_string& operator=(std::nullptr_t) = delete;

    /////////////////////////////////////////////////////////////////
    //                _             
    //   __ _ ___ ___(_) __ _ _ __  
    //  / _` / __/ __| |/ _` | '_ \ 
    // | (_| \__ \__ \ | (_| | | | |
    //  \__,_|___/___/_|\__, |_| |_|
    //                  |___/       
    // 
    /////////////////////////////////////////////////////////////////

    /////////////////////////////////////////////////////////////////
    // assign 1
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec assign 1
     * 
     * @param count buffer count to assign
     * @param ch value to be filled
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& assign(
        size_type count,
        value_type ch)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(count, ch);
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // assign 2
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec assign 2
     * 
     * @param str "Sentient" value to copy from
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& assign(const basic_string& str)
    {
        base_type::assign(str);
        return *this;
    }

    /**
     * @brief standard basic_string spec assign 2
     * 
     * @param str "base_type" value to copy from
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& assign(const base_type& str)
    {
        if (str.size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::assign(str);
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // assign 3
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec assign 3 for Sentient
     * 
     * @param str other object
     * @param pos other object's offset
     * @param count buffer count to copy
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& assign(
        const basic_string& str,
        size_type pos,
        size_type count = base_type::npos)
    { return base_type::assign(str, pos, count); }

    /**
     * @brief standard basic_string spec assign 3 for Base
     * 
     * @param str other object
     * @param pos other object's offset
     * @param count buffer count to copy
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& assign(
        const base_type& str,
        size_type pos,
        size_type count = base_type::npos)
    {
        auto const other_size =
            str.size() - pos - (count == base_type::npos ? 0 : count);
        if (other_size > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::assign(str, pos, count);
    }

    /////////////////////////////////////////////////////////////////
    // assign 4
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec assign 4 for Sentient
     * 
     * @param str other object
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& assign(basic_string&& str)
        noexcept(noexcept(base_type::assign(std::move(str))))
    {
        return base_type::assign(std::move(str));
    }

    /**
     * @brief standard basic_string spec assign 4 for Base
     * 
     * @param str other object
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& assign(base_type&& str)
        noexcept(noexcept(base_type::assign(str)))
    {
        if (str.size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::assign(std::move(str));
    }

    /////////////////////////////////////////////////////////////////
    // assign 5
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec assign 5
     * 
     * @param s const C string
     * @param count size of the C string
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& assign(
        const_pointer s,
        size_type count)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::assign(s, count);
    }

    /////////////////////////////////////////////////////////////////
    // assign 6
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec assign 6
     * 
     * @param s const C string
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& assign(const_pointer s)
    {
        if (traits_type::length(s) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::assign(s);
    }

    /////////////////////////////////////////////////////////////////
    // assign 7
    /////////////////////////////////////////////////////////////////
    
    /**
     * @brief standard basic_string spec assign 7
     * 
     * @tparam InputIt input iterator
     * @param first begin
     * @param last end
     * @return constexpr basic_string& this object
     */
    template <class InputIt>
    constexpr basic_string& assign(
        InputIt first,
        InputIt last)
    {
        if (std::distance(first, last) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::assign(first, last);
    }

    /////////////////////////////////////////////////////////////////
    // assign 8
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec assign 8
     * 
     * @param ilist initializer list object
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& assign(std::initializer_list<value_type> ilist)
    {
        if (std::distance(ilist.begin(), ilist.end()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::assign(ilist);
    }

    /////////////////////////////////////////////////////////////////
    // assign 9
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec assign 9
     * 
     * @tparam StringViewLike standard string_view spec satisfied type
     * @param t string_view object
     * @return constexpr basic_string& this object
     */
    template <class StringViewLike> requires (detail::concepts::std_string_view<StringViewLike>)
    constexpr basic_string& assign(const StringViewLike& t)
    {
        if (t.size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::assign(t);
    }

    /////////////////////////////////////////////////////////////////
    // assign 10
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec assign 10
     * 
     * @tparam StringViewLike standard string_view spec satisfied type
     * @param t string_view object
     * @param pos string_view object buffer offset
     * @param count buffer count to copy
     * @return constexpr basic_string& this object
     */
    template <class StringViewLike> requires (detail::concepts::std_string_view<StringViewLike>)
    constexpr basic_string& assign(
        const StringViewLike& t,
        size_type pos,
        size_type count = base_type::npos)
    {
        auto const other_size =
            t.size() - pos - (count == base_type::npos ? 0 : count);
        if (other_size > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::assign(t, pos, count);
    }

    /////////////////////////////////////////////////////////////////
    //                                    
    //  _ __ ___  ___  ___ _ ____   _____ 
    // | '__/ _ \/ __|/ _ \ '__\ \ / / _ \
    // | | |  __/\__ \  __/ |   \ V /  __/
    // |_|  \___||___/\___|_|    \_/ \___|
    //  
    /////////////////////////////////////////////////////////////////

    /**
     * @brief reserve internal buffer
     * 
     * @param new_cap buffer size to reserve
     */
    constexpr void reserve(size_type new_cap)
    {
        if (new_cap > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::reserve(new_cap);
    }

    /////////////////////////////////////////////////////////////////
    //  _                     _   
    // (_)_ __  ___  ___ _ __| |_ 
    // | | '_ \/ __|/ _ \ '__| __|
    // | | | | \__ \  __/ |  | |_ 
    // |_|_| |_|___/\___|_|   \__|
    //                            
    // 
    /////////////////////////////////////////////////////////////////

    /////////////////////////////////////////////////////////////////
    // insert 1
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec insert 1
     * 
     * @param index internal buffer offset to insert
     * @param count number of elements to insert
     * @param ch value to fill the buffer
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& insert(
        size_type index,
        size_type count,
        value_type ch)
    {
        if ((base_type::size() + count) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(index, count, ch);
    }

    /////////////////////////////////////////////////////////////////
    // insert 2
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec insert 2
     * 
     * @param index internal buffer offset to insert
     * @param s const C string to insert
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& insert(
        size_type index,
        const_pointer s)
    {
        if ((base_type::size() + traits_type::length(s)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(index, s);
    }

    /////////////////////////////////////////////////////////////////
    // insert 3
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec insert 3
     * 
     * @param index internal buffer offset to insert
     * @param s const C string to insert
     * @param count C string length to insert
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& insert(
        size_type index,
        const_pointer s,
        size_type count)
    {
        if ((base_type::size() + count) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(index, s, count);
    }

    /////////////////////////////////////////////////////////////////
    // insert 4
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec insert 4 for Sentient
     * 
     * @param index internal buffer offset to insert
     * @param str sentient basic_string object to insert
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& insert(
        size_type index,
        const basic_string& str)
    {
        if ((base_type::size() + str.size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(index, str);
    }

    /**
     * @brief standard basic_string spec insert 4 for Base
     * 
     * @param index internal buffer offset to insert
     * @param str base type object to insert
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& insert(
        size_type index,
        const base_type& str)
    {
        if ((base_type::size() + str.size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(index, str);
    }

    /////////////////////////////////////////////////////////////////
    // insert 5
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec insert 5 for Sentient
     * 
     * @param index internal buffer offset to insert
     * @param str sentient basic_string object to insert
     * @param index_str offset of str to copy from
     * @param count buffer length to copy
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& insert(
        size_type index,
        const basic_string& str,
        size_type index_str,
        size_type count = base_type::npos)
    {
        auto const str_length =
            str.size() - index_str -
                count == base_type::npos ? 0 : count;
        if ((base_type::size() + str_length) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(index, str, index_str, count);
    }

    /**
     * @brief standard basic_string spec insert 5 for Base
     * 
     * @param index internal buffer offset to insert
     * @param str base type object to insert
     * @param index_str offset of str to copy from
     * @param count buffer length to copy
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& insert(
        size_type index,
        const base_type& str,
        size_type index_str,
        size_type count = base_type::npos)
    {
        auto const str_length =
            str.size() - index_str -
                count == base_type::npos ? 0 : count;
        if ((base_type::size() + str_length) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(index, str, index_str, count);
    }


    /////////////////////////////////////////////////////////////////
    // insert 6
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec insert 6
     * 
     * @param pos location to insert
     * @param ch single value to inserts
     * @return constexpr iterator inserted location
     */
    constexpr iterator insert(
        const_iterator pos,
        value_type ch)
    {
        if ((base_type::size() + 1) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(pos, ch);
    }

    /////////////////////////////////////////////////////////////////
    // insert 7
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec insert 7
     * 
     * @param pos location to insert
     * @param count element count to insert
     * @param ch value to fill
     * @return constexpr iterator inserted location
     */
    constexpr iterator insert(
        const_iterator pos,
        size_type count,
        value_type ch)
    {
        if ((base_type::size() + count) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(pos, count, ch);
    }

    /////////////////////////////////////////////////////////////////
    // insert 8
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec insert 8
     * 
     * @tparam InputIt standard basic_string input iterator compatible type
     * @param pos location to insert
     * @param first begin
     * @param last end
     * @return constexpr iterator inserted location
     */
    template <class InputIt>
    constexpr iterator insert(
        const_iterator pos,
        InputIt first,
        InputIt last)
    {
        if ((base_type::size() + std::distance(first, last)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(pos, first, last);
    }

    /////////////////////////////////////////////////////////////////
    // insert 9
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec insert 9
     * 
     * @param pos location to insert
     * @param ilist initializer list object
     * @return constexpr iterator inserted location
     */
    constexpr iterator insert(
        const_iterator pos,
        std::initializer_list<value_type> ilist)
    {
        if ((base_type::size() +
             std::distance(ilist.begin(), ilist.end())) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(pos, ilist);
    }

    /////////////////////////////////////////////////////////////////
    // insert 10
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec insert 10
     * 
     * @tparam StringViewLike standard basic_string_view compatible type
     * @param pos location to insert
     * @param t basic_string_view object
     * @return constexpr basic_string& this object
     */
    template <class StringViewLike> requires (detail::concepts::std_string_view<StringViewLike>)
    constexpr basic_string& insert(
        size_type pos,
        const StringViewLike& t)
    {
        if ((base_type::size() + t.size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(pos, t);
    }

    /////////////////////////////////////////////////////////////////
    // insert 11
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard basic_string spec insert 11
     * 
     * @tparam StringViewLike 
     * @param index offset
     * @param t basic_string_view object
     * @param index_str offset of t to start copying
     * @param count t's buffer count
     * @return constexpr basic_string& this object 
     */
    template <class StringViewLike> requires (detail::concepts::std_string_view<StringViewLike>)
    constexpr basic_string& insert(
        size_type index,
        const StringViewLike& t,
        size_type index_str,
        size_type count = base_type::npos)
    {
        auto const t_length =
            t.size() - index_str -
                count == base_type::npos ? 0 : count;
        if ((base_type::size() + t_length) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::insert(index, t, index_str, count);
    }

    /////////////////////////////////////////////////////////////////
    //                  _         _                _    
    //  _ __  _   _ ___| |__     | |__   __ _  ___| | __
    // | '_ \| | | / __| '_ \    | '_ \ / _` |/ __| |/ /
    // | |_) | |_| \__ \ | | |   | |_) | (_| | (__|   < 
    // | .__/ \__,_|___/_| |_|___|_.__/ \__,_|\___|_|\_\
    // |_|                  |_____|                     
    // 
    /////////////////////////////////////////////////////////////////

    /**
     * @brief add an element at the end of buffer
     * 
     * @param ch value to add
     */
    constexpr void push_back(value_type ch)
    {
        if ((base_type::size() + 1) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::push_back(ch);
    }

    /////////////////////////////////////////////////////////////////
    //                                    _ 
    //   __ _ _ __  _ __   ___ _ __   __| |
    //  / _` | '_ \| '_ \ / _ \ '_ \ / _` |
    // | (_| | |_) | |_) |  __/ | | | (_| |
    //  \__,_| .__/| .__/ \___|_| |_|\__,_|
    //       |_|   |_|
    /////////////////////////////////////////////////////////////////

    /////////////////////////////////////////////////////////////////
    // append 1
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard append 1
     * 
     * @param count buffer count to append
     * @param ch value to fill
     * @return this object
     */
    constexpr basic_string& append(
        size_type count,
        value_type ch)
    {
        if ((base_type::size() + count) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return base_type::append(count, ch);
    }

    /////////////////////////////////////////////////////////////////
    // append 2
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard append 2 for Sentient
     * 
     * @param str Sentient basic_string object
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& append(const basic_string& str)
    {
        if ((base_type::size() + str.size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(str);
        return *this;
    }

    /**
     * @brief standard append 2 for Base
     * 
     * @param str Base basic_string object
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& append(const base_type& str)
    {
        if ((base_type::size() + str.size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(str);
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // append 3
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard append 3 for Sentient
     * 
     * @param str Sentient string object
     * @param pos position
     * @param count count
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& append(
        const basic_string& str,
        size_type pos,
        size_type count = base_type::npos)
    {
        auto const str_length =
            str.size() - pos -
                count == base_type::npos ? 0 : count;
        if ((base_type::size() + str_length) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(str, pos, count);
        return *this;
    }

    /**
     * @brief standard append 3 for Base
     * 
     * @param str Base string object
     * @param pos position
     * @param count count
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& append(
        const base_type& str,
        size_type pos,
        size_type count = base_type::npos)
    {
        auto const str_length =
            str.size() - _POSIX2_BC_BASE_MAX -
                count == base_type::npos ? 0 : count;
        if ((base_type::size() + str_length) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(str, pos, count);
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // append 4
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @param s 
     * @param count 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& append(
        const_pointer s,
        size_type count)
    {
        if ((base_type::size() + count) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(s, count);
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // append 5
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @param s 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& append(const_pointer s)
    {
        if ((base_type::size() + traits_type::length(s)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(s);
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // append 6
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @tparam InputIt 
     * @param first 
     * @param last 
     * @return constexpr basic_string& 
     */
    template <class InputIt>
    constexpr basic_string& append(
        InputIt first,
        InputIt last)
    {
        if ((base_type::size() + std::distance(first, last)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(first, last);
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // append 7
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @param ilist 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& append(std::initializer_list<value_type> ilist)
    {
        if ((base_type::size() + std::distance(ilist, ilist)) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(ilist);
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // append 8
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @tparam StringViewLike 
     * @param t 
     * @return constexpr basic_string& 
     */
    template <class StringViewLike> requires (detail::concepts::std_string_view<StringViewLike>)
    constexpr basic_string& append(const StringViewLike& t)
    {
        if ((base_type::size() + t.size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(t);
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // append 9
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @tparam StringViewLike 
     * @param t 
     * @param pos 
     * @param count 
     * @return constexpr basic_string& 
     */
    template <class StringViewLike> requires (detail::concepts::std_string_view<StringViewLike>)
    constexpr basic_string& append(
        const StringViewLike& t,
        size_type pos,
        size_type count = base_type::npos)
    {
        auto const t_length =
            t.size() - pos -
                count == base_type::npos ? 0 : count;
        if ((base_type::size() + t_length) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::append(t, pos, count);
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    //                             _                        
    //   ___  _ __   ___ _ __ __ _| |_ ___  _ __  _   _____ 
    //  / _ \| '_ \ / _ \ '__/ _` | __/ _ \| '__|| |_|_____|
    // | (_) | |_) |  __/ | | (_| | || (_) | | |_   _|_____|
    //  \___/| .__/ \___|_|  \__,_|\__\___/|_|   |_|        
    //       |_| 
    /////////////////////////////////////////////////////////////////

    /**
     * @brief standard operator+= 1 for Sentient
     * 
     * @param str other basic_string object
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& operator+=(const basic_string& str)
    { return this->append(str); }

    /**
     * @brief standard operator+= 1 for Base
     * 
     * @param str other basic_string object
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& operator+=(const base_type& str)
    { return this->append(str); }

    /**
     * @brief standard operator+= 2
     * 
     * @param ch single value type object
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& operator+=(value_type ch)
    { return this->append(ch); }

    /**
     * @brief standard operator+= 3
     * 
     * @param s const C string
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& operator+=(const_pointer s)
    { return this->append(s); }

    /**
     * @brief standard operator+= 4
     * 
     * @param ilist initializer_list object
     * @return constexpr basic_string& this object
     */
    constexpr basic_string& operator+=(std::initializer_list<value_type> ilist)
    { return this->append(ilist); }

    /**
     * @brief standard operator+= 5
     * 
     * @tparam StringViewLike basic_string_view compatible object
     * @param t basic_string_view object
     * @return constexpr basic_string& this object
     */
    template <class StringViewLike> requires (detail::concepts::std_string_view<StringViewLike>)
    constexpr basic_string& operator+=(const StringViewLike& t)
    { return this->append(t); }


    /////////////////////////////////////////////////////////////////
    //                 _                
    //  _ __ ___ _ __ | | __ _  ___ ___ 
    // | '__/ _ \ '_ \| |/ _` |/ __/ _ \
    // | | |  __/ |_) | | (_| | (_|  __/
    // |_|  \___| .__/|_|\__,_|\___\___|
    //          |_|
    /////////////////////////////////////////////////////////////////    

    /////////////////////////////////////////////////////////////////
    // replace 1
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @param pos 
     * @param count 
     * @param str 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& replace(
        size_type pos,
        size_type count,
        const basic_string& str)
    {
        base_type::replace(pos, count, str);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /**
     * @brief 
     * 
     * @param pos 
     * @param count 
     * @param str 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& replace(
        size_type pos,
        size_type count,
        const base_type& str)
    {
        base_type::replace(pos, count, str);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // replace 2
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @param first 
     * @param last 
     * @param str 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& replace(
        const_iterator first,
        const_iterator last,
        const basic_string& str)
    {
        base_type::replace(first, last, str);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /**
     * @brief 
     * 
     * @param first 
     * @param last 
     * @param str 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& replace(
        const_iterator first,
        const_iterator last,
        const base_type& str)
    {
        base_type::replace(first, last, str);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // replace 3
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @param pos 
     * @param count 
     * @param str 
     * @param pos2 
     * @param count2 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& replace(
        size_type pos,
        size_type count,
        const basic_string& str,
        size_type pos2,
        size_type count2 = base_type::npos)
    {
        base_type::replace(pos, count, str, pos2, count2);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /**
     * @brief 
     * 
     * @param pos 
     * @param count 
     * @param str 
     * @param pos2 
     * @param count2 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& replace(
        size_type pos,
        size_type count,
        const base_type& str,
        size_type pos2,
        size_type count2 = base_type::npos)
    {
        base_type::replace(pos, count, str, pos2, count2);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // replace 4
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @tparam InputIt 
     * @param first 
     * @param last 
     * @param first2 
     * @param last2 
     * @return constexpr basic_string& 
     */
    template <class InputIt>
    constexpr basic_string& replace(
        const_iterator first,
        const_iterator last,
        InputIt first2,
        InputIt last2)
    {
        base_type::replace(first, last, first2, last2);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // replace 5
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @param pos 
     * @param count 
     * @param cstr 
     * @param count2 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& replace(
        size_type pos,
        size_type count,
        const_pointer cstr,
        size_type count2)
    {
        base_type::replace(pos, count, cstr, count2);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // replace 6
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @param first 
     * @param last 
     * @param cstr 
     * @param count2 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& replace(
        const_iterator first,
        const_iterator last,
        const_pointer cstr,
        size_type count2)
    {
        base_type::replace(first, last, cstr, count2);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // replace 7
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @param pos 
     * @param count 
     * @param cstr 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& replace(
        size_type pos,
        size_type count,
        const_pointer cstr)
    {
        base_type::replace(pos, count, cstr);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // replace 8
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @param first 
     * @param last 
     * @param cstr 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& replace(
        const_iterator first,
        const_iterator last,
        const_pointer cstr)
    {
        base_type::replace(first, last, cstr);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // replace 9
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @param pos 
     * @param count 
     * @param count2 
     * @param ch 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& replace(
        size_type pos,
        size_type count,
        size_type count2,
        value_type ch)
    {
        base_type::replace(pos, count, count2, ch);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // replace 10
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @param first 
     * @param last 
     * @param count2 
     * @param ch 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& replace(
        const_iterator first,
        const_iterator last,
        size_type count2,
        value_type ch)
    {
        base_type::replace(first, last, count2, ch);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // replace 11
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @param first 
     * @param last 
     * @param ilist 
     * @return constexpr basic_string& 
     */
    constexpr basic_string& replace(
        const_iterator first,
        const_iterator last,
        std::initializer_list<value_type> ilist)
    {
        base_type::replace(first, last, ilist);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // replace 12
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @tparam StringViewLike 
     * @param pos 
     * @param count 
     * @param t 
     * @return constexpr basic_string& 
     */
    template <class StringViewLike> requires (detail::concepts::std_string_view<StringViewLike>)
    constexpr basic_string& replace(
        size_type pos,
        size_type count,
        const StringViewLike& t)
    {
        base_type::replace(pos, count, t);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // replace 13
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @tparam StringViewLike 
     * @param first 
     * @param last 
     * @param t 
     * @return constexpr basic_string& 
     */
    template <class StringViewLike> requires (detail::concepts::std_string_view<StringViewLike>)
    constexpr basic_string& replace(
        const_iterator first,
        const_iterator last,
        const StringViewLike& t)
    {
        base_type::replace(first, last, t);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    // replace 14
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @tparam StringViewLike 
     * @param pos 
     * @param count 
     * @param t 
     * @param pos2 
     * @param count2 
     * @return constexpr basic_string& 
     */
    template <class StringViewLike> requires (detail::concepts::std_string_view<StringViewLike>)
    constexpr basic_string& replace(
        size_type pos,
        size_type count,
        const StringViewLike& t,
        size_type pos2,
        size_type count2 = base_type::npos)
    {
        base_type::replace(pos, count, t, pos2, count2);
        if ((base_type::size()) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        return *this;
    }

    /////////////////////////////////////////////////////////////////
    //                _         
    //  _ __ ___  ___(_)_______ 
    // | '__/ _ \/ __| |_  / _ \
    // | | |  __/\__ \ |/ /  __/
    // |_|  \___||___/_/___\___|
    //     
    /////////////////////////////////////////////////////////////////

    /**
     * @brief 
     * 
     * @param count 
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
     * @brief 
     * 
     * @param count 
     * @param ch 
     */
    constexpr void resize(size_type count, value_type ch)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
        base_type::resize(count, ch);
    }

    /**
     * @brief custom copy constructor for each Sentient basic_string
     * 
     * @tparam OtherPayloadSizeType
     * @param other other basic_string object
     */
    template <class OtherPayloadSizeType>
        requires (std::same_as<OtherPayloadSizeType, payload_size_type> == false)
    constexpr basic_string(
        const basic_string<
            value_type,
            OtherPayloadSizeType,
            CharTraits,
            Allocator,
            BaseContainer
        >& other) :
        base_type(other)
    {
        if constexpr (sizeof(payload_size_type) < sizeof(OtherPayloadSizeType))
        {
            if (other.size() > this->max_size())
            {
                throw std::overflow_error(exceeded_message);
            }
        }
    }

    /**
     * @brief custom move constructor for each Sentient basic_string
     * 
     * @tparam OtherPayloadSizeType
     * @param other other basic_string object
     */
    template <class OtherPayloadSizeType>
        requires (std::same_as<OtherPayloadSizeType, payload_size_type> == false)
    constexpr basic_string(
        basic_string<
            value_type,
            OtherPayloadSizeType,
            CharTraits,
            Allocator,
            BaseContainer
        >&& other) :
        base_type(std::move(other))
    {
        if constexpr (sizeof(payload_size_type) < sizeof(OtherPayloadSizeType))
        {
            if (base_type::size() > this->max_size())
            {
                throw std::overflow_error(exceeded_message);
            }
        }
    }

    /**
     * @brief 
     * 
     * @tparam OtherPayloadSizeType 
     * @return basic_string<value_type, OtherPayloadSizeType, traits_type, allocator_type, base_type> 
     */
    template <class OtherPayloadSizeType>
        requires (std::same_as<OtherPayloadSizeType, payload_size_type> == false)
    constexpr operator basic_string<value_type, OtherPayloadSizeType, traits_type, allocator_type, base_type> ()
    {
        if constexpr (sizeof(payload_size_type) > sizeof(OtherPayloadSizeType))
        {
            if (base_type::size() > std::numeric_limits<OtherPayloadSizeType>::max())
            {
                throw std::overflow_error(exceeded_message);
            }
        }
        return static_cast<base_type>(*this);
    }

    /**
     * @brief max size
     * 
     * @return constexpr size_type max size value
     */
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

}

#else
#error "Go get the compiler that supports over c++20 to use Sentient"
#endif // #if __cplusplus >= 202002L

#endif