//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_DETAIL_DECL_VEC_TYPES_H
#define SENTIENT_DETAIL_DECL_VEC_TYPES_H

/**
 * @file decl_vec_types.h
 * @author Jin (jayjintheprogrammer@gmail.com)
 * @brief declare and implement variable sized array with macros
 * @version 0.1
 * @date 2023-02-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <sentient/preprocessor/cat.h>
#include <sentient/preprocessor/tuple.h>
#include <sentient/preprocessor/seq.h>
#include <sentient/preprocessor/stringize.h>

#include <sentient/config.h>
#include <sentient/platform.h>

#include <sentient/push_cpp_guard.h>

//
// auto-generated/implemented vec APIs
//
// int          {vec_type}_init(struct {vec_type}* v, size_t initial_size);
// void         {vec_type}_deinit(struct {vec_type}* v);
// int          {vec_type}_copy(struct {vec_type}* v, struct {vec_type}* other);
// int          {vec_type}_copy_prim(struct {vec_type}* v, {elem_type}* other, size_t size);
// int          {vec_type}_move(struct {vec_type}* v, struct {vec_type}* other);
// int          {vec_type}_move_prim(struct {vec_type}* v, {elem_type}* other, size_t size);
// int          {vec_type}_resize(struct {vec_type}* v, size_t size);
// bool         {vec_type}_empty(struct {vec_type}* v);
// size_t       {vec_type}_size(struct {vec_type}* v);
// {elem_type}* {vec_type}_get(struct {vec_type}* v, size_t index);
// int          {vec_type}_push_back(struct {vec_type}* v, {elem_type}* elem);
// int          {vec_type}_pop_back(struct {vec_type}* v);
// int          {vec_type}_insert(struct {vec_type}* v, {elem_type}* elem, size_t idx);
// int          {vec_type}_remove(struct {vec_type}* v, size_t idx);
// void         {vec_type}_clear(struct {vec_type}* v);

#define ___SNT_UNSIGNED_MAX(type) (const size_t)((1 << (8 * sizeof(type))) - 1)

#define ___SNT_VEC_NAME(type_prefix_and_type_name_tuple, size) \
        SNT_PP_CAT(SNT_PP_CAT(SNT_PP_TUPLE_ELEM(2, 1, type_prefix_and_type_name_tuple), _vec_), size)

#define ___SNT_ELEM_NAME(type_prefix_and_type_name_tuple) \
        SNT_PP_TUPLE_ELEM(2, 0, type_prefix_and_type_name_tuple) SNT_PP_TUPLE_ELEM(2, 1, type_prefix_and_type_name_tuple)

#define ___SNT_DECL_SINGLE_VEC_TYPE(r, data_, elem)                                                                                                                                     \
        struct ___SNT_VEC_NAME(data_, elem) {                                                                                                                                           \
            size_t ___alc_size;                                                                                                                                                         \
            SNT_PP_CAT(snt_, elem) ___size;                                                                                                                                             \
            ___SNT_ELEM_NAME(data_) * ___data ;                                                                                                                                         \
        };                                                                                                                                                                              \
        static inline SNT_API size_t      SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _size)(             struct ___SNT_VEC_NAME(data_, elem) * v) {                                       \
            return v->___size;                                                                                                                                                          \
        }                                                                                                                                                                               \
        static inline SNT_API ___SNT_ELEM_NAME(data_) * SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _get)(struct ___SNT_VEC_NAME(data_, elem) * v, size_t index) {                         \
            return &v->___data[index];                                                                                                                                                  \
        }                                                                                                                                                                               \
        SNT_API int                       SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _init)(             struct ___SNT_VEC_NAME(data_, elem) * v, size_t initial_size);                           \
        SNT_API void                      SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _deinit)(           struct ___SNT_VEC_NAME(data_, elem) * v);                                                \
        SNT_API int                       SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _copy)(             struct ___SNT_VEC_NAME(data_, elem) * v, struct ___SNT_VEC_NAME(data_, elem) * other);   \
        SNT_API int                       SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _copy_prim)(        struct ___SNT_VEC_NAME(data_, elem) * v, ___SNT_ELEM_NAME(data_) * other, size_t size);  \
        SNT_API int                       SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _move)(             struct ___SNT_VEC_NAME(data_, elem) * v, struct ___SNT_VEC_NAME(data_, elem) * other);   \
        SNT_API int                       SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _move_prim)(        struct ___SNT_VEC_NAME(data_, elem) * v, ___SNT_ELEM_NAME(data_) * other, size_t size);  \
        SNT_API int                       SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _resize)(           struct ___SNT_VEC_NAME(data_, elem) * v, size_t size);                                   \
        SNT_API bool                      SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _empty)(            struct ___SNT_VEC_NAME(data_, elem) * v);                                                \
        SNT_API int                       SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _push_back)(        struct ___SNT_VEC_NAME(data_, elem) * v, ___SNT_ELEM_NAME(data_) * elem);                \
        SNT_API int                       SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _pop_back)(         struct ___SNT_VEC_NAME(data_, elem) * v);                                                \
        SNT_API int                       SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _insert)(           struct ___SNT_VEC_NAME(data_, elem) * v, ___SNT_ELEM_NAME(data_) * elem, size_t idx);    \
        SNT_API int                       SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _remove)(           struct ___SNT_VEC_NAME(data_, elem) * v, size_t idx);                                    \


#define ___SNT_DECL_VEC_TYPES(type_prefix, type_name) \
        SNT_PP_SEQ_FOR_EACH(                          \
            ___SNT_DECL_SINGLE_VEC_TYPE,              \
            (type_prefix, type_name),                 \
            SNT_PP_TUPLE_TO_SEQ((                     \
                u8,                                   \
                u16,                                  \
                u32,                                  \
                u64                                   \
            ))                                        \
        )

#define ___SNT_IMPL_SINGLE_VEC_TYPE(r, data_, elem)                                                                                                               \
        SNT_API int SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _init)(struct ___SNT_VEC_NAME(data_, elem) * v, size_t initial_size) {                               \
            int result = 0;                                                                                                                                       \
            do {                                                                                                                                                  \
                if (initial_size > ___SNT_UNSIGNED_MAX(SNT_PP_CAT(snt_, elem))) {                                                                                 \
                    result = -1;                                                                                                                                  \
                    break;                                                                                                                                        \
                }                                                                                                                                                 \
                if (v->___data != NULL || v->___size > 0) {                                                                                                       \
                    int cleanup_result = 0;                                                                                                                       \
                    for (size_t cnt = 0; cnt < v->___size; ++cnt) {                                                                                               \
                        cleanup_result = snt_cleanup_obj(&v->___data[cnt], );                                                                                     \
                    }                                                                                                                                             \
                }                                                                                                                                                 \
            } while (false);                                                                                                                                      \
            return result;                                                                                                                                        \
        }                                                                                                                                                         \
        SNT_API void SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _deinit)(struct ___SNT_VEC_NAME(data_, elem) * v) {                                                 \
            \
        }                                                                                                                                                         \
        SNT_API int SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _copy)(struct ___SNT_VEC_NAME(data_, elem) * v, struct ___SNT_VEC_NAME(data_, elem) * other) { \
         \
        }                                                                                                                                                         \
        SNT_API int SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _copy_prim)(struct ___SNT_VEC_NAME(data_, elem) * v, ___SNT_ELEM_NAME(data_) * other, size_t size) { \
         \
        }                                                                                                                                                         \
        SNT_API int SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _move)(struct ___SNT_VEC_NAME(data_, elem) * v, struct ___SNT_VEC_NAME(data_, elem) * other) { \
         \
        }                                                                                                                                                         \
        SNT_API int SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _move_prim)(struct ___SNT_VEC_NAME(data_, elem) * v, ___SNT_ELEM_NAME(data_) * other, size_t size) { \
         \
        }                                                                                                                                                         \
        SNT_API int SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _resize)(struct ___SNT_VEC_NAME(data_, elem) * v, size_t size) { \
         \
        }                                                                                                                                                         \
        SNT_API bool SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _empty)(struct ___SNT_VEC_NAME(data_, elem) * v) { \
         \
        }                                                                                                                                                         \                                                                             \
        SNT_API int SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _push_back)(struct ___SNT_VEC_NAME(data_, elem) * v, ___SNT_ELEM_NAME(data_) * elem) { \
         \
        }                                                                                                                                                         \
        SNT_API int SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _pop_back)(struct ___SNT_VEC_NAME(data_, elem) * v) { \
         \
        }                                                                                                                                                         \
        SNT_API int SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _insert)(struct ___SNT_VEC_NAME(data_, elem) * v, ___SNT_ELEM_NAME(data_) * elem, size_t idx) { \
         \
        }                                                                                                                                                         \
        SNT_API int SNT_PP_CAT(___SNT_VEC_NAME(data_, elem), _remove)(struct ___SNT_VEC_NAME(data_, elem) * v, size_t idx) { \
         \
        }                                                                                                                                                         \
        static struct snt_field_info                                                                         \
        SNT_SOFTMANGLE(SNT_PP_CAT(snt_fields_info_, ___SNT_VEC_NAME(data_, elem)))[] = {                     \
            {                                                                                                \
                .is_ignored = true,                                                                          \
            },                                                                                               \
            {                                                                                                \
                .is_bit_field = false,                                                                       \
                .bit_size = 0,                                                                               \
                .field_type_name = SNT_PP_STRINGIZE(SNT_PP_CAT(snt_, elem)),                                 \
                .field_name = "___size",                                                                     \
                .field_offset = offsetof(struct ___SNT_VEC_NAME(data_, elem), ___size),                      \
            },                                                                                               \
            {                                                                                                \
                .is_bit_field = false,                                                                       \
                .bit_size = 0,                                                                               \
                .field_type_name = SNT_PP_STRINGIZE(___SNT_ELEM_NAME(data_)),                                \
                .field_name = "___data",                                                                     \
                .field_offset = offsetof(struct ___SNT_VEC_NAME(data_, elem), ___data),                      \
            },                                                                                               \
        };                                                                                                   \
        static struct snt_type_info                                                                          \
        SNT_SOFTMANGLE(SNT_PP_CAT(snt_type_info_, ___SNT_VEC_NAME(data_, elem))) = {                         \
            .is_primitive = false,                                                                           \
            .is_struct = true,                                                                               \
            .is_vec = true,                                                                                  \
            .is_union = false,                                                                               \
            .type_name =                                                                                     \
                SNT_PP_STRINGIZE(___SNT_VEC_NAME(data_, elem)),                                              \
            .type_size = sizeof(struct ___SNT_VEC_NAME(data_, elem)),                                        \
            .fields = SNT_SOFTMANGLE(SNT_PP_CAT(snt_fields_info_, ___SNT_VEC_NAME(data_, elem))),            \
            .n_fields = sizeof(SNT_SOFTMANGLE(SNT_PP_CAT(snt_fields_info_, ___SNT_VEC_NAME(data_, elem)))) / \
                        sizeof(struct snt_field_info)                                                        \
        };
        

#define ___SNT_IMPL_VEC_TYPES(type_prefix, type_name) \
        SNT_PP_SEQ_FOR_EACH(                       \
            ___SNT_IMPL_SINGLE_VEC_TYPE,           \
            (type_prefix, type_name),              \
            SNT_PP_TUPLE_TO_SEQ((                  \
                u8,                                \
                u16,                               \
                u32,                               \
                u64                                \
            ))                                     \
        )

#include <sentient/pop_cpp_guard.h>

#endif