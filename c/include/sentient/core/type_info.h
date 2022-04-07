#ifndef __SENTIENT_CORE_C_TYPE_INFO_H__
#define __SENTIENT_CORE_C_TYPE_INFO_H__

#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif

struct sentient_type_info
{
    const char* name;
    size_t fields_count;
    size_t size;
    size_t packed_size;
    struct sentient_field_info* fields;
};

#ifdef __cplusplus
}
#endif

#endif