//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_CONTROL_IF_H
# define SENTIENT_PREPROCESSOR_CONTROL_IF_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/logical/bool.h>
#
# /* SNT_PP_IF */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_IF(cond, t, f) SNT_PP_IIF(SNT_PP_BOOL(cond), t, f)
# else
#    define SNT_PP_IF(cond, t, f) SNT_PP_IF_I(cond, t, f)
#    define SNT_PP_IF_I(cond, t, f) SNT_PP_IIF(SNT_PP_BOOL(cond), t, f)
# endif
#
# endif
