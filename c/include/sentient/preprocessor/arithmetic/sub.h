//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_ARITHMETIC_SUB_H
# define SENTIENT_PREPROCESSOR_ARITHMETIC_SUB_H
#
# include <sentient/preprocessor/config/config.h>
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/tuple/elem.h>
#
# /* SNT_PP_SUB */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SUB(x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE(SNT_PP_SUB_P, SNT_PP_SUB_O, (x, y)))
# else
#    define SNT_PP_SUB(x, y) SNT_PP_SUB_I(x, y)
#    define SNT_PP_SUB_I(x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE(SNT_PP_SUB_P, SNT_PP_SUB_O, (x, y)))
# endif
#
# define SNT_PP_SUB_P(d, xy) SNT_PP_TUPLE_ELEM(2, 1, xy)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_SUB_O(d, xy) SNT_PP_SUB_O_I xy
# else
#    define SNT_PP_SUB_O(d, xy) SNT_PP_SUB_O_I(SNT_PP_TUPLE_ELEM(2, 0, xy), SNT_PP_TUPLE_ELEM(2, 1, xy))
# endif
#
# define SNT_PP_SUB_O_I(x, y) (SNT_PP_DEC(x), SNT_PP_DEC(y))
#
# /* SNT_PP_SUB_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SUB_D(d, x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE_ ## d(SNT_PP_SUB_P, SNT_PP_SUB_O, (x, y)))
# else
#    define SNT_PP_SUB_D(d, x, y) SNT_PP_SUB_D_I(d, x, y)
#    define SNT_PP_SUB_D_I(d, x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE_ ## d(SNT_PP_SUB_P, SNT_PP_SUB_O, (x, y)))
# endif
#
# else
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/facilities/identity.h>
# include <sentient/preprocessor/logical/and.h>
# include <sentient/preprocessor/logical/bitor.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/arithmetic/detail/is_maximum_number.h>
# include <sentient/preprocessor/arithmetic/detail/is_minimum_number.h>
#
# /* SNT_PP_SUB */
#
#    define SNT_PP_SUB(x, y) SNT_PP_IIF(SNT_PP_BITOR(SNT_PP_DETAIL_IS_MAXIMUM_NUMBER(y),SNT_PP_DETAIL_IS_MINIMUM_NUMBER(x)),SNT_PP_IDENTITY_N(0,2),SNT_PP_SUB_DO)(x,y)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SUB_DO(x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE(SNT_PP_SUB_P, SNT_PP_SUB_O, (x, y)))
# else
#    define SNT_PP_SUB_DO(x, y) SNT_PP_SUB_I(x, y)
#    define SNT_PP_SUB_I(x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE(SNT_PP_SUB_P, SNT_PP_SUB_O, (x, y)))
# endif
#
# define SNT_PP_SUB_P(d, xy) SNT_PP_AND(SNT_PP_TUPLE_ELEM(2, 1, xy),SNT_PP_TUPLE_ELEM(2, 0, xy))
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_SUB_O(d, xy) SNT_PP_SUB_O_I xy
# else
#    define SNT_PP_SUB_O(d, xy) SNT_PP_SUB_O_I(SNT_PP_TUPLE_ELEM(2, 0, xy), SNT_PP_TUPLE_ELEM(2, 1, xy))
# endif
#
# define SNT_PP_SUB_O_I(x, y) (SNT_PP_DEC(x), SNT_PP_DEC(y))
#
# /* SNT_PP_SUB_D */
#
#    define SNT_PP_SUB_D(d, x, y) SNT_PP_IIF(SNT_PP_BITOR(SNT_PP_DETAIL_IS_MAXIMUM_NUMBER(y),SNT_PP_DETAIL_IS_MINIMUM_NUMBER(x)),SNT_PP_IDENTITY_N(0,3),SNT_PP_SUB_DO_D)(d,x,y)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SUB_DO_D(d, x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE_ ## d(SNT_PP_SUB_P, SNT_PP_SUB_O, (x, y)))
# else
#    define SNT_PP_SUB_DO_D(d, x, y) SNT_PP_SUB_D_I(d, x, y)
#    define SNT_PP_SUB_D_I(d, x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE_ ## d(SNT_PP_SUB_P, SNT_PP_SUB_O, (x, y)))
# endif
#
# endif
#
# endif
