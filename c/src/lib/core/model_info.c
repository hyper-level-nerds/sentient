#include <sentient/core/model_info.h>
#include <sentient/core/types.h>

#include <string.h>

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