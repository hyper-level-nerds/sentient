//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_INSERT_H
# define SENTIENT_PREPROCESSOR_SEQ_INSERT_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/seq/first_n.h>
# include <sentient/preprocessor/seq/rest_n.h>
#
# /* SNT_PP_SEQ_INSERT */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_INSERT(seq, i, elem) SNT_PP_SEQ_FIRST_N(i, seq) (elem) SNT_PP_SEQ_REST_N(i, seq)
# else
#    define SNT_PP_SEQ_INSERT(seq, i, elem) SNT_PP_SEQ_INSERT_I(seq, i, elem)
#    define SNT_PP_SEQ_INSERT_I(seq, i, elem) SNT_PP_SEQ_FIRST_N(i, seq) (elem) SNT_PP_SEQ_REST_N(i, seq)
# endif
#
# endif
