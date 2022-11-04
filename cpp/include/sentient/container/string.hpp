//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONTAINER_STRING_HPP
#define SENTIENT_CONTAINER_STRING_HPP

#include <string>
#include <memory>
#include <type_traits>
#include <stdexcept>

namespace snt {

template <
    typename CharType,
    typename PayloadSizeType,
    typename CharTraits = std::char_traits<CharType>,
    typename Allocator = std::allocator<CharType>,
    typename BaseContainer =
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

    constexpr basic_string() noexcept(noexcept(allocator_type())) : base_type() {}

    explicit constexpr basic_string(const allocator_type& alloc) noexcept :
        base_type(alloc)
    { }

    constexpr basic_string(size_type count, value_type ch,
        const allocator_type& alc = allocator_type()) :
        base_type(count, ch, alc)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    constexpr basic_string(const basic_string& other,
        size_type pos, const allocator_type alc = allocator_type()) :
        base_type(other, pos, alc)
    {}

    constexpr basic_string(const base_type& other,
        size_type pos, const allocator_type alc = allocator_type()) :
        base_type(other, pos, alc)
    {
        
    }

    constexpr basic_string(const_pointer s, size_type count,
        const allocator_type& alc = allocator_type())
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }



    constexpr size_type max_size() const noexcept
    {
        constexpr auto type_size_max = static_cast<std::size_t>(std::numeric_limits<payload_size_type>::max());
        auto allc_max =
            static_cast<decltype(type_size_max)>(std::allocator_traits<allocator_type>::max_size(base_type::get_allocator()));

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