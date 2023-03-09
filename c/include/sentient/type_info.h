//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_TYPE_INFO_H
#define SENTIENT_TYPE_INFO_H

/**
 * @file type_info.h
 * @author Jin (jayjintheprogrammer@gmail.com)
 * @brief define type info and APIs
 * @version 0.1
 * @date 2023-03-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include <sentient/config.h>
#include <sentient/field_info.h>

#include <sentient/push_cpp_guard.h>

typedef uintptr_t snt_type_id_t;

/**
 * @brief structure for storing type metadata
 */
struct snt_type_info {
    bool                   is_primitive;
    bool                   is_vec;
    bool                   is_arr;
    bool                   is_struct;
    bool                   is_union;
    char*                  type_name;
    uint8_t                vec_sizetype_size;
    snt_type_id_t          vec_elem_type_id;
    size_t                 type_size;
    struct snt_field_info* fields;
    size_t                 n_fields;
};

/**
 * @brief get type info address from the BST type info dict
 * 
 * @param id type identifier from the type name string address;
 * @return type info metadata from type id 
 */
SNT_API struct snt_type_info* snt_get_type_info(snt_type_id_t id);

/**
 * @brief structure for storing into BST type info metadata storage
 * @note do not use it manually
 */
struct SNT_SOFTMANGLE(snt_type_info_dict_node) {
    snt_type_id_t                                   __identifier;
    struct snt_type_info*                           __info;
    
    struct SNT_SOFTMANGLE(snt_type_info_dict_node)* __l;
    struct SNT_SOFTMANGLE(snt_type_info_dict_node)* __r;
};

/**
 * @brief store type info into the BST type info storage
 * @note do not call it manually
 * 
 * @param node type info metadata to store
 */
SNT_API void SNT_SOFTMANGLE(snt_add_type_info)(struct SNT_SOFTMANGLE(snt_type_info_dict_node)* node);

#define SNT_STORE_TYPE_INFO(reserved, name, ...)

#include <sentient/pop_cpp_guard.h>

#endif