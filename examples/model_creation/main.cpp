#include <iostream>
#include <array>
#include <vector>

#include <sentient/core/types.hpp>
#include <sentient/core/type_traits.hpp>
#include <sentient/core/object_pool.hpp>
#include <boost/lockfree/queue.hpp>
#include <boost/hana/define_struct.hpp>

#include <boost/static_string.hpp>

namespace snt = sentient;

namespace example
{

#pragma pack(push, 1)
struct static_model :
    sentient::type_traits::static_model_attr,
    sentient::type_traits::dbms_compatible_attr<static_model, 'o', 'i', 'o', 'i', '\0'>
{
    sentient::u64_t key;
    BOOST_HANA_DEFINE_STRUCT(example::static_model,
        (sentient::u64_t, model_no),
        (sentient::str8_t<32>, name),
        (sentient::u16_t, age)
    );
};
#pragma pack(pop)

}

int main(int argc, char** argv)
{
    // sentient::object_pool<example::static_model> pool(4096);

    // std::shared_ptr<example::static_model> a = pool.get_object();

    // std::shared_ptr<int> asdfasdf;
    // std::default_delete<int> del;

    boost::lockfree::queue<int> pool_(4096);
    pool_.push(1);
    pool_.push(1);
    pool_.push(1);
    
    decltype(pool_)::value_type val = 0;
    pool_.pop(val);

    std::cout << val << std::endl;
    
    auto aa = u8'a';

    // std::u8string str = u8"asdf";
    // std::array<char, 128> str;
    boost::static_string<128> str;

    constexpr auto ssize = sizeof(str);

    std::strcpy(str.data(), reinterpret_cast<const char*>(u8"안녕하세요😃"));

    std::cout << str.data() << ssize << " " << str.size() << std::endl;

    // constexpr const char* obj_name =
        

    return 0;
}
