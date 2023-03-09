//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_WSTRINGIZE_H
# define SENTIENT_PREPROCESSOR_WSTRINGIZE_H
#
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_WSTRINGIZE */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_WSTRINGIZE(text) SNT_PP_WSTRINGIZE_I(text)
# else
#    define SNT_PP_WSTRINGIZE(text) SNT_PP_WSTRINGIZE_OO((text))
#    define SNT_PP_WSTRINGIZE_OO(par) SNT_PP_WSTRINGIZE_I ## par
# endif
#
# define SNT_PP_WSTRINGIZE_I(...) SNT_PP_WSTRINGIZE_II(#__VA_ARGS__)
# define SNT_PP_WSTRINGIZE_II(str) L ## str
#
# endif
