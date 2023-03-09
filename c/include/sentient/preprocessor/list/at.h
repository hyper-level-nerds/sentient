//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_AT_H
# define SENTIENT_PREPROCESSOR_LIST_AT_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/list/adt.h>
# include <sentient/preprocessor/list/rest_n.h>
#
# /* SNT_PP_LIST_AT */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_AT(list, index) SNT_PP_LIST_FIRST(SNT_PP_LIST_REST_N(index, list))
# else
#    define SNT_PP_LIST_AT(list, index) SNT_PP_LIST_AT_I(list, index)
#    define SNT_PP_LIST_AT_I(list, index) SNT_PP_LIST_FIRST(SNT_PP_LIST_REST_N(index, list))
# endif
#
# /* SNT_PP_LIST_AT_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_AT_D(d, list, index) SNT_PP_LIST_FIRST(SNT_PP_LIST_REST_N_D(d, index, list))
# else
#    define SNT_PP_LIST_AT_D(d, list, index) SNT_PP_LIST_AT_D_I(d, list, index)
#    define SNT_PP_LIST_AT_D_I(d, list, index) SNT_PP_LIST_FIRST(SNT_PP_LIST_REST_N_D(d, index, list))
# endif
#
# endif
