//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_SIZE_H
# define SENTIENT_PREPROCESSOR_LIST_SIZE_H
#
# include <sentient/preprocessor/config/config.h>
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/list/adt.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_LIST_SIZE */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_SIZE(list) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE(SNT_PP_LIST_SIZE_P, SNT_PP_LIST_SIZE_O, (0, list)))
# else
#    define SNT_PP_LIST_SIZE(list) SNT_PP_LIST_SIZE_I(list)
#    define SNT_PP_LIST_SIZE_I(list) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE(SNT_PP_LIST_SIZE_P, SNT_PP_LIST_SIZE_O, (0, list)))
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_SIZE_P(d, rl) SNT_PP_LIST_IS_CONS(SNT_PP_TUPLE_ELEM(2, 1, rl))
# else
#    define SNT_PP_LIST_SIZE_P(d, rl) SNT_PP_LIST_SIZE_P_I(SNT_PP_TUPLE_REM_2 rl)
#    define SNT_PP_LIST_SIZE_P_I(im) SNT_PP_LIST_SIZE_P_II(im)
#    define SNT_PP_LIST_SIZE_P_II(r, l) SNT_PP_LIST_IS_CONS(l)
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_SIZE_O(d, rl) (SNT_PP_INC(SNT_PP_TUPLE_ELEM(2, 0, rl)), SNT_PP_LIST_REST(SNT_PP_TUPLE_ELEM(2, 1, rl)))
# else
#    define SNT_PP_LIST_SIZE_O(d, rl) SNT_PP_LIST_SIZE_O_I(SNT_PP_TUPLE_REM_2 rl)
#    define SNT_PP_LIST_SIZE_O_I(im) SNT_PP_LIST_SIZE_O_II(im)
#    define SNT_PP_LIST_SIZE_O_II(r, l) (SNT_PP_INC(r), SNT_PP_LIST_REST(l))
# endif
#
# /* SNT_PP_LIST_SIZE_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_SIZE_D(d, list) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE_ ## d(SNT_PP_LIST_SIZE_P, SNT_PP_LIST_SIZE_O, (0, list)))
# else
#    define SNT_PP_LIST_SIZE_D(d, list) SNT_PP_LIST_SIZE_D_I(d, list)
#    define SNT_PP_LIST_SIZE_D_I(d, list) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE_ ## d(SNT_PP_LIST_SIZE_P, SNT_PP_LIST_SIZE_O, (0, list)))
# endif
#
# else
#
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/facilities/identity.h>
# include <sentient/preprocessor/list/adt.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_LIST_SIZE */
#
#    define SNT_PP_LIST_SIZE(list) SNT_PP_IIF(SNT_PP_LIST_IS_CONS(list),SNT_PP_LIST_SIZE_S,SNT_PP_IDENTITY_N(0,1))(list)
#    define SNT_PP_LIST_SIZE_S(list) SNT_PP_LIST_SIZE_DO(SNT_PP_LIST_REST(list))
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_SIZE_DO(list) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE(SNT_PP_LIST_SIZE_P, SNT_PP_LIST_SIZE_O, (1, list)))
# else
#    define SNT_PP_LIST_SIZE_DO(list) SNT_PP_LIST_SIZE_I(list)
#    define SNT_PP_LIST_SIZE_I(list) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE(SNT_PP_LIST_SIZE_P, SNT_PP_LIST_SIZE_O, (1, list)))
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_SIZE_P(d, rl) SNT_PP_LIST_IS_CONS(SNT_PP_TUPLE_ELEM(2, 1, rl))
# else
#    define SNT_PP_LIST_SIZE_P(d, rl) SNT_PP_LIST_SIZE_P_I(SNT_PP_TUPLE_REM_2 rl)
#    define SNT_PP_LIST_SIZE_P_I(im) SNT_PP_LIST_SIZE_P_II(im)
#    define SNT_PP_LIST_SIZE_P_II(r, l) SNT_PP_LIST_IS_CONS(l)
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_SIZE_O(d, rl) (SNT_PP_INC(SNT_PP_TUPLE_ELEM(2, 0, rl)), SNT_PP_LIST_REST(SNT_PP_TUPLE_ELEM(2, 1, rl)))
# else
#    define SNT_PP_LIST_SIZE_O(d, rl) SNT_PP_LIST_SIZE_O_I(SNT_PP_TUPLE_REM_2 rl)
#    define SNT_PP_LIST_SIZE_O_I(im) SNT_PP_LIST_SIZE_O_II(im)
#    define SNT_PP_LIST_SIZE_O_II(r, l) (SNT_PP_INC(r), SNT_PP_LIST_REST(l))
# endif
#
# /* SNT_PP_LIST_SIZE_D */
#
#    define SNT_PP_LIST_SIZE_D(d, list) SNT_PP_IIF(SNT_PP_LIST_IS_CONS(list),SNT_PP_LIST_SIZE_S_D,SNT_PP_IDENTITY_N(0,2))(d,list)
#    define SNT_PP_LIST_SIZE_S_D(d,list) SNT_PP_LIST_SIZE_DO_D(d,SNT_PP_LIST_REST(list))
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_SIZE_DO_D(d, list) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE_ ## d(SNT_PP_LIST_SIZE_P, SNT_PP_LIST_SIZE_O, (1, list)))
# else
#    define SNT_PP_LIST_SIZE_DO_D(d, list) SNT_PP_LIST_SIZE_D_I(d, list)
#    define SNT_PP_LIST_SIZE_D_I(d, list) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE_ ## d(SNT_PP_LIST_SIZE_P, SNT_PP_LIST_SIZE_O, (1, list)))
# endif
#
# endif
#
# endif
