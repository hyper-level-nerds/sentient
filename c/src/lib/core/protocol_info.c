#include <sentient/core/protocol_info.h>

#include <memory.h>

#include <sentient/core/model_info.h>

sentient_size sentient_serialize_with_protocol_info(sentient_u8* buffer,
        struct sentient_protocol_info* protoc_info,
        struct sentient_model_info* model_info,
		void* model_buffer, sentient_size model_size)
{
	sentient_size buffer_size = 0;
    struct sentient_protocol_node* protoc_node = protoc_info->protocol_nodes;

    if (protoc_info != sentient_nullptr)
    {
        if (protoc_info->has_stx)
        {
            if (memmove(buffer, protoc_info->stx_value, protoc_info->stx_size) == sentient_nullptr)
            {
                buffer_size = -1;
            }
            else
            {
                buffer_size = buffer_size + protoc_info->stx_size;
            }
        }

        while (protoc_node != sentient_nullptr && buffer_size != -1)
        {

        }

        if (protoc_info->has_etx && buffer_size != -1)
        {

        }
    }

	return buffer_size;
}