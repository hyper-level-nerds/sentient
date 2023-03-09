//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

/**
 * @file time.c
 * @author Jin (jayjintheprogrammer@gmail.com)
 * @brief implement the Sentient time APIs
 * @version 0.1
 * @date 2023-02-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <sentient/time.h>
#include <sentient/preprocessor/if.h>
#include <sentient/preprocessor/detail/is_macro_for.h>

#include <time.h>

void snt_update_iso8601(struct snt_iso8601* time) {
    struct timespec ts = {};
    
}