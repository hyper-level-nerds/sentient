#include "./filesystem.hpp"

#include <sys/unistd.h>
#include <libgen.h>
#include <dirent.h>

namespace sentient
{
namespace compiler
{

std::filesystem::path compiler_path()
{
    std::filesystem::path result;
#ifdef __linux__
    char tmp[PATH_MAX] = { 0, };

    if (::readlink("/proc/self/exe", tmp, PATH_MAX) < 0)
        throw std::runtime_error("cannot get executable path");
    result = ::dirname(tmp);
#endif
    return result;
}

}
}