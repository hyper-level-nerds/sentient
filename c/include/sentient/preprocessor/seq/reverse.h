//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_REVERSE_H
# define SENTIENT_PREPROCESSOR_SEQ_REVERSE_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/facilities/empty.h>
# include <sentient/preprocessor/seq/fold_left.h>
#
# /* SNT_PP_SEQ_REVERSE */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_REVERSE(seq) SNT_PP_SEQ_FOLD_LEFT(SNT_PP_SEQ_REVERSE_O, SNT_PP_EMPTY, seq)()
# else
#    define SNT_PP_SEQ_REVERSE(seq) SNT_PP_SEQ_REVERSE_I(seq)
#    define SNT_PP_SEQ_REVERSE_I(seq) SNT_PP_SEQ_FOLD_LEFT(SNT_PP_SEQ_REVERSE_O, SNT_PP_EMPTY, seq)()
# endif
#
# define SNT_PP_SEQ_REVERSE_O(s, state, elem) (elem) state
#
# /* SNT_PP_SEQ_REVERSE_S */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_REVERSE_S(s, seq) SNT_PP_SEQ_FOLD_LEFT_ ## s(SNT_PP_SEQ_REVERSE_O, SNT_PP_EMPTY, seq)()
# else
#    define SNT_PP_SEQ_REVERSE_S(s, seq) SNT_PP_SEQ_REVERSE_S_I(s, seq)
#    define SNT_PP_SEQ_REVERSE_S_I(s, seq) SNT_PP_SEQ_FOLD_LEFT_ ## s(SNT_PP_SEQ_REVERSE_O, SNT_PP_EMPTY, seq)()
# endif
#
# endif
