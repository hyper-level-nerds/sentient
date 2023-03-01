//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_DETAIL_WRAP_DECL_PRIMITIVES_TYPE_H
#define SENTIENT_DETAIL_WRAP_DECL_PRIMITIVES_TYPE_H

/**
 * @file wrap_decl_primitive_types.h
 * @author Jin (jayjintheprogrammer@gmail.com)
 * @brief make aliases and store the Sentient primitive type metadata
 * @version 0.1
 * @date 2023-02-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdint.h>
#include <stddef.h>

#include <sentient/preprocessor/cat.h>
#include <sentient/preprocessor/tuple.h>
#include <sentient/preprocessor/seq.h>
#include <sentient/preprocessor/stringize.h>
#include <sentient/detail/decl_vec_types.h>

#include <sentient/push_cpp_guard.h>

#ifndef ___SNT_STORE_METADATA_FOR_PRIMITIVE_TYPES

#define ___SNT_WRAP_DECL_PRIMITIVE_TYPES_MACRO(r, data, elem)                \
        typedef SNT_PP_TUPLE_ELEM(2, 0, elem) SNT_PP_TUPLE_ELEM(2, 1, elem); \
        

#define ___SNT_WRAP_DECL_PRIMITIVE_VEC_TYPES_MACRO(r, data, elem)            \
        typedef struct { snt_u8 size;  }              \
        SNT_PP_CAT(SNT_PP_TUPLE_ELEM(2, 1, elem), _vec_s8);

#define ___SNT_WRAP_DECL_PRIMITIVE_TYPES(...)       \
        SNT_PP_SEQ_FOR_EACH(                        \
            ___SNT_WRAP_DECL_PRIMITIVE_TYPES_MACRO, \
            _,                                      \
            SNT_PP_TUPLE_TO_SEQ(( __VA_ARGS__ ))    \
        )
        
#else // #ifndef ___SNT_STORE_METADATA_FOR_PRIMITIVE_TYPES

#define ___SNT_WRAP_STORE_PRIMITIVE_TYPES_MACRO(r, data, elem)                              \
        static struct snt_type_info                                                         \
        SNT_SOFTMANGLE(SNT_PP_CAT(snt_type_info_, SNT_PP_TUPLE_ELEM(2, 1, elem))) = {       \
            .is_primitive = true,                                                           \
            .is_struct = false,                                                             \
            .is_union = false,                                                              \
            .type_name =                                                                    \
                SNT_PP_STRINGIZE(SNT_PP_CAT(snt_, SNT_PP_TUPLE_ELEM(2, 1, elem))),          \
            .type_size = sizeof(SNT_PP_TUPLE_ELEM(2, 0, elem)),           \
            .fields = NULL,                                                                 \
            .n_fields = 0,                                                                  \
        };

#define ___SNT_WRAP_DECL_PRIMITIVE_TYPE_NODES_MACRO(r, data, elem)                               \
        {                                                                                        \
            .__identifier =                                                                      \
                (uintptr_t)SNT_PP_STRINGIZE(SNT_PP_CAT(snt_, SNT_PP_TUPLE_ELEM(2, 1, elem))),    \
            .__info = &SNT_SOFTMANGLE(SNT_PP_CAT(snt_type_info_, SNT_PP_TUPLE_ELEM(2, 1, elem))) \
        },

#define ___SNT_WRAP_DECL_PRIMITIVE_TYPES(...)                \
        SNT_PP_SEQ_FOR_EACH(                                 \
            ___SNT_WRAP_STORE_PRIMITIVE_TYPES_MACRO,         \
            _,                                               \
            SNT_PP_TUPLE_TO_SEQ(( __VA_ARGS__ ))             \
        )                                                    \
        struct SNT_SOFTMANGLE(snt_type_info_dict_node)       \
        SNT_SOFTMANGLE(snt_primitive_type_nodes)[] = {       \
            SNT_PP_SEQ_FOR_EACH(                             \
                ___SNT_WRAP_DECL_PRIMITIVE_TYPE_NODES_MACRO, \
                _,                                           \
                SNT_PP_TUPLE_TO_SEQ(( __VA_ARGS__ ))         \
            )                                                \
        };

#endif // #ifndef ___SNT_STORE_METADATA_FOR_PRIMITIVE_TYPES

#include <sentient/pop_cpp_guard.h>

#endif