#ifndef __SENTIENT_COMPILER_PARSE_RESULT_HPP__
#define __SENTIENT_COMPILER_PARSE_RESULT_HPP__

#include <string>

namespace sentient
{
namespace compiler
{

struct parse_result
{
    bool        result;
    std::string result_message;
};

}
}

#endif