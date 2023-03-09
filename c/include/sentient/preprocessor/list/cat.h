//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_CAT_H
# define SENTIENT_PREPROCESSOR_LIST_CAT_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/list/adt.h>
# include <sentient/preprocessor/list/fold_left.h>
#
# /* SNT_PP_LIST_CAT */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_CAT(list) SNT_PP_LIST_FOLD_LEFT(SNT_PP_LIST_CAT_O, SNT_PP_LIST_FIRST(list), SNT_PP_LIST_REST(list))
# else
#    define SNT_PP_LIST_CAT(list) SNT_PP_LIST_CAT_I(list)
#    define SNT_PP_LIST_CAT_I(list) SNT_PP_LIST_FOLD_LEFT(SNT_PP_LIST_CAT_O, SNT_PP_LIST_FIRST(list), SNT_PP_LIST_REST(list))
# endif
#
# define SNT_PP_LIST_CAT_O(d, s, x) SNT_PP_CAT(s, x)
#
# /* SNT_PP_LIST_CAT_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_CAT_D(d, list) SNT_PP_LIST_FOLD_LEFT_ ## d(SNT_PP_LIST_CAT_O, SNT_PP_LIST_FIRST(list), SNT_PP_LIST_REST(list))
# else
#    define SNT_PP_LIST_CAT_D(d, list) SNT_PP_LIST_CAT_D_I(d, list)
#    define SNT_PP_LIST_CAT_D_I(d, list) SNT_PP_LIST_FOLD_LEFT_ ## d(SNT_PP_LIST_CAT_O, SNT_PP_LIST_FIRST(list), SNT_PP_LIST_REST(list))
# endif
#
# endif
