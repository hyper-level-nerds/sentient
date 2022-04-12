/**
 * @file main.cpp
 * @author Jin (jaehwanspin@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <array>
#include <vector>
#include <string>

#include <boost/pfr.hpp>

#include <sentient/core/define_model.hpp>
#include <sentient/core/types.hpp>
#include <sentient/core/datetime.hpp>
#include <sentient/core/string.hpp>
#include <sentient/core/type_traits.hpp>
#include <sentient/core/object_pool.hpp>

namespace example
{

#pragma pack(push, 1)
struct static_model :
    sentient::type_traits::static_model_attr,
    sentient::type_traits::dbms_compatible_attr<static_model, 0>
{
    SENTIENT_DEFINE_MODEL(example::static_model,
        (sentient::u64_t, model_no),
        (sentient::str8_t<32>, name),
        (sentient::u16_t, age)
    );
};
#pragma pack(pop)

}


int main(int argc, char** argv)
{
    example::static_model m { {}, };

    return 0;
}
