//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_PRIMITIVE_TYPES_H
#define SENTIENT_PRIMITIVE_TYPES_H

/**
 * @file primitive_types.h
 * @author Jin (jayjintheprogrammer@gmail.com)
 * @brief define and store primitive C types info
 * @version 0.1
 * @date 2023-02-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include <sentient/detail/wrap_decl_primitive_types.h>
#include <sentient/type_info.h>

#include <sentient/push_cpp_guard.h>

/**
 * @brief define Sentient type aliases for primitive types 
 */
___SNT_WRAP_DECL_PRIMITIVE_TYPES(
    (bool, snt_bool),
    (char, snt_char),
    (uint8_t, snt_u8),
    (uint16_t, snt_u16),
    (uint32_t, snt_u32),
    (uint64_t, snt_u64),
    (int8_t, snt_i8),
    (int16_t, snt_i16),
    (int32_t, snt_i32),
    (int64_t, snt_i64),
    (float, snt_f32),
    (double, snt_f64)
)

#include <sentient/pop_cpp_guard.h>

#endif