//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_TO_ARRAY_H
# define SENTIENT_PREPROCESSOR_SEQ_TO_ARRAY_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/seq/enum.h>
# include <sentient/preprocessor/seq/size.h>
#
# /* SNT_PP_SEQ_TO_ARRAY */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_TO_ARRAY(seq) (SNT_PP_SEQ_SIZE(seq), (SNT_PP_SEQ_ENUM(seq)))
# else
#    define SNT_PP_SEQ_TO_ARRAY(seq) SNT_PP_SEQ_TO_ARRAY_I(seq)
#    define SNT_PP_SEQ_TO_ARRAY_I(seq) (SNT_PP_SEQ_SIZE(seq), (SNT_PP_SEQ_ENUM(seq)))
# endif
#
# endif
