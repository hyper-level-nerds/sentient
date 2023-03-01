//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_FIELD_INFO_H
#define SENTIENT_FIELD_INFO_H

/**
 * @file field_info.h
 * @author Jin (jayjintheprogrammer@gmail.com)
 * @brief define field info interface
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include <sentient/preprocessor/detail/is_macro_for.h>

#include <sentient/push_cpp_guard.h>

/**
 * @brief used to store each field of struct or union types
 */
struct snt_field_info {
    bool                  is_ignored;
    bool                  is_bit_field;
    size_t                bit_size;
    char*                 field_type_name;
    char*                 field_name;
    ptrdiff_t             field_offset;
};

#include <sentient/pop_cpp_guard.h>

#endif