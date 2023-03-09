//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_SEQ_H
# define SENTIENT_PREPROCESSOR_SEQ_SEQ_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/seq/elem.h>
#
# /* SNT_PP_SEQ_HEAD */
#
# define SNT_PP_SEQ_HEAD(seq) SNT_PP_SEQ_ELEM(0, seq)
#
# /* SNT_PP_SEQ_TAIL */
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_SEQ_TAIL(seq) SNT_PP_SEQ_TAIL_1((seq))
#    define SNT_PP_SEQ_TAIL_1(par) SNT_PP_SEQ_TAIL_2 ## par
#    define SNT_PP_SEQ_TAIL_2(seq) SNT_PP_SEQ_TAIL_I ## seq
# elif SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#    define SNT_PP_SEQ_TAIL(seq) SNT_PP_SEQ_TAIL_ID(SNT_PP_SEQ_TAIL_I seq)
#    define SNT_PP_SEQ_TAIL_ID(id) id
# elif SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_TAIL(seq) SNT_PP_SEQ_TAIL_D(seq)
#    define SNT_PP_SEQ_TAIL_D(seq) SNT_PP_SEQ_TAIL_I seq
# else
#    define SNT_PP_SEQ_TAIL(seq) SNT_PP_SEQ_TAIL_I seq
# endif
#
# define SNT_PP_SEQ_TAIL_I(x)
#
# /* SNT_PP_SEQ_NIL */
#
# define SNT_PP_SEQ_NIL(x) (x)
#
# endif
