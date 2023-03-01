//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SLOT_DETAIL_DEF_H
# define SENTIENT_PREPROCESSOR_SLOT_DETAIL_DEF_H
#
# /* SNT_PP_SLOT_OFFSET_x */
#
# define SNT_PP_SLOT_OFFSET_10(x) (x) % 1000000000UL
# define SNT_PP_SLOT_OFFSET_9(x) SNT_PP_SLOT_OFFSET_10(x) % 100000000UL
# define SNT_PP_SLOT_OFFSET_8(x) SNT_PP_SLOT_OFFSET_9(x) % 10000000UL
# define SNT_PP_SLOT_OFFSET_7(x) SNT_PP_SLOT_OFFSET_8(x) % 1000000UL
# define SNT_PP_SLOT_OFFSET_6(x) SNT_PP_SLOT_OFFSET_7(x) % 100000UL
# define SNT_PP_SLOT_OFFSET_5(x) SNT_PP_SLOT_OFFSET_6(x) % 10000UL
# define SNT_PP_SLOT_OFFSET_4(x) SNT_PP_SLOT_OFFSET_5(x) % 1000UL
# define SNT_PP_SLOT_OFFSET_3(x) SNT_PP_SLOT_OFFSET_4(x) % 100UL
# define SNT_PP_SLOT_OFFSET_2(x) SNT_PP_SLOT_OFFSET_3(x) % 10UL
#
# /* SNT_PP_SLOT_CC_x */
#
# define SNT_PP_SLOT_CC_2(a, b) SNT_PP_SLOT_CC_2_D(a, b)
# define SNT_PP_SLOT_CC_3(a, b, c) SNT_PP_SLOT_CC_3_D(a, b, c)
# define SNT_PP_SLOT_CC_4(a, b, c, d) SNT_PP_SLOT_CC_4_D(a, b, c, d)
# define SNT_PP_SLOT_CC_5(a, b, c, d, e) SNT_PP_SLOT_CC_5_D(a, b, c, d, e)
# define SNT_PP_SLOT_CC_6(a, b, c, d, e, f) SNT_PP_SLOT_CC_6_D(a, b, c, d, e, f)
# define SNT_PP_SLOT_CC_7(a, b, c, d, e, f, g) SNT_PP_SLOT_CC_7_D(a, b, c, d, e, f, g)
# define SNT_PP_SLOT_CC_8(a, b, c, d, e, f, g, h) SNT_PP_SLOT_CC_8_D(a, b, c, d, e, f, g, h)
# define SNT_PP_SLOT_CC_9(a, b, c, d, e, f, g, h, i) SNT_PP_SLOT_CC_9_D(a, b, c, d, e, f, g, h, i)
# define SNT_PP_SLOT_CC_10(a, b, c, d, e, f, g, h, i, j) SNT_PP_SLOT_CC_10_D(a, b, c, d, e, f, g, h, i, j)
#
# define SNT_PP_SLOT_CC_2_D(a, b) a ## b
# define SNT_PP_SLOT_CC_3_D(a, b, c) a ## b ## c
# define SNT_PP_SLOT_CC_4_D(a, b, c, d) a ## b ## c ## d
# define SNT_PP_SLOT_CC_5_D(a, b, c, d, e) a ## b ## c ## d ## e
# define SNT_PP_SLOT_CC_6_D(a, b, c, d, e, f) a ## b ## c ## d ## e ## f
# define SNT_PP_SLOT_CC_7_D(a, b, c, d, e, f, g) a ## b ## c ## d ## e ## f ## g
# define SNT_PP_SLOT_CC_8_D(a, b, c, d, e, f, g, h) a ## b ## c ## d ## e ## f ## g ## h
# define SNT_PP_SLOT_CC_9_D(a, b, c, d, e, f, g, h, i) a ## b ## c ## d ## e ## f ## g ## h ## i
# define SNT_PP_SLOT_CC_10_D(a, b, c, d, e, f, g, h, i, j) a ## b ## c ## d ## e ## f ## g ## h ## i ## j
#
# endif
