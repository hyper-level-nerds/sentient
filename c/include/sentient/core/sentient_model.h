#ifndef __SENTIENT_CORE_SENTIENT_MODEL_H__
#define __SENTIENT_CORE_SENTIENT_MODEL_H__

#include <sentient/core/types.h>
#include <sentient/core/internal/pp_utils.h>

#include <string.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define sentient_model(reserved_words, model_name_without_struct, var_name, /* init_exprs */...) \
	__sentient_model_impl(reserved_words, model_name_without_struct, var_name, __VA_ARGS__)

#define __sentient_model_impl(reserved_words, model_name_without_struct, var_name, ...) \
	reserved_words \
    model_name_without_struct \
    var_name \
	__attribute__((aligned(sizeof(sentient_model_uid)))) \
	    = __VA_ARGS__ ; \
    sentient_model_uid SENTIENT_UNIQUE_NAME(model_name_without_struct) = \
		SENTIENT_FIELD_TYPES_ ## model_name_without_struct ; \
    memcpy((sentient_model_uid*)(& var_name) - 1, \
	    &SENTIENT_UNIQUE_NAME(model_name_without_struct), \
	    sizeof(sentient_model_uid))

#ifdef __cplusplus
}
#endif

#endif