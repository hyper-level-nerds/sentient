#include "./arg_parser.hpp"

#include <boost/program_options/parsers.hpp>

namespace popts = boost::program_options;

namespace sentient
{
namespace compiler
{

arg_parser::arg_parser(const std::string& opts_title) :
    opts_desc_(opts_title)
{  
}

popts::variables_map& arg_parser::vars_map()
{
    return this->vars_map_;
}

popts::options_description& arg_parser::opts_desc()
{
    return this->opts_desc_;
}

popts::positional_options_description&
    arg_parser::add_positional_option(const char *name, int max_count)
{
    return this->pos_opts_desc_.add(name, max_count);
}

popts::options_description_easy_init arg_parser::add_options()
{
    return this->opts_desc_.add_options();
}

bool arg_parser::success() const
{
    return this->success_;
}


void arg_parser::parse(int argc, char** argv)
{
    popts::store(
        popts::command_line_parser(argc, argv).options(
            this->opts_desc_).positional(this->pos_opts_desc_).run(),
            this->vars_map_);
    popts::notify(this->vars_map_);
    if (vars_map_.size()) this->success_ = true;
}

}
}