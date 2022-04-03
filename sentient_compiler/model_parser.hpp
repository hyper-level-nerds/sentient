#ifndef __SENTIENT_COMPILER_MODEL_PARSER_HPP__
#define __SENTIENT_COMPILER_MODEL_PARSER_HPP__

#include "./parser_base.hpp"

#include <filesystem>

#include <boost/property_tree/ptree.hpp>

namespace sentient
{
namespace compiler
{

class model_parser : public parser_base
{

public:
    model_parser(const std::filesystem::path& model_path);

    virtual parse_result parse() override;

private:

    boost::property_tree::ptree ptree_;
};

}
}

#endif