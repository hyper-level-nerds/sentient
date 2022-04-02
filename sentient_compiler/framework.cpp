#include "./framework.hpp"
#include "./version_output.hpp"

#include <iostream>
#include <filesystem>

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
        ("version,v", "shows the sentient compiler version")
        ("type,t", popts::value<std::string>(), "a type to compile [ p [ protocol ] | m [ model ] ]")
        ("model-prefix,a", popts::value<std::string>(), "model class prefix (optional)")
        ("language,l", popts::value<std::string>(),
            "language to compile [ c | c++ | csharp | java | kotlin | python | sql-ddl ]")
        ("package-name,n", popts::value<std::string>(), "package name for Java language (ex. -n \"org.hyperlevelnerds\")")
        ("coding-convention,c", popts::value<std::string>(),
            "coding convention to generate [ snake | camel | pascal ]")
        ("out-dir,o", popts::value<std::string>(), "generated output file directory");

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

    if (this->argh_.vars_map().count("type"))
    {
        auto type_to_generate = this->argh_.vars_map()["type"].as<std::string>();
        if (type_to_generate != "protocol" && type_to_generate != "p" &&
            type_to_generate != "model" && type_to_generate != "m")
        {
            std::cerr << "[error] "
                      << "\"unknown --type arg \" parameter : "
                      << type_to_generate
                      << std::endl << std::endl;
            exit_code = EXIT_FAILURE;
            goto exit_section;
        }
    }
    else
    {
        std::cerr << "[error] "
                  << "\"--type arg \" required"
                  << std::endl << std::endl;
        exit_code = EXIT_FAILURE;
        goto exit_section;
    }




exit_section:
    return exit_code;
}

}
}