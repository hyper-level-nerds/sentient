#ifndef __SENTIENT_CORE_SERIALIZATION_INFO_H__
#define __SENTIENT_CORE_SERIALIZATION_INFO_H__

/**
 * @file serialization_info.h
 * @author Jin (jaehwanspin@gmail.com)
 * @brief defines serialization info structure and methods
 * @version 0.1
 * @date 2022-04-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <sentient/core/types.h>
#include <sentient/core/field_types.h>

#ifdef __cplusplus
extern "C"
{
#endif

struct sentient_protocol_info;
struct sentient_model_info;

struct sentient_serialization_info
{
    sentient_u8*                   buffer;
    struct sentient_protocol_info* protocol_info;
    struct sentient_model_info*    model_info;
    sentient_void*                 model_buffer;
    sentient_size                  model_buffer_size;
};

#ifdef __cplusplus
}
#endif

#endif