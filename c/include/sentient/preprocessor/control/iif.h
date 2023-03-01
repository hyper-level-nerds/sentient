//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_CONTROL_IIF_H
# define SENTIENT_PREPROCESSOR_CONTROL_IIF_H
#
# include <sentient/preprocessor/config/config.h>
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_IIF(bit, t, f) SNT_PP_IIF_I(bit, t, f)
# else
#    define SNT_PP_IIF(bit, t, f) SNT_PP_IIF_OO((bit, t, f))
#    define SNT_PP_IIF_OO(par) SNT_PP_IIF_I ## par
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#    define SNT_PP_IIF_I(bit, t, f) SNT_PP_IIF_ ## bit(t, f)
# else
#    define SNT_PP_IIF_I(bit, t, f) SNT_PP_IIF_II(SNT_PP_IIF_ ## bit(t, f))
#    define SNT_PP_IIF_II(id) id
# endif
#
# define SNT_PP_IIF_0(t, f) f
# define SNT_PP_IIF_1(t, f) t
#
# endif
