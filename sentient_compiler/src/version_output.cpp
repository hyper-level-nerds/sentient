#include "./version_output.hpp"
#include "./version.hpp"

#include <iostream>
#include <iomanip>

namespace sentient
{
namespace compiler
{

version_output::version_output(bool verbose)
{
    std::cout << compiler_name;
    if (verbose)
    {
        std::cout
            << "\n\n" 
            << std::setw(18) << std::left << "version" << ": " << compiler_version << "\n"
            << std::setw(18) << std::left << "author" << ": " << compiler_author << "\n"
            << std::setw(18) << std::left << "build environment" << ": " << compiler_build_env << "\n"
            << std::setw(18) << std::left << "license" << ": " << compiler_license << "\n"
            << std::setw(18) << std::left << "built date" << ": " << compiler_built_date << "\n";
    }
    else
    {
        std::cout << "\t" << compiler_version << " " << compiler_build_env << std::endl;
    }
}

}
}