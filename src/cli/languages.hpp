#ifndef __SENTIENT_COMPILER_LANGUAGES_HPP__
#define __SENTIENT_COMPILER_LANGUAGES_HPP__

#include <cstdint>

namespace sentient
{
namespace compiler
{

enum class languages : uint8_t
{
    c,
    cplusplus,
    csharp,
    python,
    java,
    kotlin,
};

}
}

#endif