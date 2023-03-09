//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_ARITHMETIC_ADD_H
# define SENTIENT_PREPROCESSOR_ARITHMETIC_ADD_H
#
# include <sentient/preprocessor/config/config.h>
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/tuple/elem.h>
#
# /* SNT_PP_ADD */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ADD(x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE(SNT_PP_ADD_P, SNT_PP_ADD_O, (x, y)))
# else
#    define SNT_PP_ADD(x, y) SNT_PP_ADD_I(x, y)
#    define SNT_PP_ADD_I(x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE(SNT_PP_ADD_P, SNT_PP_ADD_O, (x, y)))
# endif
#
# define SNT_PP_ADD_P(d, xy) SNT_PP_TUPLE_ELEM(2, 1, xy)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_ADD_O(d, xy) SNT_PP_ADD_O_I xy
# else
#    define SNT_PP_ADD_O(d, xy) SNT_PP_ADD_O_I(SNT_PP_TUPLE_ELEM(2, 0, xy), SNT_PP_TUPLE_ELEM(2, 1, xy))
# endif
#
# define SNT_PP_ADD_O_I(x, y) (SNT_PP_INC(x), SNT_PP_DEC(y))
#
# /* SNT_PP_ADD_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ADD_D(d, x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE_ ## d(SNT_PP_ADD_P, SNT_PP_ADD_O, (x, y)))
# else
#    define SNT_PP_ADD_D(d, x, y) SNT_PP_ADD_D_I(d, x, y)
#    define SNT_PP_ADD_D_I(d, x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE_ ## d(SNT_PP_ADD_P, SNT_PP_ADD_O, (x, y)))
# endif
#
# else
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/facilities/identity.h>
# include <sentient/preprocessor/logical/bitand.h>
# include <sentient/preprocessor/logical/bitor.h>
# include <sentient/preprocessor/logical/bool.h>
# include <sentient/preprocessor/logical/compl.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/arithmetic/detail/is_maximum_number.h>
# include <sentient/preprocessor/arithmetic/detail/is_minimum_number.h>
#
# /* SNT_PP_ADD */
#
#    define SNT_PP_ADD(x, y) SNT_PP_IIF(SNT_PP_BITOR(SNT_PP_DETAIL_IS_MAXIMUM_NUMBER(y),SNT_PP_DETAIL_IS_MINIMUM_NUMBER(x)),SNT_PP_IDENTITY_N(y,2),SNT_PP_ADD_DO)(x,y)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ADD_DO(x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE(SNT_PP_ADD_P, SNT_PP_ADD_O, (x, y)))
# else
#    define SNT_PP_ADD_DO(x, y) SNT_PP_ADD_I(x, y)
#    define SNT_PP_ADD_I(x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE(SNT_PP_ADD_P, SNT_PP_ADD_O, (x, y)))
# endif
#
# define SNT_PP_ADD_P(d, xy) SNT_PP_BITAND(SNT_PP_BOOL(SNT_PP_TUPLE_ELEM(2, 1, xy)),SNT_PP_COMPL(SNT_PP_DETAIL_IS_MAXIMUM_NUMBER(SNT_PP_TUPLE_ELEM(2, 0, xy))))
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_ADD_O(d, xy) SNT_PP_ADD_O_I xy
# else
#    define SNT_PP_ADD_O(d, xy) SNT_PP_ADD_O_I(SNT_PP_TUPLE_ELEM(2, 0, xy), SNT_PP_TUPLE_ELEM(2, 1, xy))
# endif
#
# define SNT_PP_ADD_O_I(x, y) (SNT_PP_INC(x), SNT_PP_DEC(y))
#
# /* SNT_PP_ADD_D */
#
#    define SNT_PP_ADD_D(d, x, y) SNT_PP_IIF(SNT_PP_BITOR(SNT_PP_DETAIL_IS_MAXIMUM_NUMBER(y),SNT_PP_DETAIL_IS_MINIMUM_NUMBER(x)),SNT_PP_IDENTITY_N(y,3),SNT_PP_ADD_DO_D)(d,x,y)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ADD_DO_D(d, x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE_ ## d(SNT_PP_ADD_P, SNT_PP_ADD_O, (x, y)))
# else
#    define SNT_PP_ADD_DO_D(d, x, y) SNT_PP_ADD_D_I(d, x, y)
#    define SNT_PP_ADD_D_I(d, x, y) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE_ ## d(SNT_PP_ADD_P, SNT_PP_ADD_O, (x, y)))
# endif
#
# endif
#
# endif
