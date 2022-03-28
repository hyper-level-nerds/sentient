#ifndef __SENTIENT_COMPILER_VERSION_HPP__
#define __SENTIENT_COMPILER_VERSION_HPP__

#ifndef SENTIENT_COMPILER_BUILD_ENV
#define SENTIENT_COMPILER_BUILD_ENV "unknown"
#endif

#ifndef SENTIENT_COMPILER_VERSION
#define SENTIENT_COMPILER_VERSION "unknown"
#endif

#ifndef SENTIENT_COMPILER_LICENSE
#define SENTIENT_COMPILER_LICENSE "unknown"
#endif

namespace sentient
{
namespace compiler
{

constexpr const char* compiler_version_base =
"sentient compiler\n"
"\n"
"version : "
SENTIENT_COMPILER_VERSION
"\n"
"build   : "
SENTIENT_COMPILER_BUILD_ENV
"\n"
"license : "
SENTIENT_COMPILER_LICENSE
"\n";

constexpr const char* options_output = "see options\n";

}
}

#endif