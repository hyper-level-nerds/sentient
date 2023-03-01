//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_ARITHMETIC_MOD_H
# define SENTIENT_PREPROCESSOR_ARITHMETIC_MOD_H
#
# include <sentient/preprocessor/config/config.h>
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# include <sentient/preprocessor/arithmetic/detail/div_base.h>
# include <sentient/preprocessor/tuple/elem.h>
#
# /* SNT_PP_MOD */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_MOD(x, y) SNT_PP_TUPLE_ELEM(3, 1, SNT_PP_DIV_BASE(x, y))
# else
#    define SNT_PP_MOD(x, y) SNT_PP_MOD_I(x, y)
#    define SNT_PP_MOD_I(x, y) SNT_PP_TUPLE_ELEM(3, 1, SNT_PP_DIV_BASE(x, y))
# endif
#
# /* SNT_PP_MOD_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_MOD_D(d, x, y) SNT_PP_TUPLE_ELEM(3, 1, SNT_PP_DIV_BASE_D(d, x, y))
# else
#    define SNT_PP_MOD_D(d, x, y) SNT_PP_MOD_D_I(d, x, y)
#    define SNT_PP_MOD_D_I(d, x, y) SNT_PP_TUPLE_ELEM(3, 1, SNT_PP_DIV_BASE_D(d, x, y))
# endif
#
# else
#
# include <sentient/preprocessor/arithmetic/detail/div_base.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/facilities/identity.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/arithmetic/detail/is_1_number.h>
#
# /* SNT_PP_MOD */
#
#    define SNT_PP_MOD(x, y) SNT_PP_IIF(SNT_PP_DETAIL_IS_1_NUMBER(y),SNT_PP_IDENTITY_N(0,2),SNT_PP_MOD_DO)(x,y)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_MOD_DO(x, y) SNT_PP_TUPLE_ELEM(3, 1, SNT_PP_DIV_BASE(x, y))
# else
#    define SNT_PP_MOD_DO(x, y) SNT_PP_MOD_I(x, y)
#    define SNT_PP_MOD_I(x, y) SNT_PP_TUPLE_ELEM(3, 1, SNT_PP_DIV_BASE(x, y))
# endif
#
# /* SNT_PP_MOD_D */
#
#    define SNT_PP_MOD_D(d, x, y) SNT_PP_IIF(SNT_PP_DETAIL_IS_1_NUMBER(y),SNT_PP_IDENTITY_N(0,3),SNT_PP_MOD_DO_D)(d,x,y)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_MOD_DO_D(d, x, y) SNT_PP_TUPLE_ELEM(3, 1, SNT_PP_DIV_BASE_D(d, x, y))
# else
#    define SNT_PP_MOD_DO_D(d, x, y) SNT_PP_MOD_D_I(d, x, y)
#    define SNT_PP_MOD_D_I(d, x, y) SNT_PP_TUPLE_ELEM(3, 1, SNT_PP_DIV_BASE_D(d, x, y))
# endif
#
# endif
#
# endif
