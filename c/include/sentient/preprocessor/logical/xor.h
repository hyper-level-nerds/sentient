//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LOGICAL_XOR_H
# define SENTIENT_PREPROCESSOR_LOGICAL_XOR_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/logical/bool.h>
# include <sentient/preprocessor/logical/bitxor.h>
#
# /* SNT_PP_XOR */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_XOR(p, q) SNT_PP_BITXOR(SNT_PP_BOOL(p), SNT_PP_BOOL(q))
# else
#    define SNT_PP_XOR(p, q) SNT_PP_XOR_I(p, q)
#    define SNT_PP_XOR_I(p, q) SNT_PP_BITXOR(SNT_PP_BOOL(p), SNT_PP_BOOL(q))
# endif
#
# endif
