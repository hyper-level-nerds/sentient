#ifndef __SENTIENT_CORE_C_TYPES_H__
#define __SENTIENT_CORE_C_TYPES_H__

/**
 * @file types.h
 * @author Jin (jaehwanspin@gmail.com)
 * @brief General basic types definitions
 * @version 0.1
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stddef.h>
#include <stdint.h>
#include <float.h>
#include <time.h>

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @author Jin
 * @brief basic types
 * 
 */

typedef uint8_t  sentient_u8;
typedef uint16_t sentient_u16;
typedef uint32_t sentient_u32;
typedef uint64_t sentient_u64;
typedef int8_t   sentient_i8;
typedef int16_t  sentient_i16;
typedef int32_t  sentient_i32;
typedef int64_t  sentient_i64;

typedef float    sentient_f32;
typedef double   sentient_f64;

typedef char          sentient_str8;
typedef sentient_i16  sentient_str16;
typedef sentient_i32  sentient_str32;

#ifndef SENTIENT_DEFINE_STATIC_STRING_N
#define SENTIENT_DEFINE_STATIC_STRING_N(STR_TYPE, N) \
	typedef STR_TYPE STR_TYPE## _ ##N## [ N ];
#endif

#include <sentient/core_c/internal/string_types.h>

#ifdef __cplusplus
}
#endif

#endif