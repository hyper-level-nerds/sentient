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
#include <stdbool.h>
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

typedef uint8_t       sentient_u8;
typedef uint16_t      sentient_u16;
typedef uint32_t      sentient_u32;
typedef uint64_t      sentient_u64;
typedef int8_t        sentient_i8;
typedef int16_t       sentient_i16;
typedef int32_t       sentient_i32;
typedef int64_t       sentient_i64;

typedef float         sentient_f32;
typedef double        sentient_f64;

typedef char          sentient_str8;
typedef sentient_i16  sentient_str16;
typedef sentient_i32  sentient_str32;

#define SENTIENT_DEFINE_STR_N(TYPE, SIZE) \
	typedef TYPE TYPE##_##SIZE[SIZE];
#include <sentient/core/internal/string_types.h>

struct sentient_subcentury_datetime32
{
	sentient_u32 year : 7;    /* [0-99] a centry */
	sentient_u32 month : 4;   /* [0-11] */
	sentient_u32 day : 5;     /* [0-31] */
	sentient_u32 hours : 5;   /* [0-11] */
	sentient_u32 minutes : 6; /* [0-59] */
	sentient_u32 seconds : 5; /* [0-29] 0-59 in 2-second intervals */
};

struct sentient_subcentury_datetime64
{
	sentient_u32 year : 7;    /* [0-99] a centry */
	sentient_u32 month : 4;   /* [0-11] */
	sentient_u32 day : 5;     /* [0-31] */
	sentient_u32 hours : 5;   /* [0-11] */
	sentient_u32 minutes : 6; /* [0-59] */
	sentient_u32 seconds : 5; /* [0-29] 0-59 in 2-second intervals */

	sentient_u32 microseconds;
};

typedef struct sentient_subcentury_datetime32 sentient_scdt32;
typedef struct sentient_subcentury_datetime64 sentient_scdt64;
typedef sentient_u64                          sentient_pt64;

bool sentient_get_tm_from_scdt32(struct tm*, sentient_scdt32*);
bool sentient_get_scdt32_from_tm(sentient_scdt32*, struct tm*);
bool sentient_get_tm_from_scdt64(struct tm*, sentient_scdt32*);
bool sentient_get_scdt64_from_tm(sentient_scdt32*, struct tm*);


#ifdef __cplusplus
}
#endif

#endif