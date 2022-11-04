//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONTAINER_STATIC_STRING_HPP
#define SENTIENT_CONTAINER_STATIC_STRING_HPP

#include <boost/static_string.hpp>

#include <memory>
#include <cstddef>

namespace snt {

template <
    std::size_t Size,
    typename CharType,
    typename CharTraits = std::char_traits<CharType>,
    typename BaseContainer =
        boost::static_strings::basic_static_string<
            Size,
            CharTraits
        >
>
using basic_static_string = BaseContainer;

template <
    std::size_t Size,
    typename CharTraits = std::char_traits<char>
>
using static_string =
    basic_static_string<
        Size,
        char,
        CharTraits
    >;

template <
    std::size_t Size,
    typename CharTraits = std::char_traits<wchar_t>
>
using static_wstring =
    basic_static_string<
        Size,
        wchar_t,
        CharTraits
    >;

template <
    std::size_t Size,
    typename CharTraits = std::char_traits<char8_t>
>
using static_u8string =
    basic_static_string<
        Size,
        char8_t,
        CharTraits
    >;

template <
    std::size_t Size,
    typename CharTraits = std::char_traits<char16_t>
>
using static_u16string =
    basic_static_string<
        Size,
        char16_t,
        CharTraits
    >;

template <
    std::size_t Size,
    typename CharTraits = std::char_traits<char32_t>
>
using static_u32string =
    basic_static_string<
        Size,
        char32_t,
        CharTraits
    >;


}

#endif