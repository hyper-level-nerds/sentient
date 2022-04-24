#ifndef __SENTIENT_CORE_PP_UTILS_BASIC_PP_H__
#define __SENTIENT_CORE_PP_UTILS_BASIC_PP_H__


#ifdef __cplusplus
extern "C"
{
#endif 

#define ___sentient_pp_1(_1, ...) _1
#define ___sentient_pp_2(_1, _2, ...) _2
#define ___sentient_pp_3(_1, _2, _3, ...) _3
#define ___sentient_pp_4(_1, _2, _3, _4, ...) _4
#define ___sentient_pp_5(_1, _2, _3, _4, _5 ...) _5
#define ___sentient_pp_6(_1, _2, _3, _4, _5, _6 ...) _6
#define ___sentient_pp_7(_1, _2, _3, _4, _5, _6, _7 ...) _7
#define ___sentient_pp_8(_1, _2, _3, _4, _5, _6, _7, _8 ...) _8
#define ___sentient_pp_9(_1, _2, _3, _4, _5, _6, _7, _8, _9 ...) _9
#define ___sentient_pp_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ...) _10
#define ___sentient_pp_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ...) _11
#define ___sentient_pp_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ...) _12
#define ___sentient_pp_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ...) _13
#define ___sentient_pp_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 ...) _14
#define ___sentient_pp_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 ...) _15
#define ___sentient_pp_16(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16 ...) _16

#define ___sentient_pp_indirect(x) x

#define ___sentient_pp_dummy_va(...) dummy, ##__VA_ARGS__

#define ___sentient_pp_concat(a, b) a ## b



#ifdef __cplusplus
}
#endif

#endif