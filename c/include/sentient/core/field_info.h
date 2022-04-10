#ifndef __SENTIENT_CORE_FIELD_INFO_H__
#define __SENTIENT_CORE_FIELD_INFO_H__

/**
 * @file field_info.h
 * @author Jin (jaehwanspin@gmail.com)
 * @brief defines field info structure and methods
 * @version 0.1
 * @date 2022-04-08
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include <sentient/core/types.h>
#include <sentient/core/field_types.h>

#ifdef __cplusplus
extern "C"
{
#endif

struct sentient_field_info
{
    enum sentient_field_types field_type;
    sentient_str8*            field_name;
    size_t                    model_offset;
    bool                      is_array;
    size_t                    array_size;
};

#ifdef __cplusplus
}
#endif

#endif