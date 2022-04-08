#ifndef __SENTIENT_CLI_COMPILER_FRAMEWORK_HPP__
#define __SENTIENT_CLI_COMPILER_FRAMEWORK_HPP__

#include <string>

#include "./arg_parser.hpp"
#include "./languages.hpp"

namespace sentient
{
namespace compiler
{

class framework
{
public:
    explicit framework(int argc, char** argv);

    int execute();

private:
    void initialize(int argc, char** argv);

    arg_parser argh_;
    languages lang_;
    bool model_or_protocol_;
    bool verbose_;
};

}
}


#endif