#include <iostream>
#include <array>
#include <sentient/core/types.hpp>
#include <sentient/core/type_traits.hpp>
#include <sentient/core/object_pool.hpp>

#include <boost/hana/define_struct.hpp>

namespace snt = sentient;

#pragma pack(push, 1)
struct example_static_model :
    sentient::type_traits::static_model_attr,
    sentient::type_traits::dbms_compatible_attr<example_static_model, 'o', 'i', 'o', 'i', '\0'>
{
    BOOST_HANA_DEFINE_STRUCT(example_static_model,
        (sentient::u64_t, model_no),
        (sentient::str8_t<32>, name),
        (sentient::u16_t, age)
    );
};
#pragma pack(pop)

#include <vector>

int main(int argc, char** argv)
{
    sentient::object_pool<example_static_model> pool(4096);

    auto a = pool.get_object();

    return 0;
}
