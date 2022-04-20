#include <sentient/core/model_info.h>
#include <sentient/core/types.h>

struct sentient_model_info
sentient_global_model_info_types[sizeof(sentient_model_uid)];

sentient_size
sentient_global_model_info_types_idx = 0;

const struct sentient_model_info*
sentient_get_model_info(sentient_model_uid model_uid)
{
    return &sentient_global_model_info_types[model_uid];
}