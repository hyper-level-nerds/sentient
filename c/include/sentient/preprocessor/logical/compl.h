//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_LOGICAL_COMPL_H
# define SENTIENT_PREPROCESSOR_LOGICAL_COMPL_H
#
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_COMPL */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_COMPL(x) SNT_PP_COMPL_I(x)
# else
#    define SNT_PP_COMPL(x) SNT_PP_COMPL_OO((x))
#    define SNT_PP_COMPL_OO(par) SNT_PP_COMPL_I ## par
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#    define SNT_PP_COMPL_I(x) SNT_PP_COMPL_ ## x
# else
#    define SNT_PP_COMPL_I(x) SNT_PP_COMPL_ID(SNT_PP_COMPL_ ## x)
#    define SNT_PP_COMPL_ID(id) id
# endif
#
# define SNT_PP_COMPL_0 1
# define SNT_PP_COMPL_1 0
#
# endif
