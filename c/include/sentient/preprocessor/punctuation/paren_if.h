//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_PUNCTUATION_PAREN_IF_H
# define SENTIENT_PREPROCESSOR_PUNCTUATION_PAREN_IF_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/if.h>
# include <sentient/preprocessor/facilities/empty.h>
# include <sentient/preprocessor/punctuation/paren.h>
#
# /* SNT_PP_LPAREN_IF */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LPAREN_IF(cond) SNT_PP_IF(cond, SNT_PP_LPAREN, SNT_PP_EMPTY)()
# else
#    define SNT_PP_LPAREN_IF(cond) SNT_PP_LPAREN_IF_I(cond)
#    define SNT_PP_LPAREN_IF_I(cond) SNT_PP_IF(cond, SNT_PP_LPAREN, SNT_PP_EMPTY)()
# endif
#
# /* SNT_PP_RPAREN_IF */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_RPAREN_IF(cond) SNT_PP_IF(cond, SNT_PP_RPAREN, SNT_PP_EMPTY)()
# else
#    define SNT_PP_RPAREN_IF(cond) SNT_PP_RPAREN_IF_I(cond)
#    define SNT_PP_RPAREN_IF_I(cond) SNT_PP_IF(cond, SNT_PP_RPAREN, SNT_PP_EMPTY)()
# endif
#
# endif
