//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

/**
 * @file type_info.c
 * @author Jin (jayjintheprogrammer@gmail.com)
 * @brief implement type info APIs
 * @version 0.1
 * @date 2023-02-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <sentient/type_info.h>

#include "impl_primitive_types.h"

#include <string.h>

typedef struct SNT_SOFTMANGLE(snt_type_info_dict_node)* snt_ti_node_t;

/**
 * @brief globally defined BST type info metadata storage root
 */
static snt_ti_node_t type_dict_root;

/**
 * @brief add a BST node
 * 
 * @param root BST storage root
 * @param node a node to store
 * @return stored data BST root 
 */
static snt_ti_node_t snt_add_type_info(snt_ti_node_t root, snt_ti_node_t node) {

    if (root == NULL) {
        root = node;
    }
    else if (root->__identifier > node->__identifier) {
        root->__l =
            snt_add_type_info(root->__l, node);
    }
    else {
        root->__r =
            snt_add_type_info(root->__r, node);
    }

    return root;
}

/**
 * @brief store sentient primitive type info metadata
 * 
 * @return stored builtin type info metadata BST root 
 */
static snt_ti_node_t snt_add_primitive_types_info() {
    const size_t node_type_size = sizeof(struct SNT_SOFTMANGLE(snt_type_info_dict_node));
    const size_t n_primitive_nodes = sizeof(SNT_SOFTMANGLE(snt_primitive_type_nodes)) / node_type_size;

    for (size_t prim_node_cnt = 0; prim_node_cnt < n_primitive_nodes; ++prim_node_cnt) {
        type_dict_root = snt_add_type_info(type_dict_root, &SNT_SOFTMANGLE(snt_primitive_type_nodes)[prim_node_cnt]);
    }

    return type_dict_root;
}

/**
 * @brief store user type info metadata implementation
 * 
 * @param root BST storage root
 * @param node type info node to store
 * @return stored user type info metadata BST root 
 */
static snt_ti_node_t snt_impl_add_type_info(snt_ti_node_t root, snt_ti_node_t node) {

    if (root == NULL) {
        root = snt_add_primitive_types_info();
    }
    
    root = snt_add_type_info(root, node);

    return root;
}

/**
 * @brief get type info metadata from type id (it's from type name string address)
 * 
 * @param root BST storage root
 * @param id type id (from type name string address)
 * @return type info metadata
 */
static snt_ti_node_t snt_impl_get_type_info(snt_ti_node_t root, snt_type_id_t id) {
    snt_ti_node_t result = NULL;

    if (root->__identifier == id) {
        result = root;
    }
    else if (root->__identifier > id) {
        return snt_impl_get_type_info(root->__l, id);
    } else {
        return snt_impl_get_type_info(root->__r, id);
    }

    return result;
}

SNT_API void SNT_SOFTMANGLE(snt_add_type_info)(snt_ti_node_t node) {
    type_dict_root = snt_impl_add_type_info(type_dict_root, node);
}

SNT_API struct snt_type_info* snt_get_type_info(snt_type_id_t id) {
    struct snt_type_info* result = NULL;
    if (type_dict_root != NULL) {
        snt_ti_node_t found_node = snt_impl_get_type_info(type_dict_root, id);
        result = found_node->__info;
    }
    return result;
}