#ifndef __SENTIENT_CORE_ERROR_CHECKER_TYPES_H__
#define __SENTIENT_CORE_ERROR_CHECKER_TYPES_H__

/**
 * @file error_detection_types.h
 * @author Jin (jaehwanspin@gmail.com)
 * @brief defines error detection types enumerations
 * 
 * https://blog.naver.com/PostView.nhn?isHttpsRedirect=true&blogId=dolicom&logNo=10070824912
 * 
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

enum sentient_checksum_types
{
    SENTIENT_CHECKSUM_TYPES_NONE,
    SENTIENT_CHECKSUM_TYPES_CRC1,
    SENTIENT_CHECKSUM_TYPES_CRC5,
    SENTIENT_CHECKSUM_TYPES_CRC7,
    SENTIENT_CHECKSUM_TYPES_CRC8,
    SENTIENT_CHECKSUM_TYPES_CRC8_FLETCHER,
    SENTIENT_CHECKSUM_TYPES_CRC16_FLETCHER,
    SENTIENT_CHECKSUM_TYPES_CRC16_ADLER_A,
    SENTIENT_CHECKSUM_TYPES_CRC16_ADLER_B,
    SENTIENT_CHECKSUM_TYPES_CRC16_CCITT,
    SENTIENT_CHECKSUM_TYPES_CRC16_IBM,
    SENTIENT_CHECKSUM_TYPES_CRC32_ADLER,
    SENTIENT_CHECKSUM_TYPES_CRC32_IEEE_802_3,
    SENTIENT_CHECKSUM_TYPES_CRC32_CASTAGNOLI,
    SENTIENT_CHECKSUM_TYPES_CRC64_ISO,
    SENTIENT_CHECKSUM_TYPES_CRC64_ECMA_182,
    SENTIENT_CHECKSUM_TYPES_CRC128,
};

sentient_bool sentient_match_checksum(enum sentient_checksum_types,
                                      sentient_void*,
                                      sentient_size);

#ifdef __cplusplus
}
#endif

#endif