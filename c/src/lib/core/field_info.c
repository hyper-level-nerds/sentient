#include <sentient/core/field_info.h>


/**
 * @brief get field size;
 * 
 * @param field_info 
 * @param field_ptr 
 * @return sentient_ssize 
 */
sentient_ssize sentient_field_info_get_field_size(
    struct sentient_field_info* field_info)
{
    sentient_ssize field_size = -1;

    switch (field_info->field_type)
    {
    case SENTIENT_FIELD_TYPES_NONE:
    {
        break;
    }
    case SENTIENT_FIELD_TYPES_U8:
    case SENTIENT_FIELD_TYPES_I8:
    case SENTIENT_FIELD_TYPES_BF8:
    case SENTIENT_FIELD_TYPES_STR8:
    {
        if (field_info->array_size > 0)
        {
            field_size = sizeof(sentient_u8)
                * field_info->array_size;
        }
        else
        {
            field_size = sizeof(sentient_u8);
        }
        break;
    }
    case SENTIENT_FIELD_TYPES_U16:
    case SENTIENT_FIELD_TYPES_I16:
    case SENTIENT_FIELD_TYPES_BF16:
    case SENTIENT_FIELD_TYPES_STR16:
    {
        if (field_info->array_size > 0)
        {
            field_size = sizeof(sentient_u16)
                * field_info->array_size;
        }
        else
        {
            field_size = sizeof(sentient_u8);
        }
        break;
    }
    case SENTIENT_FIELD_TYPES_U32:
    case SENTIENT_FIELD_TYPES_I32:
    case SENTIENT_FIELD_TYPES_F32:
    case SENTIENT_FIELD_TYPES_BF32:
    case SENTIENT_FIELD_TYPES_SCDT32:
    case SENTIENT_FIELD_TYPES_STR32:
    {
        if (field_info->array_size > 0)
        {
            field_size = sizeof(sentient_u32)
                * field_info->array_size;
        }
        else
        {
            field_size = sizeof(sentient_u32);
        }
        break;
    }
    case SENTIENT_FIELD_TYPES_U64:
    case SENTIENT_FIELD_TYPES_I64:
    case SENTIENT_FIELD_TYPES_F64:
    case SENTIENT_FIELD_TYPES_BF64:
    case SENTIENT_FIELD_TYPES_SCDT64:
    case SENTIENT_FIELD_TYPES_PT64:
    {
        if (field_info->array_size > 0)
        {
            field_size = sizeof(sentient_u64)
                * field_info->array_size;
        }
        else
        {
            field_size = sizeof(sentient_u64);
        }
        break;
    }
    // case SENTIENT_FIELD_TYPES_MODEL:
    case SENTIENT_FIELD_TYPES_PTR:
    {
        field_size = sizeof(sentient_uptr);
        break;
    }
    }

    return field_size;
}