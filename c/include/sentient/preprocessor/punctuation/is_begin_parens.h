//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_IS_BEGIN_PARENS_H
# define SENTIENT_PREPROCESSOR_IS_BEGIN_PARENS_H

#include <sentient/preprocessor/config/config.h>
#include <sentient/preprocessor/punctuation/detail/is_begin_parens.h>

#if SNT_PP_VARIADICS_MSVC && _MSC_VER <= 1400

#define SNT_PP_IS_BEGIN_PARENS(param) \
    SNT_PP_DETAIL_IBP_SPLIT \
      ( \
      0, \
      SNT_PP_DETAIL_IBP_CAT \
        ( \
        SNT_PP_DETAIL_IBP_IS_VARIADIC_R_, \
        SNT_PP_DETAIL_IBP_IS_VARIADIC_C param \
        ) \
      ) \
/**/

#else

#define SNT_PP_IS_BEGIN_PARENS(...) \
    SNT_PP_DETAIL_IBP_SPLIT \
      ( \
      0, \
      SNT_PP_DETAIL_IBP_CAT \
        ( \
        SNT_PP_DETAIL_IBP_IS_VARIADIC_R_, \
        SNT_PP_DETAIL_IBP_IS_VARIADIC_C __VA_ARGS__ \
        ) \
      ) \
/**/

#endif /* SNT_PP_VARIADICS_MSVC && _MSC_VER <= 1400 */
#endif /* SENTIENT_PREPROCESSOR_IS_BEGIN_PARENS_H */
