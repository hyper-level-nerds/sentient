#ifndef __EXAMPLE_MODEL_H__
#define __EXAMPLE_MODEL_H__

#include <stddef.h>
#include <stdbool.h>

#include <sentient/core/types.h>

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
};

const struct sentient_model_info* sentient_get_model_info_example_model();
bool sentient_serialize_example_model(struct example_model*, sentient_u8*);


#ifdef __cplusplus
}
#endif

#endif