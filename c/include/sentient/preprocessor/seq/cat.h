//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_CAT_H
# define SENTIENT_PREPROCESSOR_SEQ_CAT_H
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/if.h>
# include <sentient/preprocessor/seq/fold_left.h>
# include <sentient/preprocessor/seq/seq.h>
# include <sentient/preprocessor/seq/size.h>
# include <sentient/preprocessor/tuple/eat.h>
#
# /* SNT_PP_SEQ_CAT */
#
# define SNT_PP_SEQ_CAT(seq) \
    SNT_PP_IF( \
        SNT_PP_DEC(SNT_PP_SEQ_SIZE(seq)), \
        SNT_PP_SEQ_CAT_I, \
        SNT_PP_SEQ_HEAD \
    )(seq) \
    /**/
# define SNT_PP_SEQ_CAT_I(seq) SNT_PP_SEQ_FOLD_LEFT(SNT_PP_SEQ_CAT_O, SNT_PP_SEQ_HEAD(seq), SNT_PP_SEQ_TAIL(seq))
#
# define SNT_PP_SEQ_CAT_O(s, st, elem) SNT_PP_SEQ_CAT_O_I(st, elem)
# define SNT_PP_SEQ_CAT_O_I(a, b) a ## b
#
# /* SNT_PP_SEQ_CAT_S */
#
# define SNT_PP_SEQ_CAT_S(s, seq) \
    SNT_PP_IF( \
        SNT_PP_DEC(SNT_PP_SEQ_SIZE(seq)), \
        SNT_PP_SEQ_CAT_S_I_A, \
        SNT_PP_SEQ_CAT_S_I_B \
    )(s, seq) \
    /**/
# define SNT_PP_SEQ_CAT_S_I_A(s, seq) SNT_PP_SEQ_FOLD_LEFT_ ## s(SNT_PP_SEQ_CAT_O, SNT_PP_SEQ_HEAD(seq), SNT_PP_SEQ_TAIL(seq))
# define SNT_PP_SEQ_CAT_S_I_B(s, seq) SNT_PP_SEQ_HEAD(seq)
#
# endif
