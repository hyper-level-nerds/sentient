//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_DEBUG_ERROR_H
# define SENTIENT_PREPROCESSOR_DEBUG_ERROR_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_ERROR */
#
# if SNT_PP_CONFIG_ERRORS
#    define SNT_PP_ERROR(code) SNT_PP_CAT(SNT_PP_ERROR_, code)
# endif
#
# define SNT_PP_ERROR_0x0000 SNT_PP_ERROR(0x0000, SNT_PP_INDEX_OUT_OF_BOUNDS)
# define SNT_PP_ERROR_0x0001 SNT_PP_ERROR(0x0001, SNT_PP_WHILE_OVERFLOW)
# define SNT_PP_ERROR_0x0002 SNT_PP_ERROR(0x0002, SNT_PP_FOR_OVERFLOW)
# define SNT_PP_ERROR_0x0003 SNT_PP_ERROR(0x0003, SNT_PP_REPEAT_OVERFLOW)
# define SNT_PP_ERROR_0x0004 SNT_PP_ERROR(0x0004, SNT_PP_LIST_FOLD_OVERFLOW)
# define SNT_PP_ERROR_0x0005 SNT_PP_ERROR(0x0005, SNT_PP_SEQ_FOLD_OVERFLOW)
# define SNT_PP_ERROR_0x0006 SNT_PP_ERROR(0x0006, SNT_PP_ARITHMETIC_OVERFLOW)
# define SNT_PP_ERROR_0x0007 SNT_PP_ERROR(0x0007, SNT_PP_DIVISION_BY_ZERO)
#
# endif
