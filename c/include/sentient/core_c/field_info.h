#ifndef __SENTIENT_CORE_C_FIELD_INFO_H__
#define __SENTIENT_CORE_C_FIELD_INFO_H__

#include <stddef.h>
#include <stdbool.h>

#include <sentient/core_c/reflection_types.h>

#ifdef __cplusplus
extern "C"
{
#endif

struct sentient_field_info
{
	const char*                    field_type_name;
	const char*                    field_name;
	size_t                         field_size;
	size_t                         offset;
	bool                           is_signed;
	size_t                         array_size;
	enum sentient_reflection_types data_type;
};

#ifdef __cplusplus
}
#endif

#endif