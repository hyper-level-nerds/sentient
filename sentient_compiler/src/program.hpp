#ifndef __SENTIENT_COMPILER_PROGRAM_HPP__
#define __SENTIENT_COMPILER_PROGRAM_HPP__

namespace sntc {

class program
{
    using exit_code_t = int;

public:
    exit_code_t execute(int argc, char** argv);
};

}

#endif