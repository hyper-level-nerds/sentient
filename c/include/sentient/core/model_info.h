#ifndef __SENTIENT_CORE_MODEL_INFO_H__
#define __SENTIENT_CORE_MODEL_INFO_H__

#include <sentient/core/types.h>
#include <sentient/core/field_types.h>

/**
 * @file model_info.h
 * @author Jin (jaehwanspin@gmail.com)
 * @brief defines model info structure and methods
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

struct sentient_model_info
{
    sentient_bool               is_static_model;
    sentient_bool               has_command_code;
    enum sentient_field_types   command_code_type;
    sentient_bool               total_size;
    sentient_size               fields_count;
    struct sentient_field_info* fields;
    sentient_bool               has_primary_key;
    sentient_size               primary_key_field_idx;
};

sentient_ssize sentient_serialize_with_protocol_info();

#ifdef __cplusplus
}
#endif

#endif