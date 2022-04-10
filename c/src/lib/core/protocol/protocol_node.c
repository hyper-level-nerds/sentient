#include <sentient/core/protocol/protocol_node.h>

/**
 * @author Jin
 * @brief 
 * 
 * @param node 
 * @return const struct sentient_protocol_node* 
 */
const struct sentient_protocol_node* sentient_protocol_node_next(
    const struct sentient_protocol_node* node)
{
    return node->next_node;
}

/**
 * @author Jin
 * @brief 
 * 
 * @param node 
 * @return const struct sentient_protocol_node* 
 */
const struct sentient_protocol_node* sentient_protocol_node_previous(
    const struct sentient_protocol_node* node)
{
    return node->previous_node;
}

/**
 * @author Jin
 * @brief 
 * 
 * @param node 
 * @param next 
 */
void sentient_protocol_node_set_next(struct sentient_protocol_node* node,
    const struct sentient_protocol_node* next)
{
    node->next_node = (struct sentient_protocol_node*)next;
}

/**
 * @author Jin
 * @brief 
 * 
 * @param node 
 * @param previous 
 */
void sentient_protocol_node_set_previous(struct sentient_protocol_node* node,
    const struct sentient_protocol_node* previous)
{
    node->previous_node = (struct sentient_protocol_node*)previous;
}

/**
 * @author Jin
 * @brief 
 * 
 * @param node 
 * @return struct sentient_protocol_node* 
 */
struct sentient_protocol_node* sentient_protocol_node_head(
    struct sentient_protocol_node* node)
{
    struct sentient_protocol_node* head = node;

    while (head != sentient_nullptr)
    {
        head = head->previous_node;
    }

    return head;
}

/**
 * @author Jin
 * @brief 
 * 
 * @param node 
 * @return struct sentient_protocol_node* 
 */
struct sentient_protocol_node* sentient_protocol_node_tail(
    struct sentient_protocol_node* node)
{
    struct sentient_protocol_node* tail = node;

    while (tail != sentient_nullptr)
    {
        tail = tail->next_node;
    }

    return tail;
}

/**
 * @author Jin
 * @brief clear all node status and get the head node
 * 
 * @param tail 
 * @return struct sentient_protocol_node*
 */
struct sentient_protocol_node* sentient_protocol_node_clear(
    struct sentient_protocol_node* tail)
{
    struct sentient_protocol_node* head = tail;

    while (head != sentient_nullptr)
    {
        head->is_processed = false;
        head = head->previous_node;
    }

    return head;
}