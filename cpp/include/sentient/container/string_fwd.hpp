//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONTAINER_STRING_FWD_HPP
#define SENTIENT_CONTAINER_STRING_FWD_HPP

#if __cplusplus >= 202002L

#include <sentient/container/basic_string.hpp>
#include <sentient/container/basic_string_view.hpp>

namespace snt {

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

#else
#error "Go get the compiler that supports over c++20 to use Sentient"
#endif // #if __cplusplus >= 202002L

#endif 