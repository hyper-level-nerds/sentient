//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_ARITHMETIC_MUL_H
# define SENTIENT_PREPROCESSOR_ARITHMETIC_MUL_H
#
# include <sentient/preprocessor/config/config.h>
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# include <sentient/preprocessor/arithmetic/add.h>
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_MUL */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_MUL(x, y) SNT_PP_TUPLE_ELEM(3, 0, SNT_PP_WHILE(SNT_PP_MUL_P, SNT_PP_MUL_O, (0, x, y)))
# else
#    define SNT_PP_MUL(x, y) SNT_PP_MUL_I(x, y)
#    define SNT_PP_MUL_I(x, y) SNT_PP_TUPLE_ELEM(3, 0, SNT_PP_WHILE(SNT_PP_MUL_P, SNT_PP_MUL_O, (0, x, y)))
# endif
#
# define SNT_PP_MUL_P(d, rxy) SNT_PP_TUPLE_ELEM(3, 2, rxy)
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_MUL_O(d, rxy) SNT_PP_MUL_O_IM(d, SNT_PP_TUPLE_REM_3 rxy)
#    define SNT_PP_MUL_O_IM(d, im) SNT_PP_MUL_O_I(d, im)
# else
#    define SNT_PP_MUL_O(d, rxy) SNT_PP_MUL_O_I(d, SNT_PP_TUPLE_ELEM(3, 0, rxy), SNT_PP_TUPLE_ELEM(3, 1, rxy), SNT_PP_TUPLE_ELEM(3, 2, rxy))
# endif
#
# define SNT_PP_MUL_O_I(d, r, x, y) (SNT_PP_ADD_D(d, r, x), x, SNT_PP_DEC(y))
#
# /* SNT_PP_MUL_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_MUL_D(d, x, y) SNT_PP_TUPLE_ELEM(3, 0, SNT_PP_WHILE_ ## d(SNT_PP_MUL_P, SNT_PP_MUL_O, (0, x, y)))
# else
#    define SNT_PP_MUL_D(d, x, y) SNT_PP_MUL_D_I(d, x, y)
#    define SNT_PP_MUL_D_I(d, x, y) SNT_PP_TUPLE_ELEM(3, 0, SNT_PP_WHILE_ ## d(SNT_PP_MUL_P, SNT_PP_MUL_O, (0, x, y)))
# endif
#
# else
#
# include <sentient/preprocessor/arithmetic/add.h>
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/facilities/identity.h>
# include <sentient/preprocessor/logical/bitand.h>
# include <sentient/preprocessor/logical/bool.h>
# include <sentient/preprocessor/logical/compl.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
# include <sentient/preprocessor/arithmetic/detail/is_minimum_number.h>
# include <sentient/preprocessor/arithmetic/detail/is_maximum_number.h>
# include <sentient/preprocessor/arithmetic/detail/is_1_number.h>
#
# /* SNT_PP_MUL */
#
#    define SNT_PP_MUL(x, y) SNT_PP_IIF(SNT_PP_DETAIL_IS_MINIMUM_NUMBER(x),SNT_PP_IDENTITY_N(x,2),SNT_PP_MUL_CHECK_1X)(x,y)
#
#    define SNT_PP_MUL_CHECK_1X(x, y) SNT_PP_IIF(SNT_PP_DETAIL_IS_1_NUMBER(x),SNT_PP_IDENTITY_N(y,2),SNT_PP_MUL_DO)(x,y)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_MUL_DO(x, y) SNT_PP_TUPLE_ELEM(3, 0, SNT_PP_WHILE(SNT_PP_MUL_P, SNT_PP_MUL_O, (0, x, y)))
# else
#    define SNT_PP_MUL_DO(x, y) SNT_PP_MUL_I(x, y)
#    define SNT_PP_MUL_I(x, y) SNT_PP_TUPLE_ELEM(3, 0, SNT_PP_WHILE(SNT_PP_MUL_P, SNT_PP_MUL_O, (0, x, y)))
# endif
#
# define SNT_PP_MUL_P(d, rxy) SNT_PP_BITAND(SNT_PP_BOOL(SNT_PP_TUPLE_ELEM(3, 2, rxy)),SNT_PP_COMPL(SNT_PP_DETAIL_IS_MAXIMUM_NUMBER(SNT_PP_TUPLE_ELEM(3, 0, rxy))))
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_MUL_O(d, rxy) SNT_PP_MUL_O_IM(d, SNT_PP_TUPLE_REM_3 rxy)
#    define SNT_PP_MUL_O_IM(d, im) SNT_PP_MUL_O_I(d, im)
# else
#    define SNT_PP_MUL_O(d, rxy) SNT_PP_MUL_O_I(d, SNT_PP_TUPLE_ELEM(3, 0, rxy), SNT_PP_TUPLE_ELEM(3, 1, rxy), SNT_PP_TUPLE_ELEM(3, 2, rxy))
# endif
#
# define SNT_PP_MUL_O_I(d, r, x, y) (SNT_PP_ADD_D(d, r, x), x, SNT_PP_DEC(y))
#
# /* SNT_PP_MUL_D */
#
#    define SNT_PP_MUL_D(d, x, y) SNT_PP_IIF(SNT_PP_DETAIL_IS_MINIMUM_NUMBER(x),SNT_PP_IDENTITY_N(x,3),SNT_PP_MUL_CHECK_1X_D)(d,x,y)
#
#    define SNT_PP_MUL_CHECK_1X_D(d, x, y) SNT_PP_IIF(SNT_PP_DETAIL_IS_1_NUMBER(x),SNT_PP_IDENTITY_N(y,3),SNT_PP_MUL_DO_D)(d,x,y)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_MUL_DO_D(d, x, y) SNT_PP_TUPLE_ELEM(3, 0, SNT_PP_WHILE_ ## d(SNT_PP_MUL_P, SNT_PP_MUL_O, (0, x, y)))
# else
#    define SNT_PP_MUL_DO_D(d, x, y) SNT_PP_MUL_D_I(d, x, y)
#    define SNT_PP_MUL_D_I(d, x, y) SNT_PP_TUPLE_ELEM(3, 0, SNT_PP_WHILE_ ## d(SNT_PP_MUL_P, SNT_PP_MUL_O, (0, x, y)))
# endif
#
# endif
#
# endif
