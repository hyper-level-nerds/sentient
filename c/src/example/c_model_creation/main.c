#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <string.h>
#include <complex.h>

#include <sentient/preprocessor/cat.h>
#include <sentient/preprocessor/tuple.h>
#include <sentient/preprocessor/seq.h>
#include <sentient/preprocessor/for.h>
#include <sentient/preprocessor/stringize.h>
#include <sentient/preprocessor/detail/is_macro_for.h>
#include <sentient/serialization/serialize.h>
#include <sentient/detail/decl_vec_types.h>
#include <sentient/detail/macro_symbols.h>
#include <sentient/obj_manip.h>
#include <sentient/type_info.h>
#include <sentient/primitive_types.h>
#include <sentient/time.h>
#include <sentient/string.h>
// #include <sentient/primitive_types.h>

#include "example_model.h"

struct example_model
{
    uint8_t fucker;
};

static struct snt_field_info ___snt_fields_info_example_model[] = {
    {
        .field_type_name = "snt_u8",
        .field_name = "fucker",
        .field_offset = __builtin_offsetof(struct example_model, fucker),
    },
};

static struct snt_type_info ___snt_type_info_example_model = {
    .type_name = "example_model",
    .is_struct = true,
    .is_union = false,
    .n_fields = sizeof(___snt_fields_info_example_model) / sizeof(struct snt_field_info),
    .fields = ___snt_fields_info_example_model,
    .type_size = sizeof(struct example_model),
};

static struct snt_type_info ___snt_type_info_example_model1 = {
    .type_name = "example_model1",
    .is_struct = true,
    .is_union = false,
    .n_fields = sizeof(___snt_fields_info_example_model) / sizeof(struct snt_field_info),
    .fields = ___snt_fields_info_example_model,
    .type_size = sizeof(struct example_model),
};

static struct snt_type_info ___snt_type_info_example_model2 = {
    .type_name = "example_model2",
    .is_struct = true,
    .is_union = false,
    .n_fields = sizeof(___snt_fields_info_example_model) / sizeof(struct snt_field_info),
    .fields = ___snt_fields_info_example_model,
    .type_size = sizeof(struct example_model),
};

static struct ___snt_type_info_dict_node ___snt_type_info_dict_example_model = {
    .__identifier = (uintptr_t)"example_model",
    .__info = &___snt_type_info_example_model,
};

SNT_AUTOCALL_INIT_FUNC(snt_init_model_example_model)
{
    ___snt_add_type_info(&___snt_type_info_dict_example_model);
}

#define SNT_PP_IS_MACRO_FOR_prim(x) x
#define SNT_PP_IS_MACRO_FOR_struct(x) x
#define SNT_PP_IS_MACRO_FOR_union(x) x

// ___SNT_DECL_VEC_TYPES(struct, example_model);

// ___SNT_DECL_VEC_TYPES(, int);
// ___SNT_IMPL_VEC_TYPES(, int);

const bool hey = SNT_PP_IS_MACRO_FOR(prim, struct);

const bool heyyy = SNT_PP_IS_MACRO_FOR(native, union);

int main(int argc, char** argv)
{
    const bool is_pointer =
        __builtin_types_compatible_p(int[], int*);

    snt_type_id_t id = (snt_type_id_t)"example_model";

    struct snt_type_info* tinfo =
        snt_get_type_info(id);

    snt_bool b = false;
    snt_char c = 'a';

    return 0;
};