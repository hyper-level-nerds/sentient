#include <sentient/core/protocol/protocol_error_codes.h>

#include <sentient/core/types.h>

static const sentient_str8* error_messages[] = {
    "success",
    "invalid etx",
    "invalid command code",
    "invalid etx",
    "invalid error checker value",
    "size mismatch",
    "unknown"
};

const sentient_str8* sentient_protocol_error_message(enum sentient_protocol_error_codes ec)
{
    const sentient_str8* error_message = sentient_nullptr;
    switch (ec)
    {
    case SENTIENT_PROTOCOL_ERROR_CODES_SUCCESS:
    case SENTIENT_PROTOCOL_ERROR_CODES_INVALID_STX:
    case SENTIENT_PROTOCOL_ERROR_CODES_INVALID_COMMAND_CODE:
    case SENTIENT_PROTOCOL_ERROR_CODES_INVALID_ETX:
    case SENTIENT_PROTOCOL_ERROR_CODES_INVALID_ERROR_CHECKER_VALUE:
    case SENTIENT_PROTOCOL_ERROR_CODES_SIZE_MISMATCH:
    case SENTIENT_PROTOCOL_ERROR_CODES_UNKNOWN:
    {
        error_message = error_messages[(sentient_u32)ec];
    }
    }

    return error_message;
}

