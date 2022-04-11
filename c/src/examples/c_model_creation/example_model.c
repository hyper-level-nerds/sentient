#include "./example_model.h"

#include <string.h>
#include <memory.h>

#include <sentient/core/model_info.h>
#include <sentient/core/field_info.h>
#include <sentient/core/protocol/protocol_node.h>
#include <sentient/core/error_checker_types.h>

struct sentient_protocol_node protocol_nodes_example_protocol[] = {
    {
        .protocol_type = SENTIENT_PROTOCOL_TYPES_MAGIC_VALUE,
        .protocol_size = sizeof(sentient_u8),
        .protocol_value = (sentient_u8[]){ (sentient_u8)0xA0 },
        .is_processed = false
    },
    {
        .protocol_type = SENTIENT_PROTOCOL_TYPES_BODY_SIZE,
        .protocol_size = sizeof(sentient_u8),
        .protocol_value = (sentient_u8[]){ (sentient_u8)0xA0 },
        .is_processed = false
    }
};



static struct sentient_protocol_info protocol_info_example_protocol_in = {
    .has_stx = true,
    .stx_size = sizeof(sentient_u16),
    .stx_value = (sentient_u8[]){ (sentient_u8)0xAA, (sentient_u8)0x55 },
    .is_stx_processed = false,
    .protocol_nodes = protocol_nodes_example_protocol,
    .has_etx = true,
    .etx_size = sizeof(sentient_u16),
    .etx_value = (sentient_u8[]){ (sentient_u8)0xEE, (sentient_u8)0xFF }
};

const struct sentient_protocol_info* sentient_get_protocol_info_example_protocol_in()
{
    return &protocol_info_example_protocol_in;
}

static struct sentient_field_info sentient_fields_info_example_model[] = {
    { SENTIENT_FIELD_TYPES_U64, "number", 0, false, 0 },
    { SENTIENT_FIELD_TYPES_STR8, "email_address", 8, true, 256 },
    { SENTIENT_FIELD_TYPES_STR8, "password", 0, true, 33 },
    { SENTIENT_FIELD_TYPES_F64, "health", 0 },
    { SENTIENT_FIELD_TYPES_SCDT64, "created_date", 0, false, 0 },
    { SENTIENT_FIELD_TYPES_SCDT64, "updated_date", 0, false, 0 }
};

static struct sentient_model_info model_info_example_model = {
    .is_static_model = true,
    .has_command_code = false,
    .command_code_type = SENTIENT_FIELD_TYPES_NONE,
    .total_size = sizeof(struct example_model),
    .fields_count = sizeof(sentient_fields_info_example_model) /
        sizeof(struct sentient_field_info),
    .fields = sentient_fields_info_example_model,
    .has_primary_key = false,
    .primary_key_field_idx = 0
};

const struct sentient_model_info* sentient_get_model_info_example_model()
{
    return &model_info_example_model;
}

sentient_ssize
sentient_serialize_example_model(const struct example_model* model,
    sentient_u8* byte_buffer)
{
    sentient_size buffer_size = sizeof(struct example_model);

    if (memmove(byte_buffer, model, sizeof(struct example_model)) == sentient_nullptr)
    {
        buffer_size = -1;
    }

    return buffer_size;
}

sentient_ssize
sentient_serialize_with_protocol_example_model(
    sentient_u8* buffer, const struct sentient_protocol_info* protoc_info,
	const struct example_model* model)
{
    sentient_size model_size = sizeof(struct example_model);
    sentient_size buffer_size = 0;
    
    buffer_size = sentient_serialize_with_protocol_info(
        buffer, protoc_info, sentient_get_model_info_example_model(),
        model, model_size);

    return buffer_size;
}