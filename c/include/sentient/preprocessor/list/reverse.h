//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_REVERSE_H
# define SENTIENT_PREPROCESSOR_LIST_REVERSE_H
#
# include <sentient/preprocessor/config/config.h>
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# include <sentient/preprocessor/list/fold_left.h>
#
# /* SNT_PP_LIST_REVERSE */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_REVERSE(list) SNT_PP_LIST_FOLD_LEFT(SNT_PP_LIST_REVERSE_O, SNT_PP_NIL, list)
# else
#    define SNT_PP_LIST_REVERSE(list) SNT_PP_LIST_REVERSE_I(list)
#    define SNT_PP_LIST_REVERSE_I(list) SNT_PP_LIST_FOLD_LEFT(SNT_PP_LIST_REVERSE_O, SNT_PP_NIL, list)
# endif
#
# define SNT_PP_LIST_REVERSE_O(d, s, x) (x, s)
#
# /* SNT_PP_LIST_REVERSE_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_REVERSE_D(d, list) SNT_PP_LIST_FOLD_LEFT_ ## d(SNT_PP_LIST_REVERSE_O, SNT_PP_NIL, list)
# else
#    define SNT_PP_LIST_REVERSE_D(d, list) SNT_PP_LIST_REVERSE_D_I(d, list)
#    define SNT_PP_LIST_REVERSE_D_I(d, list) SNT_PP_LIST_FOLD_LEFT_ ## d(SNT_PP_LIST_REVERSE_O, SNT_PP_NIL, list)
# endif
#
# else
#
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/facilities/identity.h>
# include <sentient/preprocessor/list/adt.h>
# include <sentient/preprocessor/list/fold_left.h>
#
# /* SNT_PP_LIST_REVERSE */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_REVERSE(list) SNT_PP_IIF(SNT_PP_LIST_IS_CONS(list),SNT_PP_LIST_REVERSE_CONS,SNT_PP_IDENTITY_N(SNT_PP_NIL,1))(list)
# else
#    define SNT_PP_LIST_REVERSE(list) SNT_PP_LIST_REVERSE_I(list)
#    define SNT_PP_LIST_REVERSE_I(list) SNT_PP_IIF(SNT_PP_LIST_IS_CONS(list),SNT_PP_LIST_REVERSE_CONS,SNT_PP_IDENTITY_N(SNT_PP_NIL,1))(list)
# endif
#
# define SNT_PP_LIST_REVERSE_O(d, s, x) (x, s)
#
# /* SNT_PP_LIST_REVERSE_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_REVERSE_D(d, list) SNT_PP_IIF(SNT_PP_LIST_IS_CONS(list),SNT_PP_LIST_REVERSE_CONS_D,SNT_PP_IDENTITY_N(SNT_PP_NIL,2))(d,list)
# else
#    define SNT_PP_LIST_REVERSE_D(d, list) SNT_PP_LIST_REVERSE_D_I(d, list)
#    define SNT_PP_LIST_REVERSE_D_I(d, list) SNT_PP_IIF(SNT_PP_LIST_IS_CONS(list),SNT_PP_LIST_REVERSE_CONS_D,SNT_PP_IDENTITY_N(SNT_PP_NIL,2))(d,list)
# endif
#
# define SNT_PP_LIST_REVERSE_CONS(list) SNT_PP_LIST_FOLD_LEFT(SNT_PP_LIST_REVERSE_O, (SNT_PP_LIST_FIRST(list),SNT_PP_NIL), SNT_PP_LIST_REST(list))
# define SNT_PP_LIST_REVERSE_CONS_D(d, list) SNT_PP_LIST_FOLD_LEFT_ ## d(SNT_PP_LIST_REVERSE_O, (SNT_PP_LIST_FIRST(list),SNT_PP_NIL), SNT_PP_LIST_REST(list))
#
# endif
#
# endif
