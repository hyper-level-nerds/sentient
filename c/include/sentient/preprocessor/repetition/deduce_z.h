//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_REPETITION_DEDUCE_Z_H
# define SENTIENT_PREPROCESSOR_REPETITION_DEDUCE_Z_H
#
# include <sentient/preprocessor/detail/auto_rec.h>
# include <sentient/preprocessor/repetition/repeat.h>
#
# /* SNT_PP_DEDUCE_Z */
#
# define SNT_PP_DEDUCE_Z() SNT_PP_AUTO_REC(SNT_PP_REPEAT_P, 4)
#
# endif
