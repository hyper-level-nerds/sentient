#ifndef __SENTIENT_CORE_C_REFLECTION_TYPES_H__
#define __SENTIENT_CORE_C_REFLECTION_TYPES_H__

#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif

enum sentient_reflection_types
{
	SENTIENT_REFLECTION_INFO_STRING,
	SENTIENT_REFLECTION_INFO_UINT8,
	SENTIENT_REFLECTION_INFO_UINT16,
	SENTIENT_REFLECTION_INFO_UINT32,
	SENTIENT_REFLECTION_INFO_UINT64,
	SENTIENT_REFLECTION_INFO_INT8,
	SENTIENT_REFLECTION_INFO_INT16,
	SENTIENT_REFLECTION_INFO_INT32,
	SENTIENT_REFLECTION_INFO_INT64,
	SENTIENT_REFLECTION_INFO_FLOAT32,
	SENTIENT_REFLECTION_INFO_FLOAT64,
	SENTIENT_REFLECTION_INFO_SCDT32,
	SENTIENT_REFLECTION_INFO_SCDT64,
	SENTIENT_REFLECTION_INFO_PT64,
};

#ifdef __cplusplus
}
#endif

#endif