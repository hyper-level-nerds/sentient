#ifndef __SENTIENT_COMPILER_FILESYSTEM_HPP__
#define __SENTIENT_COMPILER_FILESYSTEM_HPP__

#include <filesystem>

namespace sentient
{
namespace compiler
{

class filesystem
{
public:
    filesystem(const std::string&);
private:
    std::filesystem::path definition_file_path_;
};

}
}

#endif