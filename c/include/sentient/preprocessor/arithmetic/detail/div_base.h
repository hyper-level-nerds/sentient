//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_ARITHMETIC_DETAIL_DIV_BASE_H
# define SENTIENT_PREPROCESSOR_ARITHMETIC_DETAIL_DIV_BASE_H
#
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/arithmetic/sub.h>
# include <sentient/preprocessor/comparison/less_equal.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_DIV_BASE */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_DIV_BASE(x, y) SNT_PP_WHILE(SNT_PP_DIV_BASE_P, SNT_PP_DIV_BASE_O, (0, x, y))
# else
#    define SNT_PP_DIV_BASE(x, y) SNT_PP_DIV_BASE_I(x, y)
#    define SNT_PP_DIV_BASE_I(x, y) SNT_PP_WHILE(SNT_PP_DIV_BASE_P, SNT_PP_DIV_BASE_O, (0, x, y))
# endif
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_DIV_BASE_P(d, rxy) SNT_PP_DIV_BASE_P_IM(d, SNT_PP_TUPLE_REM_3 rxy)
#    define SNT_PP_DIV_BASE_P_IM(d, im) SNT_PP_DIV_BASE_P_I(d, im)
# else
#    define SNT_PP_DIV_BASE_P(d, rxy) SNT_PP_DIV_BASE_P_I(d, SNT_PP_TUPLE_ELEM(3, 0, rxy), SNT_PP_TUPLE_ELEM(3, 1, rxy), SNT_PP_TUPLE_ELEM(3, 2, rxy))
# endif
#
# define SNT_PP_DIV_BASE_P_I(d, r, x, y) SNT_PP_LESS_EQUAL_D(d, y, x)
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_DIV_BASE_O(d, rxy) SNT_PP_DIV_BASE_O_IM(d, SNT_PP_TUPLE_REM_3 rxy)
#    define SNT_PP_DIV_BASE_O_IM(d, im) SNT_PP_DIV_BASE_O_I(d, im)
# else
#    define SNT_PP_DIV_BASE_O(d, rxy) SNT_PP_DIV_BASE_O_I(d, SNT_PP_TUPLE_ELEM(3, 0, rxy), SNT_PP_TUPLE_ELEM(3, 1, rxy), SNT_PP_TUPLE_ELEM(3, 2, rxy))
# endif
#
# define SNT_PP_DIV_BASE_O_I(d, r, x, y) (SNT_PP_INC(r), SNT_PP_SUB_D(d, x, y), y)
#
# /* SNT_PP_DIV_BASE_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_DIV_BASE_D(d, x, y) SNT_PP_WHILE_ ## d(SNT_PP_DIV_BASE_P, SNT_PP_DIV_BASE_O, (0, x, y))
# else
#    define SNT_PP_DIV_BASE_D(d, x, y) SNT_PP_DIV_BASE_D_I(d, x, y)
#    define SNT_PP_DIV_BASE_D_I(d, x, y) SNT_PP_WHILE_ ## d(SNT_PP_DIV_BASE_P, SNT_PP_DIV_BASE_O, (0, x, y))
# endif
#
# endif
