#ifndef __SENTIENT_CORE_PROTOCOL_BUFFER_STREAM_H__
#define __SENTIENT_CORE_PROTOCOL_BUFFER_STREAM_H__

/**
 * @file buffer_stream.h
 * @author Jin (jaehwanspin@gmail.com)
 * @brief defines circular buffer stream
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

struct sentient_buffer_stream
{
    sentient_u8*  buffer;
    sentient_size buffer_size;
    sentient_size current_pos;
};



#ifdef __cplusplus
}
#endif

#endif