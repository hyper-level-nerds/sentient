#ifndef __SENTIENT_CORE_MODEL_TYPES_H__
#define __SENTIENT_CORE_MODEL_TYPES_H__

/**
 * @file model_types.h
 * @author Jin (jaehwanspin@gmail.com)
 * @brief defines model types enumerations
 * @version 0.1
 * @date 2022-04-08
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifdef __cplusplus
extern "C"
{
#endif

enum sentient_model_types
{
    SENTIENT_MODEL_TYPES_U8,
    SENTIENT_MODEL_TYPES_U16,
    SENTIENT_MODEL_TYPES_U32,
    SENTIENT_MODEL_TYPES_U64,
    SENTIENT_MODEL_TYPES_I8,
    SENTIENT_MODEL_TYPES_I16,
    SENTIENT_MODEL_TYPES_I32,
    SENTIENT_MODEL_TYPES_I64,
    SENTIENT_MODEL_TYPES_STR8,
    SENTIENT_MODEL_TYPES_STR16,
    SENTIENT_MODEL_TYPES_STR32,
    SENTIENT_MODEL_TYPES_SCDT32,
    SENTIENT_MODEL_TYPES_SCDT64,
    SENTIENT_MODEL_TYPES_PT64,
};

#ifdef __cplusplus
}
#endif

#endif