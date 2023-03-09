//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_STRING_H
#define SENTIENT_STRING_H

#include <stdint.h>
#include <stddef.h>

#include <sentient/config.h>
#include <sentient/primitive_types.h>

#include <sentient/push_cpp_guard.h>

/**
 * @brief variadic sized string container having snt_u8 size field
 */
struct SNT_SOFTMANGLE(snt_string) {
    size_t size;
    char*  data;
};
typedef struct SNT_SOFTMANGLE(snt_string) snt_string;

/**
 * @brief get the string buffer
 * 
 * @param str my string
 * @return buffer address
 */
static inline const char* snt_string_data(const snt_string* str) {
    return str->data;
}

/**
 * @brief get the string size
 * 
 * @param str my string
 * @return buffer length
 */
static inline size_t snt_string_size(const snt_string* str) {
    return str->size;
}

/**
 * @brief copy other string buffer
 * 
 * @param str string object
 * @param other other string object
 * @return less than zero is error
 */
SNT_API int snt_string_copy(snt_string* str, const snt_string* other);

/**
 * @brief copy raw string buffer
 * 
 * @param str string object
 * @param s raw C string buffer
 * @param size size of the buffer
 * @return less than zero is error
 */
SNT_API int snt_string_copy_prim(snt_string* str, const char* s, size_t size);

/**
 * @brief own other string buffer
 * 
 * @param str string object
 * @param other other string object
 * @return less than zero is error
 */
SNT_API int snt_string_move(snt_string* str, snt_string* other);

/**
 * @brief own the raw string buffer
 * 
 * @param str string object
 * @param s raw C string buffer
 * @param size size of the buffer
 * @return less than zero is error
 */
SNT_API int snt_string_move_prim(snt_string* str, char* s, size_t size);

/**
 * @brief compare to other string buffer
 * 
 * @param l my string
 * @param r other string
 * @return comparison value
 */
SNT_API int snt_string_compare(snt_string* l, snt_string* r);

/**
 * @brief compare to a raw C string buffer
 * 
 * @param l my string
 * @param r the raw string buffer
 * @param size the raw string buffer size
 * @return comparison value
 */
SNT_API int snt_string_compare_prim(snt_string* l, const char* r, size_t size);


SNT_API ptrdiff_t snt_string_find(snt_string* str, char c);

struct SNT_SOFTMANGLE(snt_nullstring) {
    char* data;
    size_t size;
};
typedef struct SNT_SOFTMANGLE(snt_nullstring) snt_nullstring;



#include <sentient/pop_cpp_guard.h>

#endif