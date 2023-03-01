#include <sentient/obj_manip.h>
#include <sentient/type_info.h>
#include <sentient/platform.h>

#include <stddef.h>
#include <string.h>
#include <stdbool.h>

static int snt_impl_copy_obj(void* dst, const void* src, struct snt_type_info* tinfo);

static int snt_impl_move_obj(void* dst, const void* src, struct snt_type_info* tinfo);

static int snt_copy_single_field(void* dst, void* src, struct snt_field_info* finfo) {
    int result = 0;

    struct snt_type_info* tinfo = snt_get_type_info((snt_type_id_t)finfo->field_name);

    result = snt_impl_copy_obj(dst, src, tinfo);

    return result;
}

static int snt_copy_primitive(void* dst, const void* src, size_t type_size) {
    (void)memcpy(dst, src, type_size);
    return 0;
}

static int snt_impl_copy_obj(void* dst, const void* src, struct snt_type_info* tinfo) {
    int result = 0;

    do {
        if (tinfo->is_primitive == true) {
            result = snt_copy_primitive(dst, src, tinfo->type_size);
        } else {
            for (size_t field_cnt = 0; field_cnt < tinfo->n_fields && result > -1; ++field_cnt) {
                struct snt_field_info* finfo = &tinfo->fields[field_cnt];
                ptrdiff_t field_off = tinfo->fields[field_cnt].field_offset;
                result = snt_copy_single_field(dst + field_off, src + field_off, finfo);
            }
        }
    } while (false);

    return result;
}

// move obj
static int snt_impl_move_obj(void* dst, const void* src, struct snt_type_info* tinfo) {
    int result = 0;

    do {
        if (tinfo->is_primitive == true) {
            result = snt_copy_primitive(dst, src, tinfo->type_size);
        } else {
            for (size_t field_cnt = 0; field_cnt < tinfo->n_fields; ++field_cnt) {
                ptrdiff_t field_off = tinfo->fields[field_cnt].field_offset;
                
            }
        }
    } while (false);

    return result;
}

// copy obj
SNT_API int SNT_SOFTMANGLE(snt_impl_copy_obj)(void* __dst, const void* __src, snt_type_id_t __id) {
    int result = 0;

    if (__dst == NULL || __src == NULL) {
        result = -1;
    } else {
        result = snt_impl_copy_obj(__dst, __src, snt_get_type_info(__id));
    }

    return result;
}

// copy arr
SNT_API int SNT_SOFTMANGLE(snt_impl_copy_arr)(void* __dst, const void* __src, snt_type_id_t __id) {
    int result = 0;

    if (__dst == NULL || __src == NULL) {
        result = -1;
    } else {
        result = snt_impl_copy_obj(__dst, __src, snt_get_type_info(__id));
    }

    return result;
}

// move obj
SNT_API int SNT_SOFTMANGLE(snt_impl_move_obj)(void* __dst, const void* __src, snt_type_id_t __id) {
    int result = 0;

    if (__dst == NULL || __src == NULL) {
        result = -1;
    } else {
        result = snt_impl_move_obj(__dst, __src, snt_get_type_info(__id));
    }

    return result;
}

// move arr
SNT_API int SNT_SOFTMANGLE(snt_impl_move_arr)(void* __dst, const void* __src, snt_type_id_t __id) {
    int result = 0;

    if (__dst == NULL || __src == NULL) {
        result = -1;
    } else {
        result = snt_impl_move_obj(__dst, __src, snt_get_type_info(__id));
    }

    return result;
}

SNT_API void* SNT_SOFTMANGLE(snt_impl_alloc_obj)(snt_type_id_t __id) {
    struct snt_type_info* tinfo = snt_get_type_info(__id);
    return SNT_MALLOC(tinfo->type_size);
}

SNT_API void* SNT_SOFTMANGLE(snt_impl_calloc_obj)(size_t __cnt, snt_type_id_t __id) {
    struct snt_type_info* tinfo = snt_get_type_info(__id);
    return SNT_CALLOC(__cnt, tinfo->type_size);
}

SNT_API int SNT_SOFTMANGLE(snt_impl_dealloc_obj)(void* __obj_or_arr, snt_type_id_t __id) {
    (void)__id;

    int result = 0;

    if (__obj_or_arr == NULL) {
        result = -1;
    } else {
        SNT_FREE(__obj_or_arr);
    }

    return result;
}
SNT_API int SNT_SOFTMANGLE(snt_impl_cleanup_obj)(void* __obj, snt_type_id_t __id) {
    int result = 0;

    

    return result;
}