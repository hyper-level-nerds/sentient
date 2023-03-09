//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_DETAIL_IS_MACRO_FOR_H
# define SENTIENT_PREPROCESSOR_DETAIL_IS_MACRO_FOR_H

#include <sentient/preprocessor/detail/check.h>
#include <sentient/preprocessor/logical/not.h>
#include <sentient/preprocessor/punctuation/is_begin_parens.h>

# /* SNT_PP_IS_MACRO_FOR */
#define SNT_PP_IS_MACRO_FOR(x, y) \
        SNT_PP_NOT(                   \
            SNT_PP_IS_BEGIN_PARENS(   \
                SNT_PP_IS_MACRO_FOR_ ## x (SNT_PP_IS_MACRO_FOR_ ## y) (()) \
            ) \
        )

# endif
