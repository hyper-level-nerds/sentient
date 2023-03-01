//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LOGICAL_NOT_H
# define SENTIENT_PREPROCESSOR_LOGICAL_NOT_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/logical/bool.h>
# include <sentient/preprocessor/logical/compl.h>
#
# /* SNT_PP_NOT */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_NOT(x) SNT_PP_COMPL(SNT_PP_BOOL(x))
# else
#    define SNT_PP_NOT(x) SNT_PP_NOT_I(x)
#    define SNT_PP_NOT_I(x) SNT_PP_COMPL(SNT_PP_BOOL(x))
# endif
#
# endif
