//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_TYPE_ENUMERATIONS_H
#define SENTIENT_TYPE_ENUMERATIONS_H

#include <stdint.h>
#include <stddef.h>

#include <sentient/push_cpp_guard.h>

enum snt_type_enumerations {
    SNT_TYPE_PRIMITIVE = 0,
    SNT_TYPE_STRUCT,
    SNT_TYPE_UNION,
    
};

#include <sentient/pop_cpp_guard.h>

#endif