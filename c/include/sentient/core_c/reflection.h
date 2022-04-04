#ifndef __SENTIENT_CORE_C_REFLECTION_H__
#define __SENTIENT_CORE_C_REFLECTION_H__

/**
 * @file reflection.h
 * @author Jin (jaehwanspin@gmail.com)
 * @brief macro metafunctions for type reflection
 * @version 0.1
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <sentient/core_c/types.h>

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @author Jin
 * @brief 
 * 
 */
#define SENTIENT_DEFINE_MODEL(...) SENTIENT_DEFINE_MODEL_INTERNAL (STRUCT, __VA_ARGS__)

#define SENTIENT_DEFINE_MODEL_INTERNAL(...) 

#ifdef __cplusplus
}
#endif

#endif