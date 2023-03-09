//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_REST_N_H
# define SENTIENT_PREPROCESSOR_LIST_REST_N_H
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/list/adt.h>
# include <sentient/preprocessor/tuple/elem.h>
#
# /* SNT_PP_LIST_REST_N */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_REST_N(count, list) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE(SNT_PP_LIST_REST_N_P, SNT_PP_LIST_REST_N_O, (list, count)))
# else
#    define SNT_PP_LIST_REST_N(count, list) SNT_PP_LIST_REST_N_I(count, list)
#    define SNT_PP_LIST_REST_N_I(count, list) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE(SNT_PP_LIST_REST_N_P, SNT_PP_LIST_REST_N_O, (list, count)))
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_REST_N_P(d, lc) SNT_PP_TUPLE_ELEM(2, 1, lc)
# else
#    define SNT_PP_LIST_REST_N_P(d, lc) SNT_PP_LIST_REST_N_P_I lc
#    define SNT_PP_LIST_REST_N_P_I(list, count) count
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_REST_N_O(d, lc) (SNT_PP_LIST_REST(SNT_PP_TUPLE_ELEM(2, 0, lc)), SNT_PP_DEC(SNT_PP_TUPLE_ELEM(2, 1, lc)))
# else
#    define SNT_PP_LIST_REST_N_O(d, lc) SNT_PP_LIST_REST_N_O_I lc
#    define SNT_PP_LIST_REST_N_O_I(list, count) (SNT_PP_LIST_REST(list), SNT_PP_DEC(count))
# endif
#
# /* SNT_PP_LIST_REST_N_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_REST_N_D(d, count, list) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE_ ## d(SNT_PP_LIST_REST_N_P, SNT_PP_LIST_REST_N_O, (list, count)))
# else
#    define SNT_PP_LIST_REST_N_D(d, count, list) SNT_PP_LIST_REST_N_D_I(d, count, list)
#    define SNT_PP_LIST_REST_N_D_I(d, count, list) SNT_PP_TUPLE_ELEM(2, 0, SNT_PP_WHILE_ ## d(SNT_PP_LIST_REST_N_P, SNT_PP_LIST_REST_N_O, (list, count)))
# endif
#
# endif
