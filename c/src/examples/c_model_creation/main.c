#include <stdbool.h>
#include <stdio.h>

#include <sentient/core_c/types.h>
#include <sentient/core_c/reflection.h>

int main(int argc, char** argv)
{
    const snt_str8_32_t name = u8"👀";
    const snt_str8_64_t fucking = u8"아";

    printf("oioi!! %s %s\n", name, fucking);
    return 0;
}