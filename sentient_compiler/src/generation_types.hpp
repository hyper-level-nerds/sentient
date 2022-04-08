#ifndef __SENTIENT_COMPILER_GENERATION_TYPES_HPP__
#define __SENTIENT_COMPILER_GENERATION_TYPES_HPP__

#include <cstdint>

namespace sentient
{
namespace compiler
{
using generation_type = uint8_t;
namespace generation_types
{
    constexpr generation_type protocol = 1;
    constexpr generation_type model = 2;
}
}
}

#endif