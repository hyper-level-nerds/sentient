//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

/**
 * @file string.c
 * @author Jin (jayjintheprogrammer@gmail.com)
 * @brief implement the Sentient string APIs
 * @version 0.1
 * @date 2023-02-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <sentient/string.h>
#include <sentient/platform.h>

#include "mem_util.h"

SNT_API int snt_string_copy(snt_string* str, const snt_string* other) {
    int result = 0;
    if (str->data != NULL) {
        SNT_FREE(str->data);
    }
    if (other->data == NULL) {
        result = EFAULT;
        goto ret;
    }
    str->data = SNT_MALLOC(other->size);
    if (str->data == NULL) {
        result = ENOMEM;
        goto ret;
    }
    str->size = other->size;
    for (size_t cnt = 0; cnt < other->size; ++cnt) {
        str->data[cnt] = other->data[cnt];
    }
ret:
    return result;
}

SNT_API int snt_string_copy_prim(snt_string* str, const char* s, size_t size) {
    int result = 0;
    if (str->data != NULL) {
        SNT_FREE(str->data);
    }
    if (s == NULL) {
        result = EFAULT;
        goto ret;
    }
    str->data = SNT_MALLOC(size);
    if (str->data == NULL) {
        result = ENOMEM;
        goto ret;
    }
    str->size = size;
    for (size_t cnt = 0; cnt < size; ++cnt) {
        str->data[cnt] = s[cnt];
    }
ret:
    return result;
}

SNT_API int snt_string_move(snt_string* str, snt_string* other) {
    int result = 0;
    if (str->data != NULL) {
        SNT_FREE(str->data);
    }
    if (other->data == NULL) {
        result = EFAULT;
        goto ret;
    }
    str->size = other->size;
    str->data = other->data;
    other->data = NULL;
ret:
    return result;
}

SNT_API int snt_string_move_prim(snt_string* str, char* s, size_t size) {
    int result = 0;
    if (str->data != NULL) {
        SNT_FREE(str->data);
    }
    if (s == NULL) {
        result = EFAULT;
        goto ret;
    }
    str->data = s;
    str->size = size;
ret:
    return result;
}
