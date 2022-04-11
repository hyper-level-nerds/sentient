#ifndef __EXAMPLE_MODEL_H__
#define __EXAMPLE_MODEL_H__

#include <stddef.h>
#include <stdbool.h>

#include <sentient/core/types.h>
#include <sentient/core/protocol_info.h>

#ifdef __cplusplus
extern "C"
{
#endif


// ns example :
// 	   model model:
// 	   number: u64 $pk
// 	   email_address : str8[256]
// 	   password : str8[33] $dontread
// 	   health : f64
// 	   created_time : scdt64
// 	   updated_time : scdt64

struct example_model
{
	sentient_u64      number;
	sentient_str8_256 email_address;
	sentient_str8_33  password;
	sentient_f64      health;
	sentient_scdt64   created_date;
	sentient_scdt64   updated_date;
} __attribute__((aligned(1), packed));

const struct sentient_model_info* sentient_get_model_info_example_model();
sentient_size sentient_serialize_example_model(const struct example_model*, sentient_u8*);
sentient_size sentient_serialize_with_protocol_example_model(sentient_u8*,
	const struct sentient_protocol_info*, const struct example_model*);


struct example_protocol_in
{
	
};


#ifdef __cplusplus
}
#endif

#endif