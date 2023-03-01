//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_CAT_H
# define SENTIENT_PREPROCESSOR_CAT_H
#
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_CAT */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_CAT(a, b) SNT_PP_CAT_I(a, b)
# else
#    define SNT_PP_CAT(a, b) SNT_PP_CAT_OO((a, b))
#    define SNT_PP_CAT_OO(par) SNT_PP_CAT_I ## par
# endif
#
# if (~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()) || (defined(__INTEL_COMPILER) && __INTEL_COMPILER >= 1700)
#    define SNT_PP_CAT_I(a, b) a ## b
# else
#    define SNT_PP_CAT_I(a, b) SNT_PP_CAT_II(~, a ## b)
#    define SNT_PP_CAT_II(p, res) res
# endif
#
# endif
