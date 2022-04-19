#include <sentient/core/model_info.h>

#include <sentient/core/types.h>

#define SENTIENT_GLOBAL_DEFAULT_MODEL_INFO_TYPES_MAX_SIZE 4096

#ifndef SENTIENT_GLOBAL_MODEL_INFO_TYPES_MAX_SIZE
#define SENTIENT_GLOBAL_MODEL_INFO_TYPES_MAX_SIZE SENTIENT_GLOBAL_DEFAULT_MODEL_INFO_TYPES_MAX_SIZE
#endif

struct sentient_model_info
sentient_global_model_info_types[SENTIENT_GLOBAL_MODEL_INFO_TYPES_MAX_SIZE] = { 0, };

const struct sentient_model_info*
sentient_get_model_info(sentient_model_uid_t model_uid)
{
    return &sentient_global_model_info_types[model_uid];
}