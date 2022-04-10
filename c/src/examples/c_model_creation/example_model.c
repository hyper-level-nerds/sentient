#include "./example_model.h"

#include <string.h>

#include <sentient/core/model_info.h>
#include <sentient/core/field_info.h>

static struct sentient_field_info sentient_fields_info_example_model[] = {
    { SENTIENT_FIELD_TYPES_U64, "number", 0, false, 0 },
    { SENTIENT_FIELD_TYPES_STR8, "email_address", 8, true, 256 },
    { SENTIENT_FIELD_TYPES_STR8, "password", 0, true, 33 },
    { SENTIENT_FIELD_TYPES_F64, "health", 0 },
    { SENTIENT_FIELD_TYPES_SCDT64, "created_date", 0, false, 0 },
    { SENTIENT_FIELD_TYPES_SCDT64, "updated_date", 0, false, 0 }
};

static struct sentient_model_info sentient_model_info_example_model = {
    true,
    sizeof(struct example_model),
    sizeof(sentient_fields_info_example_model) / sizeof(struct sentient_field_info),
    sentient_fields_info_example_model
};

const struct sentient_model_info* get_model_info_example_model()
{
    return &sentient_model_info_example_model;
}

bool sentient_serialize_example_model(struct example_model* model, sentient_u8* byte_buffer)
{
    bool res = true;

    if (memmove(byte_buffer, model, sizeof(struct example_model)) == sentient_nullptr)
    {
        res = false;
    }

    return res;
}