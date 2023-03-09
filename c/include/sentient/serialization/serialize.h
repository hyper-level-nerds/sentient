//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_SERIALIZATION_SERIALIZE_H
#define SENTIENT_SERIALIZATION_SERIALIZE_H

#include <stddef.h>

#include <sentient/config.h>
#include <sentient/type_info.h>
#include <sentient/primitive_types.h>

#include <sentient/push_cpp_guard.h>

#define snt_serialize(type_name, model_ptr, u8_ptr_buffer, size_t_buffer_size) \
        snt_impl_serialize( \
            snt_get_type_info(type_name), \
            model_ptr, \
            u8_ptr_buffer, \
            size_t_buffer_size \
        )

snt_i32 SNT_SOFTMANGLE(snt_impl_serialize)(struct snt_type_info*, void*, snt_u8*, size_t);

#include <sentient/pop_cpp_guard.h>

#endif