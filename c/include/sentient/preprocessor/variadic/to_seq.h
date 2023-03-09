//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_VARIADIC_TO_SEQ_H
# define SENTIENT_PREPROCESSOR_VARIADIC_TO_SEQ_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/tuple/to_seq.h>
#
# /* SNT_PP_VARIADIC_TO_SEQ */
#
# define SNT_PP_VARIADIC_TO_SEQ(...) SNT_PP_TUPLE_TO_SEQ((__VA_ARGS__))
#
# endif
