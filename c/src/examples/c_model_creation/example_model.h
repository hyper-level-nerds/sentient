#ifndef __EXAMPLE_MODEL_H__
#define __EXAMPLE_MODEL_H__

#include <stdint.h>
#include <stddef.h>

#include <sentient/sentient.h>

SENTIENT_DEFINE_MODEL(example_model,
	(INTEGER, uint64_t, model_no),
	(INTEGER, uint32_t, ah))

#endif