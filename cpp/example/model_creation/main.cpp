#include <iostream>
#include <chrono>
#include <map>
#include <unordered_map>
#include <variant>

#include <sentient/container/vector.hpp>

int main(int argc, char** argv)
{
    std::string f1 = "hey";
    std::string f2(f1, 1);

    snt::vector<int32_t, uint8_t> vec = { 1, 2, 3 };

    for (size_t i = 0; i < std::numeric_limits<uint8_t>::max(); i++)
        vec.emplace_back(1);

    return 0;
}
