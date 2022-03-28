#include "./framework.hpp"
#include "./version.hpp"

#include <cstring>

#include <type_traits>

int main(int argc, char** argv)
{
    char sentient_compiler_title[512] = { 0, };

    std::sprintf(sentient_compiler_title, "%s\n%s",
        sentient::compiler::compiler_version_base,
        sentient::compiler::options_output);
    

    return sentient::compiler::framework(argc, argv, sentient_compiler_title).execute();
}