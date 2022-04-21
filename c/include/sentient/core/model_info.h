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

extern const sentient_model_uid sentient_model_info_uid_sentient_u8;
extern const sentient_model_uid sentient_model_info_uid_sentient_u16;
extern const sentient_model_uid sentient_model_info_uid_sentient_u32;
extern const sentient_model_uid sentient_model_info_uid_sentient_u64;
extern const sentient_model_uid sentient_model_info_uid_sentient_i8;
extern const sentient_model_uid sentient_model_info_uid_sentient_i16;
extern const sentient_model_uid sentient_model_info_uid_sentient_i32;
extern const sentient_model_uid sentient_model_info_uid_sentient_i64;

struct sentient_model_info
{
    sentient_str8*              model_name;
    sentient_size               model_struct_size;
    sentient_bool               has_command_code;
    enum sentient_field_types   command_code_type;
    sentient_void*              command_code_value;
    sentient_size               fields_count;
    struct sentient_field_info* fields;
    sentient_bool               has_primary_key;
    sentient_size               primary_key_field_idx;
};

sentient_ssize sentient_serialize_with_protocol_info();

const struct sentient_model_info*
sentient_get_model_info(sentient_model_uid);

const sentient_ssize
sentient_get_model_struct_size(sentient_model_uid);

#ifdef __cplusplus
}
#endif

#endif