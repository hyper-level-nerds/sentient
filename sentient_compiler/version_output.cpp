#include "./version_output.hpp"
#include "./version.hpp"

#include <iostream>

namespace sentient
{
namespace compiler
{

version_output::version_output()
{
    std::cout << compiler_version_base;
}

}
}