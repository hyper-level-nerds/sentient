#include <sentient/serialization/serialize.h>

SNT_API snt_i32 SNT_SOFTMANGLE(snt_impl_serialize)(
    struct snt_type_info* type_info,
    void* model,
    snt_u8* buffer,
    size_t buffer_size) {
    snt_i32 result = 0;

    for (size_t field_cnt = 0; field_cnt < type_info->n_fields; ++field_cnt) {

    }

    return result;
}