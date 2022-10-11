#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

struct compact_gregorian_timeinfo {
    uint32_t year : 7;
    uint32_t month : 4;
    uint32_t day : 5;
    uint32_t hours : 5;
    uint32_t minutes : 6;
    uint32_t seconds : 5;
};
typedef struct compact_gregorian_timeinfo cg32;

struct compact_gregorian_timeinfo_ext {
    uint64_t year : 7;
    uint64_t month : 4;
    uint64_t day : 5;
    uint64_t hours : 5;
    uint64_t minutes : 6;
    uint64_t seconds : 6;
    uint64_t nanoseconds : 31
};
typedef struct compact_gregorian_timeinfo_ext cg64;

struct gregorian_timeinfo {
    int64_t year : 38;
    uint64_t month : 4;
    uint64_t day : 5;
    uint64_t hours : 5;
    uint64_t minutes : 6;
    uint64_t seconds : 6;
};
typedef struct gregorian_timeinfo g64;

struct gregorian_timeinfo_ext {
    int64_t year : 38;
    uint64_t month : 4;
    uint64_t day : 5;
    uint64_t hours : 5;
    uint64_t minutes : 6;
    uint64_t seconds : 6;
    uint64_t nanoseconds;
};
typedef struct gregorian_timeinfo_ext g128;


int main(int argc, char** argv)
{
    sizeof(cg64);

    return 0;
};