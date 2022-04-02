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

typedef uint8_t  snt_u8;
typedef uint16_t snt_u16;
typedef uint32_t snt_u32;
typedef uint64_t snt_u64;
typedef int8_t   snt_i8;
typedef int16_t  snt_i16;
typedef int32_t  snt_i32;
typedef int64_t  snt_i64;

typedef float    snt_f32;
typedef double   snt_f64;

typedef char     snt_str8;
typedef snt_i16  snt_str16;
typedef snt_i32  snt_str32;

#ifdef __cplusplus
}
#endif

#endif