#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <threads.h>

#include "./example_model.h"

typedef int fucking;

void ahah(void* arg)
{

}



int main(int argc, char** argv)
{
    int shit = 0;
    int a = __builtin_types_compatible_p(int, typeof(shit));
    
    printf("%d\n", a);

    return 0;
};