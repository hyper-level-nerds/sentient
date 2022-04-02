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

#include <sentient/core/define_model.hpp>
#include <sentient/core/types.hpp>
#include <sentient/core/datetime.hpp>
#include <sentient/core/string.hpp>
#include <sentient/core/type_traits.hpp>
#include <sentient/core/object_pool.hpp>

#include <boost/lockfree/queue.hpp>
#include <boost/fiber/all.hpp>

#include <boost/static_string.hpp>
namespace snt = sentient;

namespace example
{

#pragma pack(push, 1)
struct static_model :
    sentient::type_traits::static_model_attr,
    sentient::type_traits::dbms_compatible_attr<static_model, 0, 'o', 'i', 'o', 'i', '\0'>
{
    sentient::u64_t key;
    SENTIENT_DEFINE_MODEL(example::static_model,
        (sentient::u64_t, model_no),
        (sentient::str8_t<32>, name),
        (sentient::u16_t, age)
    );
};
#pragma pack(pop)

}

extern "C"
int main(int argc, char** argv)
{
    auto pt = boost::posix_time::microsec_clock::local_time();
    constexpr auto ssss = sizeof(sentient::subcentury_datetime32<21>);

    sentient::scdt32_t<21> dt {
        (pt.date().year()
         - static_cast<int>(decltype(dt)::this_year)),
        static_cast<sentient::u32_t>(pt.date().month()) - 1,
        pt.date().day(),
        static_cast<sentient::u32_t>(pt.time_of_day().hours()),
        static_cast<sentient::u32_t>(pt.time_of_day().minutes()),
        static_cast<sentient::u32_t>(pt.time_of_day().seconds() / 2)
        };

    std::tm tm {
        static_cast<decltype(std::declval<std::tm>().tm_sec)>(dt.seconds) * 2,
        static_cast<decltype(std::declval<std::tm>().tm_min)>(dt.minutes),
        static_cast<decltype(std::declval<std::tm>().tm_hour)>(dt.hours),
        static_cast<decltype(std::declval<std::tm>().tm_mday)>(dt.day),
        static_cast<decltype(std::declval<std::tm>().tm_mon)>(dt.month),
        static_cast<decltype(std::declval<std::tm>().tm_year)>(
            dt.year + decltype(dt)::this_year - 1900)
        };

    auto res = boost::posix_time::to_tm(pt);

    // auto tm = boost::posix_time::to_tm(pt);

    std::cout << "ah\n";
    constexpr auto this_year = decltype(dt)::this_year;
    
    

    return 0;
}
