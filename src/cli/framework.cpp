#include "./framework.hpp"
#include "./version_output.hpp"

#include <iostream>

#include <boost/program_options/value_semantic.hpp>
namespace popts = boost::program_options;

namespace sentient
{
namespace compiler
{

framework::framework(int argc, char** argv, const std::string& arg_title) :
    argh_(arg_title)
{
    this->initialize(argc, argv);
}

void framework::initialize(int argc, char** argv)
{
    this->argh_.add_options()
        ("help,h", "shows usage")
        ("version,v", "shows the compiler version")
        ("protocol,p", popts::);
    this->argh_.add_positional_option("")
    this->argh_.parse(argc, argv);
}

int framework::execute()
{
    int exit_code = EXIT_SUCCESS;

    if (this->argh_.vars_map().count("help") || !this->argh_.success())
    {
        std::cerr << this->argh_.opts_desc() << std::endl;
        exit_code = EXIT_FAILURE;
        goto exit_section;
    }
    else if (this->argh_.vars_map().count("version"))
    {
        version_output version_out;
        goto exit_section;
    }



exit_section:
    return exit_code;
}

}
}