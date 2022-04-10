#ifndef __SENTIENT_CORE_MODEL_INFO_H__
#define __SENTIENT_CORE_MODEL_INFO_H__

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

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
    bool                        is_static_model;
    bool                        has_command_code;
    enum sentient_field_types   command_code_type;
    size_t                      total_size;
    size_t                      fields_count;
    struct sentient_field_info* fields;
};

#ifdef __cplusplus
}
#endif

#endif