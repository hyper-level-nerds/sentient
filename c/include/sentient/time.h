//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_TIME_H
#define SENTIENT_TIME_H

/**
 * @file time.h
 * @author Jin (jayjintheprogrammer@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stddef.h>

#include <sentient/config.h>
#include <sentient/primitive_types.h>

#include <sentient/push_cpp_guard.h>

typedef snt_u64 snt_ptime64;
typedef snt_u32 snt_ptime32;
SNT_API snt_ptime32 snt_ptime32_get_epoch();
SNT_API snt_ptime64 snt_ptime64_get_epoch();

struct snt_iso8601 {
    
};

struct snt_timeval128 {

};

struct snt_timespec128 {

};

struct snt_datetime32 {

};

struct snt_datetime64 {

};

#include <sentient/pop_cpp_guard.h>

#endif