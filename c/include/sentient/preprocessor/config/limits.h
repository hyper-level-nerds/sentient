//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_CONFIG_LIMITS_H
# define SENTIENT_PREPROCESSOR_CONFIG_LIMITS_H
#
# include <sentient/preprocessor/config/config.h>
#
# if defined(SNT_PP_LIMIT_DIM)
# undef SNT_PP_LIMIT_DIM
# endif
# if defined(SNT_PP_LIMIT_ITERATION_DIM)
# undef SNT_PP_LIMIT_ITERATION_DIM
# endif
# if defined(SNT_PP_LIMIT_SLOT_SIG)
# undef SNT_PP_LIMIT_SLOT_SIG
# endif
# if defined(SNT_PP_LIMIT_SLOT_COUNT)
# undef SNT_PP_LIMIT_SLOT_COUNT
# endif
# if defined(SNT_PP_LIMIT_WHILE)
# undef SNT_PP_LIMIT_WHILE
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# if defined(SNT_PP_LIMIT_MAG)
# undef SNT_PP_LIMIT_MAG
# endif
# if defined(SNT_PP_LIMIT_VARIADIC)
# undef SNT_PP_LIMIT_VARIADIC
# endif
# if defined(SNT_PP_LIMIT_TUPLE)
# undef SNT_PP_LIMIT_TUPLE
# endif
# if defined(SNT_PP_LIMIT_FOR)
# undef SNT_PP_LIMIT_FOR
# endif
# if defined(SNT_PP_LIMIT_REPEAT)
# undef SNT_PP_LIMIT_REPEAT
# endif
# if defined(SNT_PP_LIMIT_SEQ)
# undef SNT_PP_LIMIT_SEQ
# endif
# if defined(SNT_PP_LIMIT_ITERATION)
# undef SNT_PP_LIMIT_ITERATION
# endif
#
# define SNT_PP_LIMIT_MAG 256
# define SNT_PP_LIMIT_WHILE 256
# define SNT_PP_LIMIT_VARIADIC 64
# define SNT_PP_LIMIT_TUPLE 64
# define SNT_PP_LIMIT_FOR 256
# define SNT_PP_LIMIT_SEQ 256
# define SNT_PP_LIMIT_REPEAT 256
# define SNT_PP_LIMIT_ITERATION 256
#
#else
#
# if defined(SNT_PP_LIMIT_MAG)
# if !(SNT_PP_LIMIT_MAG == 256 || SNT_PP_LIMIT_MAG == 512 || SNT_PP_LIMIT_MAG == 1024)
# undef SNT_PP_LIMIT_MAG
# define SNT_PP_LIMIT_MAG 256
# define SNT_PP_LIMIT_WHILE 256
# else
# define SNT_PP_LIMIT_WHILE SNT_PP_LIMIT_MAG
# if !defined(SNT_PP_LIMIT_SEQ)
# define SNT_PP_LIMIT_SEQ SNT_PP_LIMIT_MAG
# endif
# endif
# else
# define SNT_PP_LIMIT_MAG 256
# define SNT_PP_LIMIT_WHILE 256
# endif
#
# if defined(SNT_PP_LIMIT_VARIADIC)
# if !(SNT_PP_LIMIT_VARIADIC == 64 || SNT_PP_LIMIT_VARIADIC == 128 || SNT_PP_LIMIT_VARIADIC == 256)
# undef SNT_PP_LIMIT_VARIADIC
# define SNT_PP_LIMIT_VARIADIC 64
# endif
# else
# define SNT_PP_LIMIT_VARIADIC 64
# endif
#
# if defined(SNT_PP_LIMIT_TUPLE)
# if !(SNT_PP_LIMIT_TUPLE == 64 || SNT_PP_LIMIT_TUPLE == 128 || SNT_PP_LIMIT_TUPLE == 256)
# undef SNT_PP_LIMIT_TUPLE
# define SNT_PP_LIMIT_TUPLE 64
# elif SNT_PP_LIMIT_TUPLE > SNT_PP_LIMIT_VARIADIC
# undef SNT_PP_LIMIT_VARIADIC
# define SNT_PP_LIMIT_VARIADIC SNT_PP_LIMIT_TUPLE
# endif
# else
# define SNT_PP_LIMIT_TUPLE 64
# endif
#
# if defined(SNT_PP_LIMIT_FOR)
# if !(SNT_PP_LIMIT_FOR == 256 || SNT_PP_LIMIT_FOR == 512 || SNT_PP_LIMIT_FOR == 1024)
# undef SNT_PP_LIMIT_FOR
# define SNT_PP_LIMIT_FOR 256
# elif SNT_PP_LIMIT_FOR > SNT_PP_LIMIT_MAG
# undef SNT_PP_LIMIT_FOR
# define SNT_PP_LIMIT_FOR SNT_PP_LIMIT_MAG
# endif
# else
# define SNT_PP_LIMIT_FOR 256
# endif
#
# if defined(SNT_PP_LIMIT_REPEAT)
# if !(SNT_PP_LIMIT_REPEAT == 256 || SNT_PP_LIMIT_REPEAT == 512 || SNT_PP_LIMIT_REPEAT == 1024)
# undef SNT_PP_LIMIT_REPEAT
# define SNT_PP_LIMIT_REPEAT 256
# elif SNT_PP_LIMIT_REPEAT > SNT_PP_LIMIT_MAG
# undef SNT_PP_LIMIT_REPEAT
# define SNT_PP_LIMIT_REPEAT SNT_PP_LIMIT_MAG
# endif
# else
# define SNT_PP_LIMIT_REPEAT 256
# endif
#
# if defined(SNT_PP_LIMIT_SEQ)
# if !(SNT_PP_LIMIT_SEQ == 256 || SNT_PP_LIMIT_SEQ == 512 || SNT_PP_LIMIT_SEQ == 1024)
# undef SNT_PP_LIMIT_SEQ
# define SNT_PP_LIMIT_SEQ 256
# elif SNT_PP_LIMIT_SEQ > SNT_PP_LIMIT_MAG
# undef SNT_PP_LIMIT_SEQ
# define SNT_PP_LIMIT_SEQ SNT_PP_LIMIT_MAG
# endif
# else
# define SNT_PP_LIMIT_SEQ 256
# endif
#
# if defined(SNT_PP_LIMIT_ITERATION)
# if !(SNT_PP_LIMIT_ITERATION == 256 || SNT_PP_LIMIT_ITERATION == 512 || SNT_PP_LIMIT_ITERATION == 1024)
# undef SNT_PP_LIMIT_ITERATION
# define SNT_PP_LIMIT_ITERATION 256
# elif SNT_PP_LIMIT_ITERATION > SNT_PP_LIMIT_MAG
# undef SNT_PP_LIMIT_ITERATION
# define SNT_PP_LIMIT_ITERATION SNT_PP_LIMIT_MAG
# endif
# else
# define SNT_PP_LIMIT_ITERATION 256
# endif
#
# endif
#
# define SNT_PP_LIMIT_DIM 3
# define SNT_PP_LIMIT_ITERATION_DIM 3
# define SNT_PP_LIMIT_SLOT_SIG 10
# define SNT_PP_LIMIT_SLOT_COUNT 5
#
# endif
