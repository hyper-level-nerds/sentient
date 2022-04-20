#ifndef __SENTIENT_CORE_MEMORY_H__
#define __SENTIENT_CORE_MEMORY_H__

#include <sentient/core/types.h>
#include <sentient/core/field_types.h>

#ifdef __cplusplus
extern "C"
{
#endif

sentient_void*
sentient_malloc(enum sentient_field_types);

sentient_void*
sentient_calloc(enum sentient_field_types, sentient_size);

sentient_void
sentient_free(void*);

#ifdef __cplusplus
}
#endif

#endif