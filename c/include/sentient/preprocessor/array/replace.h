//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_ARRAY_REPLACE_H
# define SENTIENT_PREPROCESSOR_ARRAY_REPLACE_H
#
# include <sentient/preprocessor/config/config.h>
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/array/elem.h>
# include <sentient/preprocessor/array/push_back.h>
# include <sentient/preprocessor/comparison/not_equal.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/deduce_d.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/tuple/elem.h>
#
# /* SNT_PP_ARRAY_REPLACE */
#
# define SNT_PP_ARRAY_REPLACE(array, i, elem) SNT_PP_ARRAY_REPLACE_I(SNT_PP_DEDUCE_D(), array, i, elem)
# define SNT_PP_ARRAY_REPLACE_I(d, array, i, elem) SNT_PP_ARRAY_REPLACE_D(d, array, i, elem)
#
# /* SNT_PP_ARRAY_REPLACE_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ARRAY_REPLACE_D(d, array, i, elem) SNT_PP_TUPLE_ELEM(5, 3, SNT_PP_WHILE_ ## d(SNT_PP_ARRAY_REPLACE_P, SNT_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# else
#    define SNT_PP_ARRAY_REPLACE_D(d, array, i, elem) SNT_PP_ARRAY_REPLACE_D_I(d, array, i, elem)
#    define SNT_PP_ARRAY_REPLACE_D_I(d, array, i, elem) SNT_PP_TUPLE_ELEM(5, 3, SNT_PP_WHILE_ ## d(SNT_PP_ARRAY_REPLACE_P, SNT_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# endif
#
# define SNT_PP_ARRAY_REPLACE_P(d, state) SNT_PP_NOT_EQUAL(SNT_PP_TUPLE_ELEM(5, 0, state), SNT_PP_ARRAY_SIZE(SNT_PP_TUPLE_ELEM(5, 4, state)))
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_ARRAY_REPLACE_O(d, state) SNT_PP_ARRAY_REPLACE_O_I state
# else
#    define SNT_PP_ARRAY_REPLACE_O(d, state) SNT_PP_ARRAY_REPLACE_O_I(SNT_PP_TUPLE_ELEM(5, 0, state), SNT_PP_TUPLE_ELEM(5, 1, state), SNT_PP_TUPLE_ELEM(5, 2, state), SNT_PP_TUPLE_ELEM(5, 3, state), SNT_PP_TUPLE_ELEM(5, 4, state))
# endif
#
# define SNT_PP_ARRAY_REPLACE_O_I(n, i, elem, res, arr) (SNT_PP_INC(n), i, elem, SNT_PP_ARRAY_PUSH_BACK(res, SNT_PP_IIF(SNT_PP_NOT_EQUAL(n, i), SNT_PP_ARRAY_ELEM(n, arr), elem)), arr)
#
# else
#
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/array/elem.h>
# include <sentient/preprocessor/array/push_back.h>
# include <sentient/preprocessor/comparison/not_equal.h>
# include <sentient/preprocessor/control/deduce_d.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/control/while.h>
# if SNT_PP_LIMIT_TUPLE == 256
# include <sentient/preprocessor/logical/not.h>
# endif
# include <sentient/preprocessor/tuple/elem.h>
#
# /* SNT_PP_ARRAY_REPLACE */
#
# define SNT_PP_ARRAY_REPLACE(array, i, elem) SNT_PP_ARRAY_REPLACE_I(SNT_PP_DEDUCE_D(), array, i, elem)
# define SNT_PP_ARRAY_REPLACE_I(d, array, i, elem) SNT_PP_ARRAY_REPLACE_D(d, array, i, elem)
#
# /* SNT_PP_ARRAY_REPLACE_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
# if SNT_PP_LIMIT_TUPLE == 256
#    define SNT_PP_ARRAY_REPLACE_D(d, array, i, elem) SNT_PP_ARRAY_REPLACE_ZERO_D(d, array, i, elem, SNT_PP_NOT(i))
# else
#    define SNT_PP_ARRAY_REPLACE_D(d, array, i, elem) SNT_PP_TUPLE_ELEM(5, 3, SNT_PP_WHILE_ ## d(SNT_PP_ARRAY_REPLACE_P, SNT_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# endif
# else
#    define SNT_PP_ARRAY_REPLACE_D(d, array, i, elem) SNT_PP_ARRAY_REPLACE_D_I(d, array, i, elem)
# if SNT_PP_LIMIT_TUPLE == 256
#    define SNT_PP_ARRAY_REPLACE_D_I(d, array, i, elem) SNT_PP_ARRAY_REPLACE_ZERO_D(d, array, i, elem, SNT_PP_NOT(i))
# else
#    define SNT_PP_ARRAY_REPLACE_D_I(d, array, i, elem) SNT_PP_TUPLE_ELEM(5, 3, SNT_PP_WHILE_ ## d(SNT_PP_ARRAY_REPLACE_P, SNT_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# endif
# endif
#
# if SNT_PP_LIMIT_TUPLE == 256
# define SNT_PP_ARRAY_REPLACE_ZERO_D(d, array, i, elem, zero) \
         SNT_PP_TUPLE_ELEM(5, 3, SNT_PP_WHILE_ ## d(SNT_PP_ARRAY_REPLACE_P, SNT_PP_ARRAY_REPLACE_O, \
         (1, i, elem, SNT_PP_IIF(zero,(1, (elem)),(1, (SNT_PP_ARRAY_ELEM(0,array)))), array)))
# endif
#
# define SNT_PP_ARRAY_REPLACE_P(d, state) SNT_PP_NOT_EQUAL(SNT_PP_TUPLE_ELEM(5, 0, state), SNT_PP_ARRAY_SIZE(SNT_PP_TUPLE_ELEM(5, 4, state)))
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_ARRAY_REPLACE_O(d, state) SNT_PP_ARRAY_REPLACE_O_I state
# else
#    define SNT_PP_ARRAY_REPLACE_O(d, state) SNT_PP_ARRAY_REPLACE_O_I(SNT_PP_TUPLE_ELEM(5, 0, state), SNT_PP_TUPLE_ELEM(5, 1, state), SNT_PP_TUPLE_ELEM(5, 2, state), SNT_PP_TUPLE_ELEM(5, 3, state), SNT_PP_TUPLE_ELEM(5, 4, state))
# endif
#
# define SNT_PP_ARRAY_REPLACE_O_I(n, i, elem, res, arr) (SNT_PP_INC(n), i, elem, SNT_PP_ARRAY_PUSH_BACK(res, SNT_PP_IIF(SNT_PP_NOT_EQUAL(n, i), SNT_PP_ARRAY_ELEM(n, arr), elem)), arr)
#
# endif
#
# endif
