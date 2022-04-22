#ifndef __EXAMPLE_MODEL_H__
#define __EXAMPLE_MODEL_H__

#include <stddef.h>
#include <stdbool.h>

#include <sentient/core/types.h>

#ifdef __cplusplus
extern "C"
{
#endif

// example: ns
//     protoc: message_protocol
//         start: stx8[] { 0xAA, 0x55 }
//         command : cmd32 {  }
//         payload_size : size16
//         payload : data
//         checksum : checksum: crc8
//         end : etx8[] { 0xFF, 0xEE }
// 
//     dynamic_model: model $cmd32 { 0x00000001 }
//         number: u64 $pk
//         name : str8[32]
//         email_address : str8[64]
//         password : str8[33] $donutread
//         phone_number : str8[32]
//         childs_size : u16
//         childs : model[]
//         created_date : scdt64
//         updated_date : scdt64

// struct example_protoc
// {
//     sentient_protocol_cmd32  command;
//     sentient_protocol_size16 payload_size;
// };

struct example_dynamic_model
{
    sentient_u64                  number;
    sentient_str8_32              name;
    sentient_str8_64              email_address;
    sentient_str8_32              phone_number;
    sentient_u16                  children_size;
    struct example_dynamic_model* children;
    sentient_scdt64               created_date;
    sentient_scdt64               updated_date;
};

#ifdef __cplusplus
}
#endif

#endif