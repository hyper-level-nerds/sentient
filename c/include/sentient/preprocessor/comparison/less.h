//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_COMPARISON_LESS_H
# define SENTIENT_PREPROCESSOR_COMPARISON_LESS_H
#
# include <sentient/preprocessor/comparison/less_equal.h>
# include <sentient/preprocessor/comparison/not_equal.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/logical/bitand.h>
# include <sentient/preprocessor/tuple/eat.h>
#
# /* SNT_PP_LESS */
#
# if SNT_PP_CONFIG_FLAGS() & (SNT_PP_CONFIG_MWCC() | SNT_PP_CONFIG_DMC())
#    define SNT_PP_LESS(x, y) SNT_PP_BITAND(SNT_PP_NOT_EQUAL(x, y), SNT_PP_LESS_EQUAL(x, y))
# elif ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LESS(x, y) SNT_PP_IIF(SNT_PP_NOT_EQUAL(x, y), SNT_PP_LESS_EQUAL, 0 SNT_PP_TUPLE_EAT_2)(x, y)
# else
#    define SNT_PP_LESS(x, y) SNT_PP_LESS_I(x, y)
#    define SNT_PP_LESS_I(x, y) SNT_PP_IIF(SNT_PP_NOT_EQUAL(x, y), SNT_PP_LESS_EQUAL, 0 SNT_PP_TUPLE_EAT_2)(x, y)
# endif
#
# /* SNT_PP_LESS_D */
#
# if SNT_PP_CONFIG_FLAGS() & (SNT_PP_CONFIG_MWCC() | SNT_PP_CONFIG_DMC())
#    define SNT_PP_LESS_D(d, x, y) SNT_PP_BITAND(SNT_PP_NOT_EQUAL(x, y), SNT_PP_LESS_EQUAL_D(d, x, y))
# elif ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LESS_D(d, x, y) SNT_PP_IIF(SNT_PP_NOT_EQUAL(x, y), SNT_PP_LESS_EQUAL_D, 0 SNT_PP_TUPLE_EAT_3)(d, x, y)
# else
#    define SNT_PP_LESS_D(d, x, y) SNT_PP_LESS_D_I(d, x, y)
#    define SNT_PP_LESS_D_I(d, x, y) SNT_PP_IIF(SNT_PP_NOT_EQUAL(x, y), SNT_PP_LESS_EQUAL_D, 0 SNT_PP_TUPLE_EAT_3)(d, x, y)
# endif
#
# endif
