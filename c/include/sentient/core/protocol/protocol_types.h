#ifndef __SENTIENT_CORE_PROTOCOL_PROTOCOL_TYPES_H__
#define __SENTIENT_CORE_PROTOCOL_PROTOCOL_TYPES_H__


#ifdef __cplusplus
extern "C"
{
#endif

enum sentient_protocol_types
{
    SENTIENT_PROTOCOL_TYPES_HEADER,
    SENTIENT_PROTOCOL_TYPES_COMMAND_CODE,
    SENTIENT_PROTOCOL_TYPES_VARIABLE_CODE,
    SENTIENT_PROTOCOL_TYPES_MAGIC_VALUE,
    SENTIENT_PROTOCOL_TYPES_BODY_SIZE,
    SENTIENT_PROTOCOL_TYPES_BODY,
};

#ifdef __cplusplus
}
#endif

#endif