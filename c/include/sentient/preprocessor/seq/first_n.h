//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_FIRST_N_H
# define SENTIENT_PREPROCESSOR_SEQ_FIRST_N_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/if.h>
# include <sentient/preprocessor/seq/detail/split.h>
# include <sentient/preprocessor/tuple/eat.h>
# include <sentient/preprocessor/tuple/elem.h>
#
# /* SNT_PP_SEQ_FIRST_N */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_FIRST_N(n, seq) SNT_PP_IF(n, SNT_PP_TUPLE_ELEM, SNT_PP_TUPLE_EAT_3)(2, 0, SNT_PP_SEQ_SPLIT(n, seq (nil)))
# else
#    define SNT_PP_SEQ_FIRST_N(n, seq) SNT_PP_SEQ_FIRST_N_I(n, seq)
#    define SNT_PP_SEQ_FIRST_N_I(n, seq) SNT_PP_IF(n, SNT_PP_TUPLE_ELEM, SNT_PP_TUPLE_EAT_3)(2, 0, SNT_PP_SEQ_SPLIT(n, seq (nil)))
# endif
#
# endif
