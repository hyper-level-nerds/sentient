//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_DEBUG_LINE_H
# define SENTIENT_PREPROCESSOR_DEBUG_LINE_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/iteration/iterate.h>
# include <sentient/preprocessor/stringize.h>
#
# /* SNT_PP_LINE */
#
# if SNT_PP_CONFIG_EXTENDED_LINE_INFO
#    define SNT_PP_LINE(line, file) line SNT_PP_CAT(SNT_PP_LINE_, SNT_PP_IS_ITERATING)(file)
#    define SNT_PP_LINE_SNT_PP_IS_ITERATING(file) #file
#    define SNT_PP_LINE_1(file) SNT_PP_STRINGIZE(file SNT_PP_CAT(SNT_PP_LINE_I_, SNT_PP_ITERATION_DEPTH())())
#    define SNT_PP_LINE_I_1() [SNT_PP_FRAME_ITERATION(1)]
#    define SNT_PP_LINE_I_2() SNT_PP_LINE_I_1()[SNT_PP_FRAME_ITERATION(2)]
#    define SNT_PP_LINE_I_3() SNT_PP_LINE_I_2()[SNT_PP_FRAME_ITERATION(3)]
#    define SNT_PP_LINE_I_4() SNT_PP_LINE_I_3()[SNT_PP_FRAME_ITERATION(4)]
#    define SNT_PP_LINE_I_5() SNT_PP_LINE_I_4()[SNT_PP_FRAME_ITERATION(5)]
# else
#    define SNT_PP_LINE(line, file) line __FILE__
# endif
#
# endif
