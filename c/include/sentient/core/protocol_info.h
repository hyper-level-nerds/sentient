#ifndef __SENTIENT_CORE_PROTOCOL_INFO_H__
#define __SENTIENT_CORE_PROTOCOL_INFO_H__

/**
 * @file protocol_info.h
 * @author Jin (jaehwanspin@gmail.com)
 * @brief defines protocol structure and utils
 * @version 0.1
 * @date 2023-04-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

struct sentient_protocol_info
{
    bool has_stx;
    bool has_etx;
};

#ifdef __cplusplus
}
#endif

#endif