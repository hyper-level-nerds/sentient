#include "./example_model.h"

#include <string.h>

#include <sentient/core/model_info.h>
#include <sentient/core/field_info.h>
#include <sentient/core/protocol/protocol_node.h>
#include <sentient/core/error_checker_types.h>

static struct sentient_field_info sentient_fields_info_example_model[] = {
    { SENTIENT_FIELD_TYPES_U64, "number", 0, false, 0 },
    { SENTIENT_FIELD_TYPES_STR8, "email_address", 8, true, 256 },
    { SENTIENT_FIELD_TYPES_STR8, "password", 0, true, 33 },
    { SENTIENT_FIELD_TYPES_F64, "health", 0 },
    { SENTIENT_FIELD_TYPES_SCDT64, "created_date", 0, false, 0 },
    { SENTIENT_FIELD_TYPES_SCDT64, "updated_date", 0, false, 0 }
};

static struct sentient_model_info model_info_example_model = {
    true,
    false,
    SENTIENT_FIELD_TYPES_NONE,
    sizeof(struct example_model),
    sizeof(sentient_fields_info_example_model) / sizeof(struct sentient_field_info),
    sentient_fields_info_example_model
};

const struct sentient_model_info* sentient_get_model_info_example_model()
{
    return &model_info_example_model;
}

sentient_size sentient_serialize_example_model(const struct example_model* model, sentient_u8* byte_buffer)
{
    size_t buffer_size = sizeof(struct example_model);

    if (memmove(byte_buffer, model, sizeof(struct example_model)) == sentient_nullptr)
    {
        buffer_size = -1;
    }

    return buffer_size;
}

sentient_size sentient_protocol_serialize_example_model(const struct sentient_protocol_info* protoc_info,
	                                                    const struct example_model* model,
                                                        sentient_u8* buffer)
{
    size_t buffer_size;

    

    return buffer_size;
}