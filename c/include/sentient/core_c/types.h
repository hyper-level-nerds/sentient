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

#ifndef SENTIENT_DEFINE_STATIC_STRING_N
#define SENTIENT_DEFINE_STATIC_STRING_N(STR_TYPE, N) \
    typedef STR_TYPE STR_TYPE## _ ##N## _t[N];
#endif

SENTIENT_DEFINE_STATIC_STRING_N(snt_str8, 8)
SENTIENT_DEFINE_STATIC_STRING_N(snt_str8, 16)
SENTIENT_DEFINE_STATIC_STRING_N(snt_str8, 32)
SENTIENT_DEFINE_STATIC_STRING_N(snt_str8, 33)
SENTIENT_DEFINE_STATIC_STRING_N(snt_str8, 64)
SENTIENT_DEFINE_STATIC_STRING_N(snt_str8, 65)
SENTIENT_DEFINE_STATIC_STRING_N(snt_str8, 128)
SENTIENT_DEFINE_STATIC_STRING_N(snt_str8, 129)
SENTIENT_DEFINE_STATIC_STRING_N(snt_str8, 256)
SENTIENT_DEFINE_STATIC_STRING_N(snt_str8, 257)
SENTIENT_DEFINE_STATIC_STRING_N(snt_str8, 512)
SENTIENT_DEFINE_STATIC_STRING_N(snt_str8, 513)
SENTIENT_DEFINE_STATIC_STRING_N(snt_str8, 1024)
SENTIENT_DEFINE_STATIC_STRING_N(snt_str8, 1025)

#ifdef __cplusplus
}
#endif

#endif