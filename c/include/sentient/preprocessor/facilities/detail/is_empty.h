//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_PREPROCESSOR_DETAIL_IS_EMPTY_H
#define SENTIENT_PREPROCESSOR_DETAIL_IS_EMPTY_H

#include <sentient/preprocessor/punctuation/is_begin_parens.h>

#if SNT_PP_VARIADICS_MSVC

# pragma warning(once:4002)

#define SNT_PP_DETAIL_IS_EMPTY_IIF_0(t, b) b
#define SNT_PP_DETAIL_IS_EMPTY_IIF_1(t, b) t

#else

#define SNT_PP_DETAIL_IS_EMPTY_IIF_0(t, ...) __VA_ARGS__
#define SNT_PP_DETAIL_IS_EMPTY_IIF_1(t, ...) t

#endif

#if SNT_PP_VARIADICS_MSVC && _MSC_VER <= 1400

#define SNT_PP_DETAIL_IS_EMPTY_PROCESS(param) \
    SNT_PP_IS_BEGIN_PARENS \
        ( \
        SNT_PP_DETAIL_IS_EMPTY_NON_FUNCTION_C param () \
        ) \
/**/

#else

#define SNT_PP_DETAIL_IS_EMPTY_PROCESS(...) \
    SNT_PP_IS_BEGIN_PARENS \
        ( \
        SNT_PP_DETAIL_IS_EMPTY_NON_FUNCTION_C __VA_ARGS__ () \
        ) \
/**/

#endif

#define SNT_PP_DETAIL_IS_EMPTY_PRIMITIVE_CAT(a, b) a ## b
#define SNT_PP_DETAIL_IS_EMPTY_IIF(bit) SNT_PP_DETAIL_IS_EMPTY_PRIMITIVE_CAT(SNT_PP_DETAIL_IS_EMPTY_IIF_,bit)
#define SNT_PP_DETAIL_IS_EMPTY_NON_FUNCTION_C(...) ()

#endif /* SENTIENT_PREPROCESSOR_DETAIL_IS_EMPTY_H */
