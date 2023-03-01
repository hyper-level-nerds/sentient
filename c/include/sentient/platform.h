//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SNT_PLATFORM_H
#define SNT_PLATFORM_H

/**
 * @file platform.h
 * @author Jin (jayjintheprogrammer@gmail.com)
 * @brief wrap platform dependent C APIs
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <sentient/push_cpp_guard.h>

#if defined(__ZEPHYR__)
#include <zephyr/kernel.h>
#define SNT_MALLOC(size) k_malloc(size)
#define SNT_CALLOC(len, size) k_calloc(len, size)
#define SNT_FREE(ptr) k_free(ptr)
#elif defined(__unix__)
#include <stdlib.h>
#include <errno.h>
#define SNT_MALLOC(size) malloc(size)
#define SNT_CALLOC(len, size)calloc(len, size)
#define SNT_FREE(ptr) free(ptr)
#else

#endif

#include <sentient/pop_cpp_guard.h>

#endif