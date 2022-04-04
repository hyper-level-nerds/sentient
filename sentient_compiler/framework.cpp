#include "./version.hpp"
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

framework::framework(int argc, char** argv) :
    argh_(SENTIENT_COMPILER_USAGE)
{
    this->initialize(argc, argv);
}

void framework::initialize(int argc, char** argv)
{
    this->argh_.add_options()
        ("help,h", "shows usage")
        ("version,v", "shows the sentient compiler version")
        ("type,t", popts::value<std::string>()->default_value("model"), "a type to compile [ p [ protocol ] | m [ model ] ]")
        ("verbose,b", "verbose mode")
        // ("model-prefix,a", popts::value<std::string>(), "model class name prefix (optional)")
        // ("programming-language,l", popts::value<std::string>(),
        //     "language to compile [ c | c++ | csharp | rust | sql-ddl ]")
        // ("package-name,n", popts::value<std::string>(), "package name for Java/Kotlin language (ex. -n \"org.sentient.{namespace name in model file}\")")
        // ("coding-convention,c", popts::value<std::string>()->default_value("standard"),
        //     "coding convention to generate [ standard | snake | camel | pascal ]")
        // ("out-dir,o", popts::value<std::string>(), "generated output file directory")    
    ;

    this->argh_.add_positional_option("file_name", 1);

    this->argh_.parse(argc, argv);
}

int framework::execute()
{
    int exit_code = EXIT_SUCCESS;

    if (this->argh_.vars_map().count("verbose"))
        this->verbose_ = true;

    if (this->argh_.vars_map().count("help"))
    {
        std::cout << this->argh_.opts_desc() << std::endl;
        exit_code = EXIT_SUCCESS;
        goto exit_section;
    }
    else if (this->argh_.vars_map().count("version"))
    {
        version_output version_out(this->verbose_);
        exit_code = EXIT_SUCCESS;
        goto exit_section;
    }
    // else if (this->argh_.vars_map().count("type"))
    // {
    //     auto type_to_generate = this->argh_.vars_map()["type"].as<std::string>();
    //     std::cout << type_to_generate << std::endl;
    //     if (type_to_generate != "protocol" && type_to_generate != "p" &&
    //         type_to_generate != "model" && type_to_generate != "m")
    //     {
    //         std::cerr << "[error] "
    //                 << "unknown --type arg parameter : "
    //                 << type_to_generate
    //                 << std::endl
    //                 << "\t[ p [ protocol ] | m [ model ] ] expected"
    //                 << std::endl << std::endl;
    //         exit_code = EXIT_FAILURE;
    //         goto exit_section;
    //     }
    //     else
    //     {
    //         std::cerr << "[error] "
    //                 << "\"--type=[ m | p ] \" required"
    //                 << std::endl << std::endl;
    //         exit_code = EXIT_FAILURE;
    //         goto exit_section;
    //     }

    //     std::cout << "oioi!!!!!!\n\n";
    //     for (auto& m : this->argh_.vars_map())
    //     {
    //         std::cout << std::get<0>(m) << std::endl;
    //     }
    // }
    // else
    // {
    //     std::cerr << this->argh_.opts_desc() << std::endl;
    //     exit_code = EXIT_FAILURE;
    //     goto exit_section;
    // }

    if (!this->argh_.vars_map().count("file_name"))
    {
        std::cerr << "no file names given" << std::endl
                  << this->argh_.opts_desc() << std::endl;
        exit_code = EXIT_FAILURE;
        goto exit_section;
    }

exit_section:
    return exit_code;
}

}
}