//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_PRIMITIVE_TYPES_HPP
#define SENTIENT_PRIMITIVE_TYPES_HPP

#include <cstdint>
#include <cstddef>
#include <cmath>
#include <type_traits>

namespace snt {

using isize = std::make_signed_t<std::size_t>;
using usize = std::make_unsigned_t<std::size_t>;

using u8 = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;
using i8 = std::int8_t;
using i16 = std::int16_t;
using i32 = std::int32_t;
using i64 = std::int64_t;

using f32 = std::float_t;
using f64 = std::double_t;

}

#endif