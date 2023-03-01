//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_POP_FRONT_H
# define SENTIENT_PREPROCESSOR_SEQ_POP_FRONT_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/seq/seq.h>
#
# /* SNT_PP_SEQ_POP_FRONT */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_POP_FRONT(seq) SNT_PP_SEQ_TAIL(seq)
# else
#    define SNT_PP_SEQ_POP_FRONT(seq) SNT_PP_SEQ_POP_FRONT_I(seq)
#    define SNT_PP_SEQ_POP_FRONT_I(seq) SNT_PP_SEQ_TAIL(seq)
# endif
#
# endif
