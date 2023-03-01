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

/**
 * @file primitive_types.hpp
 * @author Jin (jayjintheprogrammer.com)
 * @brief define primitive types for Sentient
 * @version 0.1
 * @date 2023-02-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <cstdint>
#include <cstddef>
#include <cmath>
#include <type_traits>

namespace snt {

/**
 * @brief signed size type
 * 
 */
using isize = std::make_signed_t<std::size_t>;

/**
 * @brief unsigned size type
 * 
 */
using usize = std::make_unsigned_t<std::size_t>;

/**
 * @brief unsigned 8 bit integer type
 * 
 */
using u8 = std::uint8_t;

/**
 * @brief unsigned 16 bit integer type
 * 
 */
using u16 = std::uint16_t;

/**
 * @brief unsigned 32 bit integer type
 * 
 */
using u32 = std::uint32_t;

/**
 * @brief unsigned 64 bit integer type
 * 
 */
using u64 = std::uint64_t;

/**
 * @brief signed 8 bit integer type
 * 
 */
using i8 = std::int8_t;

/**
 * @brief signed 16 bit integer type
 * 
 */
using i16 = std::int16_t;

/**
 * @brief signed 32 bit integer type
 * 
 */
using i32 = std::int32_t;

/**
 * @brief signed 64 bit integer type
 * 
 */
using i64 = std::int64_t;

/**
 * @brief 32 bit floating point type
 * 
 */
using f32 = std::float_t;

/**
 * @brief 64 bit floating point type
 * 
 */
using f64 = std::double_t;

}

#endif