//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_REMOVE_H
# define SENTIENT_PREPROCESSOR_SEQ_REMOVE_H
#
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/seq/first_n.h>
# include <sentient/preprocessor/seq/rest_n.h>
#
# /* SNT_PP_SEQ_REMOVE */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_REMOVE(seq, i) SNT_PP_SEQ_FIRST_N(i, seq) SNT_PP_SEQ_REST_N(SNT_PP_INC(i), seq)
# else
#    define SNT_PP_SEQ_REMOVE(seq, i) SNT_PP_SEQ_REMOVE_I(seq, i)
#    define SNT_PP_SEQ_REMOVE_I(seq, i) SNT_PP_SEQ_FIRST_N(i, seq) SNT_PP_SEQ_REST_N(SNT_PP_INC(i), seq)
# endif
#
# endif
