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
    struct sentient_protocol_node* previous_node;

    enum sentient_protocol_types   protocol_type;
    sentient_size                  protocol_size;

    sentient_bool                  is_processed;
    
    struct sentient_protocol_node* next_node;
};

const struct sentient_protocol_node* sentient_protocol_node_next(
    const struct sentient_protocol_node*);

const struct sentient_protocol_node* sentient_protocol_node_previous(
    const struct sentient_protocol_node*);

void sentient_protocol_node_set_next(struct sentient_protocol_node*,
    const struct sentient_protocol_node*);

void sentient_protocol_node_set_previous(struct sentient_protocol_node*,
    const struct sentient_protocol_node*);

struct sentient_protocol_node* sentient_protocol_node_head(
    struct sentient_protocol_node*);

struct sentient_protocol_node* sentient_protocol_node_tail(
    struct sentient_protocol_node*);

struct sentient_protocol_node* sentient_protocol_node_clear(
    struct sentient_protocol_node*);

#ifdef __cplusplus
}
#endif

#endif