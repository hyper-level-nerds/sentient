#ifndef __SENTIENT_COMPILER_PARSER_BASE_HPP__
#define __SENTIENT_COMPILER_PARSER_BASE_HPP__

#include "./parse_result.hpp"

namespace sentient
{
namespace compiler
{

class parser_base
{
public:
    virtual parse_result parse() = 0;
};

}
}

#endif