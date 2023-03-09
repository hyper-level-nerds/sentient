//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_DEBUG_ASSERT_H
# define SENTIENT_PREPROCESSOR_DEBUG_ASSERT_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/expr_iif.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/logical/not.h>
# include <sentient/preprocessor/tuple/eat.h>
#
# /* SNT_PP_ASSERT */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ASSERT SNT_PP_ASSERT_D
# else
#    define SNT_PP_ASSERT(cond) SNT_PP_ASSERT_D(cond)
# endif
#
# define SNT_PP_ASSERT_D(cond) SNT_PP_IIF(SNT_PP_NOT(cond), SNT_PP_ASSERT_ERROR, SNT_PP_TUPLE_EAT_1)(...)
# define SNT_PP_ASSERT_ERROR(x, y, z)
#
# /* SNT_PP_ASSERT_MSG */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ASSERT_MSG SNT_PP_ASSERT_MSG_D
# else
#    define SNT_PP_ASSERT_MSG(cond, msg) SNT_PP_ASSERT_MSG_D(cond, msg)
# endif
#
# define SNT_PP_ASSERT_MSG_D(cond, msg) SNT_PP_EXPR_IIF(SNT_PP_NOT(cond), msg)
#
# endif
