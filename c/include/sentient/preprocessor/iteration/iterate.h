//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_ITERATION_ITERATE_H
# define SENTIENT_PREPROCESSOR_ITERATION_ITERATE_H
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/array/elem.h>
# include <sentient/preprocessor/array/size.h>
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/slot/slot.h>
# include <sentient/preprocessor/tuple/elem.h>
#
# /* SNT_PP_ITERATION_DEPTH */
#
# define SNT_PP_ITERATION_DEPTH() 0
#
# /* SNT_PP_ITERATION */
#
# define SNT_PP_ITERATION() SNT_PP_CAT(SNT_PP_ITERATION_, SNT_PP_ITERATION_DEPTH())
#
# /* SNT_PP_ITERATION_START && SNT_PP_ITERATION_FINISH */
#
# define SNT_PP_ITERATION_START() SNT_PP_CAT(SNT_PP_ITERATION_START_, SNT_PP_ITERATION_DEPTH())
# define SNT_PP_ITERATION_FINISH() SNT_PP_CAT(SNT_PP_ITERATION_FINISH_, SNT_PP_ITERATION_DEPTH())
#
# /* SNT_PP_ITERATION_FLAGS */
#
# define SNT_PP_ITERATION_FLAGS() (SNT_PP_CAT(SNT_PP_ITERATION_FLAGS_, SNT_PP_ITERATION_DEPTH())())
#
# /* SNT_PP_FRAME_ITERATION */
#
# define SNT_PP_FRAME_ITERATION(i) SNT_PP_CAT(SNT_PP_ITERATION_, i)
#
# /* SNT_PP_FRAME_START && SNT_PP_FRAME_FINISH */
#
# define SNT_PP_FRAME_START(i) SNT_PP_CAT(SNT_PP_ITERATION_START_, i)
# define SNT_PP_FRAME_FINISH(i) SNT_PP_CAT(SNT_PP_ITERATION_FINISH_, i)
#
# /* SNT_PP_FRAME_FLAGS */
#
# define SNT_PP_FRAME_FLAGS(i) (SNT_PP_CAT(SNT_PP_ITERATION_FLAGS_, i)())
#
# /* SNT_PP_RELATIVE_ITERATION */
#
# define SNT_PP_RELATIVE_ITERATION(i) SNT_PP_CAT(SNT_PP_RELATIVE_, i)(SNT_PP_ITERATION_)
#
# define SNT_PP_RELATIVE_0(m) SNT_PP_CAT(m, SNT_PP_ITERATION_DEPTH())
# define SNT_PP_RELATIVE_1(m) SNT_PP_CAT(m, SNT_PP_DEC(SNT_PP_ITERATION_DEPTH()))
# define SNT_PP_RELATIVE_2(m) SNT_PP_CAT(m, SNT_PP_DEC(SNT_PP_DEC(SNT_PP_ITERATION_DEPTH())))
# define SNT_PP_RELATIVE_3(m) SNT_PP_CAT(m, SNT_PP_DEC(SNT_PP_DEC(SNT_PP_DEC(SNT_PP_ITERATION_DEPTH()))))
# define SNT_PP_RELATIVE_4(m) SNT_PP_CAT(m, SNT_PP_DEC(SNT_PP_DEC(SNT_PP_DEC(SNT_PP_DEC(SNT_PP_ITERATION_DEPTH())))))
#
# /* SNT_PP_RELATIVE_START && SNT_PP_RELATIVE_FINISH */
#
# define SNT_PP_RELATIVE_START(i) SNT_PP_CAT(SNT_PP_RELATIVE_, i)(SNT_PP_ITERATION_START_)
# define SNT_PP_RELATIVE_FINISH(i) SNT_PP_CAT(SNT_PP_RELATIVE_, i)(SNT_PP_ITERATION_FINISH_)
#
# /* SNT_PP_RELATIVE_FLAGS */
#
# define SNT_PP_RELATIVE_FLAGS(i) (SNT_PP_CAT(SNT_PP_RELATIVE_, i)(SNT_PP_ITERATION_FLAGS_)())
#
# /* SNT_PP_ITERATE */
#
# define SNT_PP_ITERATE() SNT_PP_CAT(SNT_PP_ITERATE_, SNT_PP_INC(SNT_PP_ITERATION_DEPTH()))
#
# define SNT_PP_ITERATE_1 <sentient/preprocessor/iteration/detail/iter/forward1.h>
# define SNT_PP_ITERATE_2 <sentient/preprocessor/iteration/detail/iter/forward2.h>
# define SNT_PP_ITERATE_3 <sentient/preprocessor/iteration/detail/iter/forward3.h>
# define SNT_PP_ITERATE_4 <sentient/preprocessor/iteration/detail/iter/forward4.h>
# define SNT_PP_ITERATE_5 <sentient/preprocessor/iteration/detail/iter/forward5.h>
#
# endif
