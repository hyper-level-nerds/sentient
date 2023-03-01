//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONFIG_H
#define SENTIENT_CONFIG_H

/**
 * @file config.h
 * @author Jin (jayjintheprogrammer@gmail.com)
 * @brief define some Sentient macros
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <sentient/preprocessor/cat.h>

#include <sentient/push_cpp_guard.h>

#define SNT_API // __attribute__((__visibility__("default")))

#define SNT_SOFTMANGLE(token) SNT_PP_CAT(___, token)

#define SNT_AUTOCALL __attribute__((constructor))

#define SNT_AUTOCALL_INIT_FUNC(token) \
        SNT_AUTOCALL static void SNT_SOFTMANGLE(token)()

#define SNT_FIELD_OFFSET(type, field) \
        __builtin_offsetof(type, field)

#include <sentient/pop_cpp_guard.h>

#endif