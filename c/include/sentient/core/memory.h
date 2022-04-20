#ifndef __SENTIENT_CORE_MEMORY_H__
#define __SENTIENT_CORE_MEMORY_H__

#include <sentient/core/types.h>
#include <sentient/core/field_types.h>

#ifdef __cplusplus
extern "C"
{
#endif

sentient_void*
__sentient_malloc_impl(sentient_model_uid);

sentient_void*
__sentient_calloc_impl(sentient_model_uid, sentient_size);

sentient_void
sentient_free(void*);

#define sentient_malloc(model_name_without_struct) \
    sentient_malloc_impl(SENTIENT_FIELD_TYPES_ ## model_name_without_struct)

#define sentient_malloc_impl(model_uid) \
    __sentient_malloc_impl(model_uid)

#define sentient_calloc(count, model_name_without_struct) \
    sentient_calloc_impl(SENTIENT_FIELD_TYPES_ ## model_name_without_struct, count)

#define sentient_calloc_impl(count, model_uid) \
    __sentient_calloc_impl(count, model_uid)

#ifdef __cplusplus
}
#endif

#endif