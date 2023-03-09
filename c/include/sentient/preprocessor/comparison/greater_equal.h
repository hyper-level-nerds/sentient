//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_COMPARISON_GREATER_EQUAL_H
# define SENTIENT_PREPROCESSOR_COMPARISON_GREATER_EQUAL_H
#
# include <sentient/preprocessor/comparison/less_equal.h>
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_GREATER_EQUAL */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_GREATER_EQUAL(x, y) SNT_PP_LESS_EQUAL(y, x)
# else
#    define SNT_PP_GREATER_EQUAL(x, y) SNT_PP_GREATER_EQUAL_I(x, y)
#    define SNT_PP_GREATER_EQUAL_I(x, y) SNT_PP_LESS_EQUAL(y, x)
# endif
#
# /* SNT_PP_GREATER_EQUAL_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_GREATER_EQUAL_D(d, x, y) SNT_PP_LESS_EQUAL_D(d, y, x)
# else
#    define SNT_PP_GREATER_EQUAL_D(d, x, y) SNT_PP_GREATER_EQUAL_D_I(d, x, y)
#    define SNT_PP_GREATER_EQUAL_D_I(d, x, y) SNT_PP_LESS_EQUAL_D(d, y, x)
# endif
#
# endif
