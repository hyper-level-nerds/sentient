#ifndef __SENTIENT_CORE_SENTIENT_MODEL_H__
#define __SENTIENT_CORE_SENTIENT_MODEL_H__

#include <sentient/core/types.h>
#include <sentient/core/internal/pp_utils.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define sentient_model(reserved_words, model_name_without_struct) \
	__sentient_model_impl(reserved_words, model_name_without_struct)
#define __sentient_model_impl(reserved_words, model_name_without_struct) \
	volatile const sentient_model_uid SENTIENT_UNIQUE_NAME(model_name_without_struct) = \
		SENTIENT_FIELD_TYPES_ ## model_name_without_struct ; \
	reserved_words model_name_without_struct

#ifdef __cplusplus
}
#endif

#endif