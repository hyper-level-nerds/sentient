#include <type_traits>
#include <vector>
#include <list>
#include <memory>
#include <complex>
#include <iostream>
#include <map>
#include <optional>
#include <atomic>

#include <boost/signals2.hpp>
#include <boost/asio/ts/executor.hpp>
#include <boost/asio/ts/io_context.hpp>
#include <boost/asio/thread_pool.hpp>
#include <boost/hana/define_struct.hpp>
#include <boost/lockfree/queue.hpp>
#include <boost/contract.hpp>

#include <sentient/concepts/primitive.hpp>
#include <sentient/concepts/atomic.hpp>
#include <sentient/detail/make_getter.hpp>
// #include <sentient/detail/make_setter.hpp>
#include <sentient/reflection/define_model.hpp>
// #include <sentient/reflection/default_model_base.hpp>
// #include <sentient/reflection/detail/define_encapsulated_model.hpp>
#include <sentient/detail/comptime_string_literal.hpp>
#include <sentient/primitive_types.hpp>
#include <sentient/container/string.hpp>

int main(int argc, char** argv)
{
    snt::string<snt::u16> str;

    
    
    return 0;
}
