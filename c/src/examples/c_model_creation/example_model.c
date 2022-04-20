#include "./example_model.h"

#include <string.h>
#include <memory.h>

#include <sentient/core/model_info.h>
#include <sentient/core/field_info.h>
#include <sentient/core/protocol/protocol_node.h>
#include <sentient/core/checksum_types.h>

extern struct sentient_model_info
	sentient_global_model_info_types[];
extern sentient_size
sentient_global_model_info_types_idx;

static
struct sentient_protocol_node
protocol_nodes_example_dynamic_protocol[] = {
		{
			.protocol_type = SENTIENT_PROTOCOL_TYPES_MAGIC_VALUE,
			.protocol_size = sizeof(sentient_u8),
			.protocol_value = (sentient_u8[]){ (sentient_u8)0xA0 },
			.is_processed = false
		},
		{
			.protocol_type = SENTIENT_PROTOCOL_TYPES_BODY_SIZE,
			.protocol_size = sizeof(sentient_u8),
			.protocol_value = (sentient_u8[]){ (sentient_u8)0xA0 },
			.is_processed = false
		}
};

static
struct sentient_protocol_info
protocol_info_example_protocol_in = {
	.has_stx = true,
	.stx_size = sizeof(sentient_u16),
	.stx_value = (sentient_u8[]){ (sentient_u8)0xAA, (sentient_u8)0x55 },
	.protocol_nodes_size = 
		(sentient_size)(sizeof(protocol_nodes_example_dynamic_protocol) /
		sizeof(struct sentient_protocol_node)),
	.protocol_nodes = protocol_nodes_example_dynamic_protocol,
	.has_etx = true,
	.etx_size = sizeof(sentient_u16),
	.etx_value = (sentient_u8[]){ (sentient_u8)0xFF, (sentient_u8)0x22 }
};

const struct sentient_protocol_info*
sentient_get_protocol_info_example_protocol_in()
{
	return &protocol_info_example_protocol_in;
}


static
const struct sentient_field_info
field_info_example_dynamic_model[] = {
	{
		.field_type = SENTIENT_FIELD_TYPES_U64,
		.field_name = "number",
		.field_offset = 0,
		.array_size = 0
	},
	{
		.field_type = SENTIENT_FIELD_TYPES_STR8,
		.field_name = "name",
		.field_offset =
			__builtin_offsetof(struct example_dynamic_model,
				name),
		.array_size = 32
	},
	{
		.field_type = SENTIENT_FIELD_TYPES_STR8,
		.field_name = "email_address",
		.field_offset =
			__builtin_offsetof(struct example_dynamic_model,
				email_address),
		.array_size = 64
	},
	{
		.field_type = SENTIENT_FIELD_TYPES_STR8,
		.field_name = "phone_number",
		.field_offset =
			__builtin_offsetof(struct example_dynamic_model,
				phone_number),
		.array_size = 32
	},
	{
		.field_type = SENTIENT_FIELD_TYPES_U16,
		.field_name = "children_size",
		.field_offset =
			__builtin_offsetof(struct example_dynamic_model,
				children_size),
		.array_size = 0
	},
	{
		.field_type = SENTIENT_FIELD_TYPES_example_dynamic_model,
		.field_name = "children",
		.field_offset =
			__builtin_offsetof(struct example_dynamic_model,
				children),
		.array_size = 0
	},
	{
		.field_type = SENTIENT_FIELD_TYPES_SCDT64,
		.field_name = "created_date",
		.field_offset =
			__builtin_offsetof(struct example_dynamic_model,
			created_date),
		.array_size = 0
	},
	{
		.field_type = SENTIENT_FIELD_TYPES_SCDT64,
		.field_name = "updated_date",
		.field_offset =
			__builtin_offsetof(struct example_dynamic_model,
			updated_date),
		.array_size = 0
	},
};

const struct sentient_field_info*
sentient_field_info_get_example_dynamic_model()
{
	return field_info_example_dynamic_model;
}

static const
sentient_u32
example_dynamic_model_command_code = 0x00000001;

static
const struct sentient_model_info
model_info_example_dynamic_model = {
	.model_name = "example_dynamic_model",
	.model_struct_size = sizeof(struct example_dynamic_model),
	.has_command_code = true,
	.command_code_type = SENTIENT_FIELD_TYPES_U32,
	.command_code_value = (sentient_u32*)&example_dynamic_model_command_code,
	.fields_count = sizeof(field_info_example_dynamic_model) /
		sizeof(struct sentient_field_info),
	.fields =
		(struct sentient_field_info*)field_info_example_dynamic_model,
	.has_primary_key = true,
	.primary_key_field_idx = 0
};

#define EXAMPLE_DYNAMIC_MODEL_INFO_UID_IDX 0U

const
struct sentient_model_info*
sentient_model_info_get_example_dynamic_model()
{
	return &model_info_example_dynamic_model;
}

sentient_ssize
sentient_get_size_to_serialize_example_dynamic_model(
	const struct example_dynamic_model* model)
{
	sentient_ssize size = 0;
	return size;
}

sentient_ssize
sentient_serialize_example_dynamic_model(
	sentient_u8* byte_buffer,
	const struct example_dynamic_model* model)
{
	sentient_ssize buffer_size = 0;
	const struct sentient_field_info* fields_info =
		sentient_field_info_get_example_dynamic_model();

	for (int idx = 0;
	     idx < model_info_example_dynamic_model.fields_count;
		 idx++)
	{
		switch (model_info_example_dynamic_model.fields[idx].field_type)
		{
		case SENTIENT_FIELD_TYPES_example_dynamic_model:
		{
			sentient_size array_field_size = 0;
			const struct example_dynamic_model* array_field_ptr = (const struct example_dynamic_model*)
				*(sentient_uptr*)((sentient_u8*)model + model_info_example_dynamic_model.fields[idx].field_offset);

			if (array_field_ptr != sentient_nullptr)
			{
				{
					sentient_ssize size_to_copy =
						sentient_field_info_get_field_size(
							&model_info_example_dynamic_model.fields[idx - 1]);

					sentient_size offset =
						model_info_example_dynamic_model.fields[idx - 1].field_offset;

					if (memmove(&array_field_size,
						((sentient_u8*)model) + offset,
						size_to_copy) == sentient_nullptr)
					{
						buffer_size = -1;
						break;
					}
				}

				for (int array_field_idx = 0;
					 array_field_idx < array_field_size && buffer_size != -1;
					 array_field_idx++)
				{
					sentient_ssize copied_size =
						sentient_serialize_example_dynamic_model(
							byte_buffer + buffer_size, &array_field_ptr[array_field_idx]);
					if (copied_size < 0)
					{
						buffer_size = -1;
					}
					else
					{
						buffer_size += copied_size;
					}
				}
			}

			break;
		}
		default:
		{
			sentient_ssize size_to_copy =
				sentient_field_info_get_field_size(
					&model_info_example_dynamic_model.fields[idx]);
			
			sentient_size offset =
				model_info_example_dynamic_model.fields[idx].field_offset;

			if (memmove(byte_buffer + buffer_size,
						((sentient_u8*)model) + offset,
						size_to_copy) == sentient_nullptr)
			{
				buffer_size = -1;
			}
			else
			{
				buffer_size += size_to_copy;
			}

			break;
		}
		}
	}

	return buffer_size;
}

#include <stdio.h>

sentient_ssize
sentient_deserialize_example_dynamic_model(
	struct example_dynamic_model* model,
	sentient_u8* byte_buffer)
{
	sentient_ssize buffer_size = 0;

	const struct sentient_field_info* fields_info =
		sentient_field_info_get_example_dynamic_model();

	for (int idx = 0;
		idx < model_info_example_dynamic_model.fields_count;
		idx++)
	{

	}

	return buffer_size;
}

sentient_ssize
sentient_serialize_protocol_with_example_dynamic_model(
	sentient_u8* buffer, const struct sentient_protocol_info* protoc_info,
	const struct example_dynamic_model* model)
{
	sentient_size model_size = sizeof(struct example_dynamic_model);
	sentient_size buffer_size = 0;
	struct sentient_serialization_info se_info = {
		.buffer = buffer,
		.protocol_info = (struct sentient_protocol_info*)protoc_info,
		.model_info =
			(struct sentient_model_info*)&model_info_example_dynamic_model,
		.model_buffer = (sentient_void*)model,
		// .model_buffer_size = sentient_model_serialized_max_size_example_model
	};

	buffer_size = sentient_serialize_with_protocol_info(&se_info);

	return buffer_size;
}