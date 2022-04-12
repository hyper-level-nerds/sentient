#include <sentient/core/protocol_info.h>

#include <memory.h>

#include <sentient/core/model_info.h>

static sentient_void* sentient_process_protocol_node(sentient_u8* buffer,
        struct sentient_protocol_node* protoc_node,
        struct sentient_model_info* model_info,
        void* model_buffer, sentient_size model_size)
{
    sentient_void* result = sentient_nullptr;

    switch (protoc_node->protocol_type)
    {
    case SENTIENT_PROTOCOL_TYPES_COMMAND_CODE:
    {

        break;
    }
    case SENTIENT_PROTOCOL_TYPES_VARIABLE_CODE:
    {

        break;
    }
    case SENTIENT_PROTOCOL_TYPES_MAGIC_VALUE:
    {

        break;
    }
    case SENTIENT_PROTOCOL_TYPES_BODY_SIZE:
    {

        break;
    }
    case SENTIENT_PROTOCOL_TYPES_BODY:
    {

        break;
    }
    }

    return result;
}

sentient_ssize sentient_serialize_with_protocol_info(struct sentient_serialization_info* se_info)
{
	sentient_size buffer_size = 0;
    struct sentient_protocol_node* protoc_node =
        se_info->protocol_info->protocol_nodes;

    if (se_info->protocol_info != sentient_nullptr)
    {
        if (se_info->protocol_info->has_stx)
        {
            if (memmove(se_info->buffer, se_info->protocol_info->stx_value, se_info->protocol_info->stx_size)
                == sentient_nullptr)
            {
                buffer_size = -1;
            }
            else
            {
                buffer_size = buffer_size + se_info->protocol_info->stx_size;
            }
        }

        for (sentient_size idx = 0; idx < se_info->protocol_info->protocol_nodes_size && buffer_size != -1; idx++)
        {

        }

        if (se_info->protocol_info->has_etx && buffer_size != -1)
        {
            if (memmove(se_info->buffer, se_info->protocol_info->etx_value, se_info->protocol_info->etx_size)
                == sentient_nullptr)
            {
                buffer_size = -1;
            }
            else
            {
                buffer_size = buffer_size + se_info->protocol_info->stx_size;
            }
        }
    }

	return buffer_size;
}