#ifndef __SENTIENT_CORE_PROTOCOL_INFO_H__
#define __SENTIENT_CORE_PROTOCOL_INFO_H__

/**
 * @file protocol_info.h
 * @author Jin (jaehwanspin@gmail.com)
 * @brief defines protocol structure and utils
 * @version 0.1
 * @date 2023-04-10
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <sentient/core/types.h>
#include <sentient/core/protocol/protocol_node.h>

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @author Jin
 * @brief protocol info
 * 
 */
struct sentient_protocol_info
{
    sentient_bool                  has_stx;
    sentient_size                  stx_size;
    sentient_void*                 stx_value;
    sentient_bool                  is_stx_processed;

    struct sentient_protocol_node* curr_node;
    
    sentient_bool                  has_etx;
    sentient_size                  etx_size;
    sentient_void*                 etx_value;
    sentient_bool                  is_etx_processed;

    struct sentient_buffer_stream* buffer_stream;
};

sentient_size sentient_serialize_with_protocol_info(sentient_u8*, struct sentient_protocol_info*, void*, sentient_size);

#ifdef __cplusplus
}
#endif

#endif