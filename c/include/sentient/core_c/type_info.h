#ifndef __SENTIENT_CORE_C_TYPE_INFO_H__
#define __SENTIENT_CORE_C_TYPE_INFO_H__

#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif

struct sentient_type_info
{
	const char* type_name;
	size_t      fields_size;
	size_t      type_size;
	size_t      packed_size;
};

#ifdef __cplusplus
}
#endif

#endif