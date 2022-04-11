#ifndef __SENTIENT_CORE_PROTOCOL_PROTOCOL_ERROR_CODES_H__
#define __SENTIENT_CORE_PROTOCOL_PROTOCOL_ERROR_CODES_H__

/**
 * @file protocol_error_codes.h
 * @author Jin (jaehwanspin@gmail.com)
 * @brief defines protocol error codes enumeration
 * @version 0.1
 * @date 2022-04-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <sentient/core/types.h>

#ifdef __cplusplus
extern "C"
{
#endif

enum sentient_protocol_error_codes
{
    SENTIENT_PROTOCOL_ERROR_CODES_SUCCESS = 0,
    SENTIENT_PROTOCOL_ERROR_CODES_INVALID_STX,
    SENTIENT_PROTOCOL_ERROR_CODES_INVALID_COMMAND_CODE,
    SENTIENT_PROTOCOL_ERROR_CODES_INVALID_ETX,
    SENTIENT_PROTOCOL_ERROR_CODES_INVALID_ERROR_CHECKER_VALUE,
    SENTIENT_PROTOCOL_ERROR_CODES_SIZE_MISMATCH,
    SENTIENT_PROTOCOL_ERROR_CODES_BUFFER_OVERFLOW,
    SENTIENT_PROTOCOL_ERROR_CODES_UNKNOWN,
};

const sentient_str8* sentient_protocol_error_message(enum sentient_protocol_error_codes);

#ifdef __cplusplus
}
#endif

#endif