//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_COMPARISON_GREATER_H
# define SENTIENT_PREPROCESSOR_COMPARISON_GREATER_H
#
# include <sentient/preprocessor/comparison/less.h>
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_GREATER */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_GREATER(x, y) SNT_PP_LESS(y, x)
# else
#    define SNT_PP_GREATER(x, y) SNT_PP_GREATER_I(x, y)
#    define SNT_PP_GREATER_I(x, y) SNT_PP_LESS(y, x)
# endif
#
# /* SNT_PP_GREATER_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_GREATER_D(d, x, y) SNT_PP_LESS_D(d, y, x)
# else
#    define SNT_PP_GREATER_D(d, x, y) SNT_PP_GREATER_D_I(d, x, y)
#    define SNT_PP_GREATER_D_I(d, x, y) SNT_PP_LESS_D(d, y, x)
# endif
#
# endif
