#ifndef __EXAMPLE_MODEL_H__
#define __EXAMPLE_MODEL_H__

#include <sentient/core/types.h>

#ifdef __cplusplus
extern "C"
{
#endif


// ns example :
// 	model model:
// 	number: u64 $pk
// 	email_address : str8[256]
// 	password : str8[33] $dontread
// 	health : f64
// 	created_time : scdt64
// 	updated_time : scdt64

struct example_model
{
	sentient_u64      number;
	sentient_str8_256 email_address;
	sentient_str8_33  password;
	sentient_f64      health;
	sentient_scdt64   created_date;
	sentient_scdt64   updated_date;
};

#ifdef __cplusplus
}
#endif

#endif