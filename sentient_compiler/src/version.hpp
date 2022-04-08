#ifndef __SENTIENT_COMPILER_VERSION_HPP__
#define __SENTIENT_COMPILER_VERSION_HPP__

#ifndef SENTIENT_COMPILER_NAME
#define SENTIENT_COMPILER_NAME "command"
#endif

#ifndef SENTIENT_COMPILER_BUILD_ENV
#define SENTIENT_COMPILER_BUILD_ENV "unknown"
#endif

#ifndef SENTIENT_COMPILER_VERSION
#define SENTIENT_COMPILER_VERSION "unknown"
#endif

#ifndef SENTIENT_COMPILER_LICENSE
#define SENTIENT_COMPILER_LICENSE "unknown"
#endif

#ifndef SENTIENT_COMPILER_AUTHOR
#define SENTIENT_COMPILER_AUTHOR "unknown"
#endif

#ifndef SENTIENT_COMPILER_USAGE
#define SENTIENT_COMPILER_USAGE "unknown"
#endif

#ifndef SENTIENT_COMPILER_BUILT_DATETIME
#define SENTIENT_COMPILER_BUILT_DATETIME __DATE__ " " __TIME__
#endif

namespace sentient
{
namespace compiler
{

constexpr const char* compiler_name = SENTIENT_COMPILER_NAME;
constexpr const char* compiler_version = SENTIENT_COMPILER_VERSION;
constexpr const char* compiler_author = SENTIENT_COMPILER_AUTHOR;
constexpr const char* compiler_build_env = SENTIENT_COMPILER_BUILD_ENV;
constexpr const char* compiler_license = SENTIENT_COMPILER_LICENSE;
constexpr const char* compiler_built_date = SENTIENT_COMPILER_BUILT_DATETIME;
constexpr const char* compiler_usage = SENTIENT_COMPILER_USAGE;

}
}

#endif