//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_ENUM_H
# define SENTIENT_PREPROCESSOR_LIST_ENUM_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/list/adt.h>
# include <sentient/preprocessor/list/for_each_i.h>
# include <sentient/preprocessor/punctuation/comma_if.h>
# include <sentient/preprocessor/variadic/has_opt.h>
#
# /* SNT_PP_LIST_ENUM */
#
# if SNT_PP_VARIADIC_HAS_OPT()
#    if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#        define SNT_PP_LIST_ENUM_NOT_EMPTY(list) SNT_PP_LIST_FOR_EACH_I(SNT_PP_LIST_ENUM_O, SNT_PP_NIL, list)
#    else
#        define SNT_PP_LIST_ENUM_NOT_EMPTY(list) SNT_PP_LIST_ENUM_I(list)
#        define SNT_PP_LIST_ENUM_I(list) SNT_PP_LIST_FOR_EACH_I(SNT_PP_LIST_ENUM_O, SNT_PP_NIL, list)
#    endif
#    define SNT_PP_LIST_ENUM_EMPTY(list)
#    define SNT_PP_LIST_ENUM(list) SNT_PP_IIF(SNT_PP_LIST_IS_NIL(list),SNT_PP_LIST_ENUM_EMPTY,SNT_PP_LIST_ENUM_NOT_EMPTY)(list)
# elif ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_ENUM(list) SNT_PP_LIST_FOR_EACH_I(SNT_PP_LIST_ENUM_O, SNT_PP_NIL, list)
# else
#    define SNT_PP_LIST_ENUM(list) SNT_PP_LIST_ENUM_I(list)
#    define SNT_PP_LIST_ENUM_I(list) SNT_PP_LIST_FOR_EACH_I(SNT_PP_LIST_ENUM_O, SNT_PP_NIL, list)
# endif
#
# define SNT_PP_LIST_ENUM_O(r, _, i, elem) SNT_PP_COMMA_IF(i) elem
#
# /* SNT_PP_LIST_ENUM_R */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_ENUM_R(r, list) SNT_PP_LIST_FOR_EACH_I_R(r, SNT_PP_LIST_ENUM_O, SNT_PP_NIL, list)
# else
#    define SNT_PP_LIST_ENUM_R(r, list) SNT_PP_LIST_ENUM_R_I(r, list)
#    define SNT_PP_LIST_ENUM_R_I(r, list) SNT_PP_LIST_FOR_EACH_I_R(r, SNT_PP_LIST_ENUM_O, SNT_PP_NIL, list)
# endif
#
# endif
