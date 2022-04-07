#include <sys/time.h>

#include <dlfcn.h>

#include <sentient/core/types.h>

int main(int argc, char** argv)
{
    sentient_scdt32 fucking = { 23, 4, 8, 1, 38, 0 };
    struct timeval tv = { 0, };
    gettimeofday(&tv, NULL);

    void* self = dlopen(NULL, RTLD_LAZY);

    

    dlclose(self);

    return 0;
};