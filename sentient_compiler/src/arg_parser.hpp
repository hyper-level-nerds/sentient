#ifndef __SENTIENT_COMPILER_ARG_PARSER_HPP__
#define __SENTIENT_COMPILER_ARG_PARSER_HPP__

#include <string>

#include <boost/program_options/variables_map.hpp>
#include <boost/program_options/options_description.hpp>
#include <boost/program_options/positional_options.hpp>

namespace sentient
{
namespace compiler
{

class arg_parser
{
public:
    explicit arg_parser(const std::string& opts_title);

    boost::program_options::variables_map& vars_map();
    boost::program_options::options_description& opts_desc();

    boost::program_options::options_description_easy_init add_options();
    boost::program_options::positional_options_description& add_positional_option(const char *name, int max_count);

    bool success() const;

    void parse(int argc, char** argv);

private:

    bool success_;
    std::string error_message_;
    boost::program_options::variables_map vars_map_;
    boost::program_options::options_description opts_desc_;
    boost::program_options::positional_options_description pos_opts_desc_;
};

}
}

#endif