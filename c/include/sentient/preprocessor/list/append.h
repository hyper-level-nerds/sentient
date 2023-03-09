//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_APPEND_H
# define SENTIENT_PREPROCESSOR_LIST_APPEND_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/list/fold_right.h>
#
# /* SNT_PP_LIST_APPEND */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_APPEND(a, b) SNT_PP_LIST_FOLD_RIGHT(SNT_PP_LIST_APPEND_O, b, a)
# else
#    define SNT_PP_LIST_APPEND(a, b) SNT_PP_LIST_APPEND_I(a, b)
#    define SNT_PP_LIST_APPEND_I(a, b) SNT_PP_LIST_FOLD_RIGHT(SNT_PP_LIST_APPEND_O, b, a)
# endif
#
# define SNT_PP_LIST_APPEND_O(d, s, x) (x, s)
#
# /* SNT_PP_LIST_APPEND_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_APPEND_D(d, a, b) SNT_PP_LIST_FOLD_RIGHT_ ## d(SNT_PP_LIST_APPEND_O, b, a)
# else
#    define SNT_PP_LIST_APPEND_D(d, a, b) SNT_PP_LIST_APPEND_D_I(d, a, b)
#    define SNT_PP_LIST_APPEND_D_I(d, a, b) SNT_PP_LIST_FOLD_RIGHT_ ## d(SNT_PP_LIST_APPEND_O, b, a)
# endif
#
# endif
