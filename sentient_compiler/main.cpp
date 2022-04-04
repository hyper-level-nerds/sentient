#include "./framework.hpp"
#include "./version.hpp"

int main(int argc, char** argv)
{
    return sentient::compiler::framework(argc, argv).execute();
}