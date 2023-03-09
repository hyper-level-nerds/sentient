//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_LIST_FOR_EACH_I_H
# define SENTIENT_PREPROCESSOR_LIST_LIST_FOR_EACH_I_H
#
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/list/adt.h>
# include <sentient/preprocessor/repetition/for.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_LIST_FOR_EACH_I */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG() && ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#    define SNT_PP_LIST_FOR_EACH_I(macro, data, list) SNT_PP_FOR((macro, data, list, 0), SNT_PP_LIST_FOR_EACH_I_P, SNT_PP_LIST_FOR_EACH_I_O, SNT_PP_LIST_FOR_EACH_I_M)
# else
#    define SNT_PP_LIST_FOR_EACH_I(macro, data, list) SNT_PP_LIST_FOR_EACH_I_I(macro, data, list)
#    define SNT_PP_LIST_FOR_EACH_I_I(macro, data, list) SNT_PP_FOR((macro, data, list, 0), SNT_PP_LIST_FOR_EACH_I_P, SNT_PP_LIST_FOR_EACH_I_O, SNT_PP_LIST_FOR_EACH_I_M)
# endif
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_LIST_FOR_EACH_I_P(r, x) SNT_PP_LIST_FOR_EACH_I_P_D x
#    define SNT_PP_LIST_FOR_EACH_I_P_D(m, d, l, i) SNT_PP_LIST_IS_CONS(l)
# else
#    define SNT_PP_LIST_FOR_EACH_I_P(r, x) SNT_PP_LIST_IS_CONS(SNT_PP_TUPLE_ELEM(4, 2, x))
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_LIST_FOR_EACH_I_O(r, x) SNT_PP_LIST_FOR_EACH_I_O_D x
#    define SNT_PP_LIST_FOR_EACH_I_O_D(m, d, l, i) (m, d, SNT_PP_LIST_REST(l), SNT_PP_INC(i))
# else
#    define SNT_PP_LIST_FOR_EACH_I_O(r, x) (SNT_PP_TUPLE_ELEM(4, 0, x), SNT_PP_TUPLE_ELEM(4, 1, x), SNT_PP_LIST_REST(SNT_PP_TUPLE_ELEM(4, 2, x)), SNT_PP_INC(SNT_PP_TUPLE_ELEM(4, 3, x)))
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_FOR_EACH_I_M(r, x) SNT_PP_LIST_FOR_EACH_I_M_D(r, SNT_PP_TUPLE_ELEM(4, 0, x), SNT_PP_TUPLE_ELEM(4, 1, x), SNT_PP_TUPLE_ELEM(4, 2, x), SNT_PP_TUPLE_ELEM(4, 3, x))
# else
#    define SNT_PP_LIST_FOR_EACH_I_M(r, x) SNT_PP_LIST_FOR_EACH_I_M_I(r, SNT_PP_TUPLE_REM_4 x)
#    define SNT_PP_LIST_FOR_EACH_I_M_I(r, x_e) SNT_PP_LIST_FOR_EACH_I_M_D(r, x_e)
# endif
#
# define SNT_PP_LIST_FOR_EACH_I_M_D(r, m, d, l, i) m(r, d, i, SNT_PP_LIST_FIRST(l))
#
# /* SNT_PP_LIST_FOR_EACH_I_R */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_FOR_EACH_I_R(r, macro, data, list) SNT_PP_FOR_ ## r((macro, data, list, 0), SNT_PP_LIST_FOR_EACH_I_P, SNT_PP_LIST_FOR_EACH_I_O, SNT_PP_LIST_FOR_EACH_I_M)
# else
#    define SNT_PP_LIST_FOR_EACH_I_R(r, macro, data, list) SNT_PP_LIST_FOR_EACH_I_R_I(r, macro, data, list)
#    define SNT_PP_LIST_FOR_EACH_I_R_I(r, macro, data, list) SNT_PP_FOR_ ## r((macro, data, list, 0), SNT_PP_LIST_FOR_EACH_I_P, SNT_PP_LIST_FOR_EACH_I_O, SNT_PP_LIST_FOR_EACH_I_M)
# endif
#
# endif
