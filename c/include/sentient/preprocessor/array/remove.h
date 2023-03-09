//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_ARRAY_REMOVE_H
# define SENTIENT_PREPROCESSOR_ARRAY_REMOVE_H
#
# include <sentient/preprocessor/config/config.h>
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/array/elem.h>
# include <sentient/preprocessor/array/push_back.h>
# include <sentient/preprocessor/array/size.h>
# include <sentient/preprocessor/comparison/not_equal.h>
# include <sentient/preprocessor/control/deduce_d.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/tuple/eat.h>
# include <sentient/preprocessor/tuple/elem.h>
#
# /* SNT_PP_ARRAY_REMOVE */
#
# define SNT_PP_ARRAY_REMOVE(array, i) SNT_PP_ARRAY_REMOVE_I(SNT_PP_DEDUCE_D(), array, i)
# define SNT_PP_ARRAY_REMOVE_I(d, array, i) SNT_PP_ARRAY_REMOVE_D(d, array, i)
#
# /* SNT_PP_ARRAY_REMOVE_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ARRAY_REMOVE_D(d, array, i) SNT_PP_TUPLE_ELEM(4, 2, SNT_PP_WHILE_ ## d(SNT_PP_ARRAY_REMOVE_P, SNT_PP_ARRAY_REMOVE_O, (0, i, (0, ()), array)))
# else
#    define SNT_PP_ARRAY_REMOVE_D(d, array, i) SNT_PP_ARRAY_REMOVE_D_I(d, array, i)
#    define SNT_PP_ARRAY_REMOVE_D_I(d, array, i) SNT_PP_TUPLE_ELEM(4, 2, SNT_PP_WHILE_ ## d(SNT_PP_ARRAY_REMOVE_P, SNT_PP_ARRAY_REMOVE_O, (0, i, (0, ()), array)))
# endif
#
# define SNT_PP_ARRAY_REMOVE_P(d, st) SNT_PP_NOT_EQUAL(SNT_PP_TUPLE_ELEM(4, 0, st), SNT_PP_ARRAY_SIZE(SNT_PP_TUPLE_ELEM(4, 3, st)))
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_ARRAY_REMOVE_O(d, st) SNT_PP_ARRAY_REMOVE_O_I st
# else
#    define SNT_PP_ARRAY_REMOVE_O(d, st) SNT_PP_ARRAY_REMOVE_O_I(SNT_PP_TUPLE_ELEM(4, 0, st), SNT_PP_TUPLE_ELEM(4, 1, st), SNT_PP_TUPLE_ELEM(4, 2, st), SNT_PP_TUPLE_ELEM(4, 3, st))
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_DMC()
#    define SNT_PP_ARRAY_REMOVE_O_I(n, i, res, arr) (SNT_PP_INC(n), i, SNT_PP_IIF(SNT_PP_NOT_EQUAL(n, i), SNT_PP_ARRAY_PUSH_BACK, res SNT_PP_TUPLE_EAT_2)(res, SNT_PP_ARRAY_ELEM(n, arr)), arr)
# else
#    define SNT_PP_ARRAY_REMOVE_O_I(n, i, res, arr) (SNT_PP_INC(n), i, SNT_PP_IIF(SNT_PP_NOT_EQUAL(n, i), SNT_PP_ARRAY_PUSH_BACK, SNT_PP_TUPLE_ELEM_2_0)(res, SNT_PP_ARRAY_ELEM(n, arr)), arr)
# endif
#
# else
#
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/array/elem.h>
# include <sentient/preprocessor/array/push_back.h>
# include <sentient/preprocessor/array/size.h>
# include <sentient/preprocessor/comparison/not_equal.h>
# include <sentient/preprocessor/control/deduce_d.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/control/while.h>
# if SNT_PP_LIMIT_TUPLE == 256
# include <sentient/preprocessor/logical/not.h>
# endif
# include <sentient/preprocessor/tuple/eat.h>
# include <sentient/preprocessor/tuple/elem.h>
#
# /* SNT_PP_ARRAY_REMOVE */
#
# define SNT_PP_ARRAY_REMOVE(array, i) SNT_PP_ARRAY_REMOVE_I(SNT_PP_DEDUCE_D(), array, i)
# define SNT_PP_ARRAY_REMOVE_I(d, array, i) SNT_PP_ARRAY_REMOVE_D(d, array, i)
#
# /* SNT_PP_ARRAY_REMOVE_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
# if SNT_PP_LIMIT_TUPLE == 256
#    define SNT_PP_ARRAY_REMOVE_D(d, array, i) SNT_PP_ARRAY_REMOVE_ZERO_D(d, array, i, SNT_PP_NOT(i))
# else
#    define SNT_PP_ARRAY_REMOVE_D(d, array, i) SNT_PP_TUPLE_ELEM(4, 2, SNT_PP_WHILE_ ## d(SNT_PP_ARRAY_REMOVE_P, SNT_PP_ARRAY_REMOVE_O, (0, i, (0, ()), array)))
# endif
# else
#    define SNT_PP_ARRAY_REMOVE_D(d, array, i) SNT_PP_ARRAY_REMOVE_D_I(d, array, i)
# if SNT_PP_LIMIT_TUPLE == 256
#    define SNT_PP_ARRAY_REMOVE_D_I(d, array, i) SNT_PP_ARRAY_REMOVE_ZERO_D(d, array, i, SNT_PP_NOT(i))
# else
#    define SNT_PP_ARRAY_REMOVE_D_I(d, array, i) SNT_PP_TUPLE_ELEM(4, 2, SNT_PP_WHILE_ ## d(SNT_PP_ARRAY_REMOVE_P, SNT_PP_ARRAY_REMOVE_O, (0, i, (0, ()), array)))
# endif
# endif
#
# if SNT_PP_LIMIT_TUPLE == 256
# define SNT_PP_ARRAY_REMOVE_ZERO_D(d, array, i, zero) \
         SNT_PP_TUPLE_ELEM(4, 2, SNT_PP_WHILE_ ## d(SNT_PP_ARRAY_REMOVE_P, SNT_PP_ARRAY_REMOVE_O, \
         (1, i, SNT_PP_IIF(zero,(0, ()),(1, (SNT_PP_ARRAY_ELEM(0,array)))), array)))
# endif
#
# define SNT_PP_ARRAY_REMOVE_P(d, st) SNT_PP_NOT_EQUAL(SNT_PP_TUPLE_ELEM(4, 0, st), SNT_PP_ARRAY_SIZE(SNT_PP_TUPLE_ELEM(4, 3, st)))
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_ARRAY_REMOVE_O(d, st) SNT_PP_ARRAY_REMOVE_O_I st
# else
#    define SNT_PP_ARRAY_REMOVE_O(d, st) SNT_PP_ARRAY_REMOVE_O_I(SNT_PP_TUPLE_ELEM(4, 0, st), SNT_PP_TUPLE_ELEM(4, 1, st), SNT_PP_TUPLE_ELEM(4, 2, st), SNT_PP_TUPLE_ELEM(4, 3, st))
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_DMC()
#    define SNT_PP_ARRAY_REMOVE_O_I(n, i, res, arr) (SNT_PP_INC(n), i, SNT_PP_IIF(SNT_PP_NOT_EQUAL(n, i), SNT_PP_ARRAY_PUSH_BACK, res SNT_PP_TUPLE_EAT_2)(res, SNT_PP_ARRAY_ELEM(n, arr)), arr)
# else
#    define SNT_PP_ARRAY_REMOVE_O_I(n, i, res, arr) (SNT_PP_INC(n), i, SNT_PP_IIF(SNT_PP_NOT_EQUAL(n, i), SNT_PP_ARRAY_PUSH_BACK, SNT_PP_TUPLE_ELEM_2_0)(res, SNT_PP_ARRAY_ELEM(n, arr)), arr)
# endif
#
# endif
#
# endif
