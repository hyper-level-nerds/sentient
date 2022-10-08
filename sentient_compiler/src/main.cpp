#include "./program.hpp"
#include <ctime>
int main(int argc, char** argv)
{
    std::timespec ts{};
    std::timespec_get(&ts, TIME_UTC);
    

    return sntc::program().execute(argc, argv);
}