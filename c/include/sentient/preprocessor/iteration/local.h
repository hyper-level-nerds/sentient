//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_ITERATION_LOCAL_H
# define SENTIENT_PREPROCESSOR_ITERATION_LOCAL_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/slot/slot.h>
# include <sentient/preprocessor/tuple/elem.h>
#
# /* SNT_PP_LOCAL_ITERATE */
#
# define SNT_PP_LOCAL_ITERATE() <sentient/preprocessor/iteration/detail/local.h>
#
# define SNT_PP_LOCAL_C(n) (SNT_PP_LOCAL_S) <= n && (SNT_PP_LOCAL_F) >= n
# define SNT_PP_LOCAL_R(n) (SNT_PP_LOCAL_F) <= n && (SNT_PP_LOCAL_S) >= n
#
# endif
