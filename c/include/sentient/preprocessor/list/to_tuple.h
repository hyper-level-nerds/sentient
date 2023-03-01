//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_TO_TUPLE_H
# define SENTIENT_PREPROCESSOR_LIST_TO_TUPLE_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/list/enum.h>
# include <sentient/preprocessor/control/iif.h>
#
# /* SNT_PP_LIST_TO_TUPLE */
#
# define SNT_PP_LIST_TO_TUPLE(list) \
    SNT_PP_IIF \
        ( \
        SNT_PP_LIST_IS_NIL(list), \
        SNT_PP_LIST_TO_TUPLE_EMPTY, \
        SNT_PP_LIST_TO_TUPLE_DO \
        ) \
    (list) \
/**/
# define SNT_PP_LIST_TO_TUPLE_EMPTY(list)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_TO_TUPLE_DO(list) (SNT_PP_LIST_ENUM(list))
# else
#    define SNT_PP_LIST_TO_TUPLE_DO(list) SNT_PP_LIST_TO_TUPLE_I(list)
#    define SNT_PP_LIST_TO_TUPLE_I(list) (SNT_PP_LIST_ENUM(list))
# endif
#
# /* SNT_PP_LIST_TO_TUPLE_R */
#
# define SNT_PP_LIST_TO_TUPLE_R(r, list) \
    SNT_PP_IIF \
        ( \
        SNT_PP_LIST_IS_NIL(list), \
        SNT_PP_LIST_TO_TUPLE_R_EMPTY, \
        SNT_PP_LIST_TO_TUPLE_R_DO \
        ) \
    (r, list) \
/**/
# define SNT_PP_LIST_TO_TUPLE_R_EMPTY(r,list)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_TO_TUPLE_R_DO(r, list) (SNT_PP_LIST_ENUM_R(r, list))
# else
#    define SNT_PP_LIST_TO_TUPLE_R_DO(r, list) SNT_PP_LIST_TO_TUPLE_R_I(r, list)
#    define SNT_PP_LIST_TO_TUPLE_R_I(r, list) (SNT_PP_LIST_ENUM_R(r, list))
# endif
#
# endif
