//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

/**
 * @file obj_manip.c
 * @author Jin (jayjintheprogrammer@gmail.com)
 * @brief implement object manipulation APIs
 * @version 0.1
 * @date 2023-03-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <sentient/obj_manip.h>
#include <sentient/type_info.h>
#include <sentient/platform.h>

#include <stddef.h>
#include <string.h>
#include <stdbool.h>

static int snt_impl_copy_obj(void* dst, const void* src, struct snt_type_info* tinfo);
static int snt_impl_copy_arr(void* dst, const void* src, size_t size, struct snt_type_info* tinfo);
static int snt_impl_move_obj(void* dst, const void* src, struct snt_type_info* tinfo);
static int snt_impl_move_arr(void* dst, const void* src, size_t size, struct snt_type_info* tinfo);
static int snt_impl_cleanup_obj(void* obj, struct snt_type_info* tinfo);
static int snt_impl_cleanup_arr(void* arr, size_t size, struct snt_type_info* tinfo);


static int snt_copy_vec(void* dst, void* src, struct snt_type_info* tinfo) {
    int result = 0;



    return result;    
}

static int snt_move_vec(void* dst, void* src, struct snt_type_info* tinfo) {
    int result = 0;

    

    return result;    
}

/**
 * @brief deallocate the vec type object
 * 
 * @param vec vec type address
 * @param tinfo vec type info
 * @return error value
 */
static int snt_cleanup_vec(void* vec, struct snt_type_info* tinfo) {
    int result = 0;
    const size_t data_size = *((size_t*)(vec + (tinfo->fields[1].field_offset)));
    const void* data_addr = *(void**)(vec + (tinfo->fields[2].field_offset));
    const struct snt_type_info* elem_tinfo = snt_get_type_info(tinfo->vec_elem_type_id);
    result = snt_impl_cleanup_arr(data_addr, data_size, elem_tinfo);
    return result;
}

static int snt_copy_primitive(void* dst, const void* src, size_t type_size) {
    return memcpy(dst, src, type_size) != NULL;
}

static int snt_copy_primitive_arr(void* dst, const void* src, size_t size, size_t type_size) {
    return memcpy(dst, src, type_size * size) != NULL;
}

static int snt_impl_cleanup_obj(void* obj, struct snt_type_info* tinfo) {
    int result = 0;

    for (size_t field_cnt = 0; field_cnt < tinfo->n_fields; ++field_cnt) {
        struct snt_field_info* finfo = &tinfo->fields[field_cnt];
        struct snt_type_info* ftinfo = snt_get_type_info((snt_type_id_t)finfo->field_name);
        void* curr_addr = obj + finfo->field_offset;

        if (ftinfo->is_vec == true) {
            result = snt_cleanup_vec(curr_addr, ftinfo);
        } else if (ftinfo->is_struct == true) {
            result = snt_impl_cleanup_obj(curr_addr, ftinfo);
        }
    }

    return result;
}

/**
 * @brief deallocate each array object element
 * 
 * @param arr array address
 * @param size array size
 * @param tinfo array element's type info
 * @return error value 
 */
static int snt_impl_cleanup_arr(void* arr, size_t size, struct snt_type_info* tinfo) {
    int result = 0;
    void* curr_addr = NULL;

    for (size_t field_cnt = 0; field_cnt < tinfo->n_fields && result > -1; ++field_cnt) {
        const struct snt_field_info* finfo = &tinfo->fields[field_cnt];
        const struct snt_type_info* ftinfo = snt_get_type_info((snt_type_id_t)finfo->field_name);

        for (size_t arr_cnt = 0; arr_cnt < size && result > -1; ++arr_cnt) {
            curr_addr = arr + (tinfo->type_size * arr_cnt) + finfo->field_offset;
            result = snt_impl_cleanup_obj(curr_addr, ftinfo);
        }
    }

    return result;
}

/**
 * @brief copy object
 * @details 
 * 
 * @param dst destination address
 * @param src source address
 * @param tinfo type info
 * @return error value
 */
static int snt_impl_copy_obj(void* dst, const void* src, struct snt_type_info* tinfo) {
    int result = 0;

    do {
        if (tinfo->is_primitive == true) { // primitive type
            result = snt_copy_primitive(dst, src, tinfo->type_size);
        } else if (tinfo->is_vec == true) { // vec type
            const size_t src_data_size = *((size_t*)(src + (tinfo->fields[1].field_offset)));
            *((size_t*)(dst + (tinfo->fields[0].field_offset))) =
                *((size_t*)(src + (tinfo->fields[0].field_offset)));
            *((size_t*)(dst + (tinfo->fields[1].field_offset))) = src_data_size;
            const void* src_data_addr = *(void**)(src + (tinfo->fields[2].field_offset));
            const void* dst_data_addr = *(void**)(dst + (tinfo->fields[2].field_offset));
            const struct snt_type_info* elem_tinfo = snt_get_type_info(tinfo->vec_elem_type_id);
            result =
                snt_impl_copy_arr(dst_data_addr, src_data_addr, src_data_size, elem_tinfo);
        } else { // struct type
            for (size_t field_cnt = 0; field_cnt < tinfo->n_fields && result > -1; ++field_cnt) {
                const struct snt_field_info* finfo = &tinfo->fields[field_cnt];
                const struct snt_type_info* ftinfo = snt_get_type_info((snt_type_id_t)finfo->field_type_name);
                result = snt_impl_copy_obj(
                    dst + tinfo->fields[field_cnt].field_offset,
                    src + tinfo->fields[field_cnt].field_offset,
                    ftinfo);
            }
        }
    } while (false);

    return result;
}

static int snt_impl_copy_arr(void* dst, const void* src, size_t size, struct snt_type_info* tinfo) {
    int result = 0;

    do {
        if (tinfo->is_primitive == true) {
            result = snt_copy_primitive_arr(dst, src, size, tinfo->type_size);
        } else {
            void* curr_addr = NULL;
            for (size_t field_cnt = 0; field_cnt < tinfo->n_fields && result > -1; ++field_cnt) {
                const struct snt_field_info* finfo = &tinfo->fields[field_cnt];
                ptrdiff_t field_off = tinfo->fields[field_cnt].field_offset;
                // result = snt_copy_single_field(dst + field_off, src + field_off, finfo);
            }
        }
    } while (false);

    return result;
}

// move obj
static int snt_impl_move_obj(void* dst, const void* src, struct snt_type_info* tinfo) {
    int result = 0;

    result = snt_copy_primitive(dst, src, tinfo->type_size);

    return result;
}

static int snt_impl_move_arr(void* dst, const void* src, size_t size, struct snt_type_info* tinfo) {
    int result = 0;

    result = snt_copy_primitive_arr(dst, src, size, tinfo->type_size);

    return result;
}

//////////////////////////
//
// ___snt_copy_obj
//
//////////////////////////
SNT_API int SNT_SOFTMANGLE(snt_copy_obj)(void* __dst, const void* __src, struct snt_type_info* __tinfo) {
    int result = 0;

    if (__dst == NULL || __src == NULL) {
        result = -1;
    } else {
        result = snt_impl_copy_obj(__dst, __src, __tinfo);
    }

    return result;
}

//////////////////////////
//
// ___snt_copy_arr
//
//////////////////////////
SNT_API int SNT_SOFTMANGLE(snt_copy_arr)(void* __dst, const void* __src, size_t __size, struct snt_type_info* __tinfo) {
    int result = 0;

    if (__dst == NULL || __src == NULL) {
        result = -1;
    } else {
        result = snt_impl_copy_obj(__dst, __src, __tinfo);
    }

    return result;
}

//////////////////////////
//
// ___snt_move_obj
//
//////////////////////////
SNT_API int SNT_SOFTMANGLE(snt_move_obj)(void* __dst, const void* __src, struct snt_type_info* __tinfo) {
    int result = 0;

    if (__dst == NULL || __src == NULL) {
        result = -1;
    } else {
        result = snt_impl_move_obj(__dst, __src, __tinfo);
    }

    return result;
}

//////////////////////////
//
// ___snt_move_arr
//
//////////////////////////
SNT_API int SNT_SOFTMANGLE(snt_move_arr)(void* __dst, const void* __src, size_t __size, struct snt_type_info* __tinfo) {
    int result = 0;

    if (__dst == NULL || __src == NULL) {
        result = -1;
    } else {
        result = snt_impl_move_arr(__dst, __src, __size, __tinfo);
    }

    return result;
}

//////////////////////////
//
// ___snt_alloc_obj
//
//////////////////////////
SNT_API void* SNT_SOFTMANGLE(snt_alloc_obj)(struct snt_type_info* __tinfo) {
    return SNT_MALLOC(__tinfo->type_size);
}

//////////////////////////
//
// ___snt_calloc_obj
//
//////////////////////////
SNT_API void* SNT_SOFTMANGLE(snt_calloc_obj)(size_t __cnt, struct snt_type_info* __tinfo) {
    return SNT_CALLOC(__cnt, __tinfo->type_size);
}

//////////////////////////
//
// ___snt_dealloc_obj
//
//////////////////////////
SNT_API int SNT_SOFTMANGLE(snt_dealloc_obj)(void* __obj_or_arr, struct snt_type_info* __tinfo) {
    (void)__tinfo;
    int result = 0;

    if (__obj_or_arr == NULL) {
        result = -1;
    } else {
        SNT_FREE(__obj_or_arr);
    }

    return result;
}

//////////////////////////
//
// ___snt_cleanup_obj
//
//////////////////////////
SNT_API int SNT_SOFTMANGLE(snt_cleanup_obj)(void* __obj, struct snt_type_info* __tinfo) {
    int result = 0;
    if (__tinfo->is_primitive == false) {
        result = snt_impl_cleanup_obj(__obj, __tinfo);
    }
    return result;
}

//////////////////////////
//
// ___snt_cleanup_arr
//
//////////////////////////
SNT_API int SNT_SOFTMANGLE(snt_cleanup_arr)(void* __arr, size_t __size, struct snt_type_info* __tinfo) {
    int result = 0;

    if (__arr == NULL) {
        result = -1;
    }
    else if (__tinfo->is_primitive == true) {
        SNT_FREE(__arr);
    } else {
        result = snt_impl_cleanup_arr(__arr, __size, __tinfo);
    }

    return result;
}