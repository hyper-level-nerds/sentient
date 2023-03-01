//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_FIRST_N_H
# define SENTIENT_PREPROCESSOR_LIST_FIRST_N_H
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/list/adt.h>
# include <sentient/preprocessor/list/reverse.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_LIST_FIRST_N */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_FIRST_N(count, list) SNT_PP_LIST_REVERSE(SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_WHILE(SNT_PP_LIST_FIRST_N_P, SNT_PP_LIST_FIRST_N_O, (count, list, SNT_PP_NIL))))
# else
#    define SNT_PP_LIST_FIRST_N(count, list) SNT_PP_LIST_FIRST_N_I(count, list)
#    define SNT_PP_LIST_FIRST_N_I(count, list) SNT_PP_LIST_REVERSE(SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_WHILE(SNT_PP_LIST_FIRST_N_P, SNT_PP_LIST_FIRST_N_O, (count, list, SNT_PP_NIL))))
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_FIRST_N_P(d, data) SNT_PP_TUPLE_ELEM(3, 0, data)
# else
#    define SNT_PP_LIST_FIRST_N_P(d, data) SNT_PP_LIST_FIRST_N_P_I data
#    define SNT_PP_LIST_FIRST_N_P_I(c, l, nl) c
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_LIST_FIRST_N_O(d, data) SNT_PP_LIST_FIRST_N_O_D data
# else
#    define SNT_PP_LIST_FIRST_N_O(d, data) SNT_PP_LIST_FIRST_N_O_D(SNT_PP_TUPLE_ELEM(3, 0, data), SNT_PP_TUPLE_ELEM(3, 1, data), SNT_PP_TUPLE_ELEM(3, 2, data))
# endif
#
# define SNT_PP_LIST_FIRST_N_O_D(c, l, nl) (SNT_PP_DEC(c), SNT_PP_LIST_REST(l), (SNT_PP_LIST_FIRST(l), nl))
#
# /* SNT_PP_LIST_FIRST_N_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_FIRST_N_D(d, count, list) SNT_PP_LIST_REVERSE_D(d, SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_WHILE_ ## d(SNT_PP_LIST_FIRST_N_P, SNT_PP_LIST_FIRST_N_O, (count, list, SNT_PP_NIL))))
# else
#    define SNT_PP_LIST_FIRST_N_D(d, count, list) SNT_PP_LIST_FIRST_N_D_I(d, count, list)
#    define SNT_PP_LIST_FIRST_N_D_I(d, count, list) SNT_PP_LIST_REVERSE_D(d, SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_WHILE_ ## d(SNT_PP_LIST_FIRST_N_P, SNT_PP_LIST_FIRST_N_O, (count, list, SNT_PP_NIL))))
# endif
#
# endif
