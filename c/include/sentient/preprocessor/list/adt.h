//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_ADT_H
# define SENTIENT_PREPROCESSOR_LIST_ADT_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/detail/is_binary.h>
# include <sentient/preprocessor/logical/compl.h>
# include <sentient/preprocessor/tuple/eat.h>
#
# /* SNT_PP_LIST_CONS */
#
# define SNT_PP_LIST_CONS(head, tail) (head, tail)
#
# /* SNT_PP_LIST_NIL */
#
# define SNT_PP_LIST_NIL SNT_PP_NIL
#
# /* SNT_PP_LIST_FIRST */
#
# define SNT_PP_LIST_FIRST(list) SNT_PP_LIST_FIRST_D(list)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_LIST_FIRST_D(list) SNT_PP_LIST_FIRST_I list
# else
#    define SNT_PP_LIST_FIRST_D(list) SNT_PP_LIST_FIRST_I ## list
# endif
#
# define SNT_PP_LIST_FIRST_I(head, tail) head
#
# /* SNT_PP_LIST_REST */
#
# define SNT_PP_LIST_REST(list) SNT_PP_LIST_REST_D(list)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_LIST_REST_D(list) SNT_PP_LIST_REST_I list
# else
#    define SNT_PP_LIST_REST_D(list) SNT_PP_LIST_REST_I ## list
# endif
#
# define SNT_PP_LIST_REST_I(head, tail) tail
#
# /* SNT_PP_LIST_IS_CONS */
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_BCC()
#    define SNT_PP_LIST_IS_CONS(list) SNT_PP_LIST_IS_CONS_D(list)
#    define SNT_PP_LIST_IS_CONS_D(list) SNT_PP_LIST_IS_CONS_ ## list
#    define SNT_PP_LIST_IS_CONS_(head, tail) 1
#    define SNT_PP_LIST_IS_CONS_SNT_PP_NIL 0
# else
#    define SNT_PP_LIST_IS_CONS(list) SNT_PP_IS_BINARY(list)
# endif
#
# /* SNT_PP_LIST_IS_NIL */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_BCC()
#    define SNT_PP_LIST_IS_NIL(list) SNT_PP_COMPL(SNT_PP_IS_BINARY(list))
# else
#    define SNT_PP_LIST_IS_NIL(list) SNT_PP_COMPL(SNT_PP_LIST_IS_CONS(list))
# endif
#
# endif
