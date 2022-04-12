#ifndef __SENTIENT_CORE_PROTOCOL_PROTOCOL_NODE_H__
#define __SENTIENT_CORE_PROTOCOL_PROTOCOL_NODE_H__

/**
 * @file protocol_node.h
 * @author Jin (jaehwanspin@gmail.com)
 * @brief defines protocol sequential linked node structure
 * @version 0.1
 * @date 2022-04-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <sentient/core/types.h>
#include <sentient/core/protocol/protocol_types.h>

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @author Jin
 * @brief protocol header/footer descriptor
 * 
 */
struct sentient_protocol_node
{
    enum sentient_protocol_types   protocol_type;
    sentient_size                  protocol_size;
    sentient_void*                 protocol_value;
    sentient_bool                  is_processed;
};

struct sentient_protocol_required_values_node
{
    enum sentient_protocol_types   protocol_type;
    sentient_size                  protocol_size;
    sentient_void*                 protocol_required_values;
    sentient_bool                  is_processed;
};

#ifdef __cplusplus
}
#endif

#endif