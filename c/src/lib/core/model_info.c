#include <sentient/core/model_info.h>
#include <sentient/core/types.h>

#include <string.h>

struct sentient_model_info
sentient_model_info_sentient_u8 = {
    .model_name = "sentient_u8",
    .model_struct_size = sizeof(sentient_u8),
    .has_command_code = false,
    .command_code_type = SENTIENT_FIELD_TYPES_NONE,
    .command_code_value = sentient_nullptr,
    .fields_count = 0,
    .fields = sentient_nullptr,
    .has_primary_key = false,
    .primary_key_field_idx = 0,
};

struct sentient_model_info
sentient_model_info_sentient_u16 = {
    .model_name = "sentient_u16",
    .model_struct_size = sizeof(sentient_u16),
    .has_command_code = false,
    .command_code_type = SENTIENT_FIELD_TYPES_NONE,
    .command_code_value = sentient_nullptr,
    .fields_count = 0,
    .fields = sentient_nullptr,
    .has_primary_key = false,
    .primary_key_field_idx = 0,
};

struct sentient_model_info
sentient_model_info_sentient_u32 = {
    .model_name = "sentient_u32",
    .model_struct_size = sizeof(sentient_u32),
    .has_command_code = false,
    .command_code_type = SENTIENT_FIELD_TYPES_NONE,
    .command_code_value = sentient_nullptr,
    .fields_count = 0,
    .fields = sentient_nullptr,
    .has_primary_key = false,
    .primary_key_field_idx = 0,
};

struct sentient_model_info
sentient_model_info_sentient_u64 = {
    .model_name = "sentient_u64",
    .model_struct_size = sizeof(sentient_u64),
    .has_command_code = false,
    .command_code_type = SENTIENT_FIELD_TYPES_NONE,
    .command_code_value = sentient_nullptr,
    .fields_count = 0,
    .fields = sentient_nullptr,
    .has_primary_key = false,
    .primary_key_field_idx = 0,
};

struct sentient_model_info
sentient_model_info_sentient_i8 = {
    .model_name = "sentient_i8",
    .model_struct_size = sizeof(sentient_i8),
    .has_command_code = false,
    .command_code_type = SENTIENT_FIELD_TYPES_NONE,
    .command_code_value = sentient_nullptr,
    .fields_count = 0,
    .fields = sentient_nullptr,
    .has_primary_key = false,
    .primary_key_field_idx = 0,
};

struct sentient_model_info
sentient_model_info_sentient_i16 = {
    .model_name = "sentient_i16",
    .model_struct_size = sizeof(sentient_i16),
    .has_command_code = false,
    .command_code_type = SENTIENT_FIELD_TYPES_NONE,
    .command_code_value = sentient_nullptr,
    .fields_count = 0,
    .fields = sentient_nullptr,
    .has_primary_key = false,
    .primary_key_field_idx = 0,
};

struct sentient_model_info
sentient_model_info_sentient_i32 = {
    .model_name = "sentient_i32",
    .model_struct_size = sizeof(sentient_i32),
    .has_command_code = false,
    .command_code_type = SENTIENT_FIELD_TYPES_NONE,
    .command_code_value = sentient_nullptr,
    .fields_count = 0,
    .fields = sentient_nullptr,
    .has_primary_key = false,
    .primary_key_field_idx = 0,
};

struct sentient_model_info
sentient_model_info_sentient_i64 = {
    .model_name = "sentient_i64",
    .model_struct_size = sizeof(sentient_i64),
    .has_command_code = false,
    .command_code_type = SENTIENT_FIELD_TYPES_NONE,
    .command_code_value = sentient_nullptr,
    .fields_count = 0,
    .fields = sentient_nullptr,
    .has_primary_key = false,
    .primary_key_field_idx = 0,
};

const sentient_model_uid
sentient_model_info_uid_sentient_u8 =
    (sentient_model_uid)&sentient_model_info_sentient_u8;

const sentient_model_uid
sentient_model_info_uid_sentient_u16 =
    (sentient_model_uid)&sentient_model_info_sentient_u16;

const sentient_model_uid
sentient_model_info_uid_sentient_u32 =
    (sentient_model_uid)&sentient_model_info_sentient_u32;

const sentient_model_uid
sentient_model_info_uid_sentient_u64 =
    (sentient_model_uid)&sentient_model_info_sentient_u64;

const sentient_model_uid
sentient_model_info_uid_sentient_i8 =
    (sentient_model_uid)&sentient_model_info_sentient_i8;

const sentient_model_uid
sentient_model_info_uid_sentient_i16 =
    (sentient_model_uid)&sentient_model_info_sentient_i16;

const sentient_model_uid
sentient_model_info_uid_sentient_i32 =
    (sentient_model_uid)&sentient_model_info_sentient_i32;

const sentient_model_uid
sentient_model_info_uid_sentient_i64 =
    (sentient_model_uid)&sentient_model_info_sentient_i64;


struct sentient_model_info*
sentient_global_model_info_types[sizeof(sentient_model_uid)];

sentient_size
sentient_global_model_info_types_idx = 0;

/**
 * @author Jin
 * @brief 
 * 
 * @param model_uid 
 * @return const struct sentient_model_info* 
 */
const struct sentient_model_info*
sentient_get_model_info(sentient_model_uid model_uid)
{
    return sentient_global_model_info_types[model_uid];
}

/**
 * @author Jin
 * @brief 
 * 
 * @param model_uid 
 * @return const sentient_ssize 
 */
const sentient_ssize
sentient_get_model_struct_size(sentient_model_uid model_uid)
{
    sentient_ssize model_struct_size = 0;

    if (sentient_global_model_info_types[model_uid] == sentient_nullptr)
    {
        model_struct_size = 0;
    }

    model_struct_size =
        sentient_global_model_info_types[model_uid]->model_struct_size;

    return model_struct_size;
}