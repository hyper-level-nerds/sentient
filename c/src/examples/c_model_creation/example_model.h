#ifndef __EXAMPLE_MODEL_H__
#define __EXAMPLE_MODEL_H__

#include <stdint.h>
#include <stddef.h>

#include <sentient/sentient.h>

SENTIENT_DEFINE_MODEL(example_model,
	(U64, uint64_t, model_no),
	(STR8, char, name, 32),
	(U32, uint32_t, ah))

#endif