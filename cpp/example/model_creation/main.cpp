#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <list>
#include <algorithm>
#include <map>
#include <execution>
#include <unordered_map>
#include <variant>

#include <sentient/primitive_types.hpp>
#include <sentient/container/vector.hpp>
#include <sentient/container/string_fwd.hpp>
#include <sentient/detail/comptime_string_literal.hpp>

#include <boost/lexical_cast.hpp>

#include <boost/asio/io_context.hpp>
#include <boost/asio/local/stream_protocol.hpp>

int main(int argc, char** argv)
{
	boost::asio::io_context io_ctx(
			static_cast<int>(std::thread::hardware_concurrency()));
	snt::string<snt::u8> str = "hey";
	str += " you";

	std::cout << str << std::endl;

    return 0;
}
