//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_REPETITION_ENUM_PARAMS_WITH_DEFAULTS_H
# define SENTIENT_PREPROCESSOR_REPETITION_ENUM_PARAMS_WITH_DEFAULTS_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/repetition/enum_binary_params.h>
#
# /* SNT_PP_ENUM_PARAMS_WITH_DEFAULTS */
#
# define SNT_PP_ENUM_PARAMS_WITH_DEFAULTS(count, param, def) SNT_PP_ENUM_BINARY_PARAMS(count, param, = def)
#
# endif
