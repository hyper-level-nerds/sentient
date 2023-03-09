//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_MODEL_MANIP_H
#define SENTIENT_MODEL_MANIP_H

/**
 * @file obj_manip.h
 * @author Jin (jayjintheprogrammer@gmail.com)
 * @brief manipulate the Sentient objects (move, copy, allocate, cleanup)
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <sentient/config.h>
#include <sentient/type_info.h>
#include <sentient/preprocessor/stringize.h>

#include <sentient/push_cpp_guard.h>

/**
 * @brief copy the Sentient object
 * 
 * @param __dst destination object address
 * @param __src source object address
 * @param __type_name defined Sentient type name (not string literal)
 * @return error value
 */
#define snt_copy_obj(__dst, __src, __type_name) \
        SNT_SOFTMANGLE(snt_copy_obj)(__dst, __src, \
            snt_get_type_info((snt_type_id_t)SNT_PP_STRINGIZE(__type_name)))

/**
 * @brief copy the Sentient object array
 * 
 * @param __dst destination array address
 * @param __src source array address
 * @param __size size of the array
 * @param __type_name defined Sentient type name (not string literal)
 * @return error value
 */
#define snt_copy_arr(__dst, __src, __size, __type_name) \
        SNT_SOFTMANGLE(snt_copy_arr)(__dst, __src, \
            snt_get_type_info((snt_type_id_t)SNT_PP_STRINGIZE(__type_name)))

/**
 * @brief move the Sentient object
 * 
 * @param __dst destination object address
 * @param __src source object address
 * @param __type_name defined Sentient type name (not string literal)
 * @return error value
 */
#define snt_move_obj(__dst, __src, __type_name) \
        SNT_SOFTMANGLE(snt_move_obj)(__dst, __src, \
            snt_get_type_info((snt_type_id_t)SNT_PP_STRINGIZE(__type_name)))

/**
 * @brief move the Sentient object array
 * 
 * @param __dst destination array address
 * @param __src source array address
 * @param __size size of the array
 * @param __type_name defined Sentient type name (not string literal)
 * @return error value
 */
#define snt_move_arr(__dst, __src, __size, __type_name) \
        SNT_SOFTMANGLE(snt_move_arr)(__dst, __src, \
            snt_get_type_info((snt_type_id_t)SNT_PP_STRINGIZE(__type_name)))

/**
 * @brief allocate single Sentient object
 * 
 * @param __type_name defined Sentient type name (not string literal)
 * @return allocated object address
 */
#define snt_alloc_obj(__type_name) \
        SNT_SOFTMANGLE(snt_alloc_obj)(snt_get_type_info((snt_type_id_t)SNT_PP_STRINGIZE(__type_name)))

/**
 * @brief allocate multiple Sentient objects
 * 
 * @param __cnt element size
 * @param __type_name defined Sentient type name (not string literal)
 * @return allocated object address
 */
#define snt_calloc_obj(__cnt, __type_name) \
        SNT_SOFTMANGLE(snt_calloc_obj)(__cnt, \
            snt_get_type_info((snt_type_id_t)SNT_PP_STRINGIZE(__type_name)))

/**
 * @brief cleanup fields and deallocate the Sentient object
 * 
 * @param __obj object address
 * @param __type_name defined Sentient type name (not string literal)
 * @return error value
 */
#define snt_cleanup_obj(__obj, __type_name) \
        SNT_SOFTMANGLE(snt_cleanup_obj)(__obj, \
            snt_get_type_info((snt_type_id_t)SNT_PP_STRINGIZE(__type_name)))

/**
 * @brief cleanup fields and deallocate the Sentient object array
 * 
 * @param __obj object array address
 * @param __size array size
 * @param __type_name defined Sentient type name (not string literal)
 * @return error value
 */
#define snt_cleanup_obj(__obj, __size, __type_name) \
        SNT_SOFTMANGLE(snt_cleanup_arr)(__obj, __size, \
            snt_get_type_info((snt_type_id_t)SNT_PP_STRINGIZE(__type_name)))

SNT_API int SNT_SOFTMANGLE(snt_copy_obj)(void* __dst, const void* __src, struct snt_type_info* __tinfo);
SNT_API int SNT_SOFTMANGLE(snt_copy_arr)(void* __dst, const void* __src, size_t __size, struct snt_type_info* __tinfo);
SNT_API int SNT_SOFTMANGLE(snt_move_obj)(void* __dst, const void* __src, struct snt_type_info* __tinfo);
SNT_API int SNT_SOFTMANGLE(snt_move_arr)(void* __dst, const void* __src, size_t __size, struct snt_type_info* __tinfo);
SNT_API void* SNT_SOFTMANGLE(snt_alloc_obj)(struct snt_type_info* __tinfo);
SNT_API void* SNT_SOFTMANGLE(snt_calloc_obj)(size_t __cnt, struct snt_type_info* __tinfo);
SNT_API int SNT_SOFTMANGLE(snt_dealloc_obj)(void* __obj_or_arr, struct snt_type_info* __tinfo);
SNT_API int SNT_SOFTMANGLE(snt_cleanup_obj)(void* __obj, struct snt_type_info* __tinfo);
SNT_API int SNT_SOFTMANGLE(snt_cleanup_arr)(void* __obj, size_t __size, struct snt_type_info* __tinfo);

#include <sentient/pop_cpp_guard.h>

#endif