//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_DETAIL_MACRO_SYMBOLS_H
#define SENTIENT_DETAIL_MACRO_SYMBOLS_H

/**
 * @file macro_symbols.h
 * @author Jin (jayjintheprogrammer@gmail.com)
 * @brief define some macro symbols
 * @version 0.1
 * @date 2023-03-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdint.h>
#include <stddef.h>

#include <sentient/preprocessor/detail/is_macro_for.h>

#include <sentient/push_cpp_guard.h>

#define SNT_PP_IS_MACRO_FOR_native(x) x
#define SNT_PP_IS_MACRO_FOR_struct(x) x
#define SNT_PP_IS_MACRO_FOR_union(x) x

#include <sentient/pop_cpp_guard.h>

#endif