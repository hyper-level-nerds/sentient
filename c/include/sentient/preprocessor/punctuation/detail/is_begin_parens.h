//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_PREPROCESSOR_DETAIL_IS_BEGIN_PARENS_H
#define SENTIENT_PREPROCESSOR_DETAIL_IS_BEGIN_PARENS_H

#if SNT_PP_VARIADICS_MSVC

#include <sentient/preprocessor/facilities/empty.h>

#define SNT_PP_DETAIL_VD_IBP_CAT(a, b) SNT_PP_DETAIL_VD_IBP_CAT_I(a, b)
#define SNT_PP_DETAIL_VD_IBP_CAT_I(a, b) SNT_PP_DETAIL_VD_IBP_CAT_II(a ## b)
#define SNT_PP_DETAIL_VD_IBP_CAT_II(res) res

#define SNT_PP_DETAIL_IBP_SPLIT(i, ...) \
    SNT_PP_DETAIL_VD_IBP_CAT(SNT_PP_DETAIL_IBP_PRIMITIVE_CAT(SNT_PP_DETAIL_IBP_SPLIT_,i)(__VA_ARGS__),SNT_PP_EMPTY()) \
/**/

#define SNT_PP_DETAIL_IBP_IS_VARIADIC_C(...) 1 1

#else

#define SNT_PP_DETAIL_IBP_SPLIT(i, ...) \
    SNT_PP_DETAIL_IBP_PRIMITIVE_CAT(SNT_PP_DETAIL_IBP_SPLIT_,i)(__VA_ARGS__) \
/**/

#define SNT_PP_DETAIL_IBP_IS_VARIADIC_C(...) 1

#endif /* SNT_PP_VARIADICS_MSVC */

#define SNT_PP_DETAIL_IBP_SPLIT_0(a, ...) a
#define SNT_PP_DETAIL_IBP_SPLIT_1(a, ...) __VA_ARGS__

#define SNT_PP_DETAIL_IBP_CAT(a, ...) SNT_PP_DETAIL_IBP_PRIMITIVE_CAT(a,__VA_ARGS__)
#define SNT_PP_DETAIL_IBP_PRIMITIVE_CAT(a, ...) a ## __VA_ARGS__

#define SNT_PP_DETAIL_IBP_IS_VARIADIC_R_1 1,
#define SNT_PP_DETAIL_IBP_IS_VARIADIC_R_SNT_PP_DETAIL_IBP_IS_VARIADIC_C 0,

#endif /* SENTIENT_PREPROCESSOR_DETAIL_IS_BEGIN_PARENS_H */
