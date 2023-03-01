//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_FOLD_RIGHT_H
# define SENTIENT_PREPROCESSOR_LIST_FOLD_RIGHT_H
#
# include <sentient/preprocessor/config/config.h>
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/debug/error.h>
# include <sentient/preprocessor/detail/auto_rec.h>
#
# if 0
#    define SNT_PP_LIST_FOLD_RIGHT(op, state, list)
# endif
#
# define SNT_PP_LIST_FOLD_RIGHT SNT_PP_CAT(SNT_PP_LIST_FOLD_RIGHT_, SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 256))
#
# define SNT_PP_LIST_FOLD_RIGHT_257(o, s, l) SNT_PP_ERROR(0x0004)
#
# define SNT_PP_LIST_FOLD_RIGHT_D(d, o, s, l) SNT_PP_LIST_FOLD_RIGHT_ ## d(o, s, l)
# define SNT_PP_LIST_FOLD_RIGHT_2ND SNT_PP_LIST_FOLD_RIGHT
# define SNT_PP_LIST_FOLD_RIGHT_2ND_D SNT_PP_LIST_FOLD_RIGHT_D
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    include <sentient/preprocessor/list/detail/edg/fold_right.h>
# else
#    include <sentient/preprocessor/list/detail/fold_right.h>
# endif
#
# else
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/debug/error.h>
# include <sentient/preprocessor/detail/auto_rec.h>
#
# if 0
#    define SNT_PP_LIST_FOLD_RIGHT(op, state, list)
# endif
#
# include <sentient/preprocessor/config/limits.h>
#
# if SNT_PP_LIMIT_WHILE == 256
# define SNT_PP_LIST_FOLD_RIGHT SNT_PP_CAT(SNT_PP_LIST_FOLD_RIGHT_, SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 256)))
# define SNT_PP_LIST_FOLD_RIGHT_257(o, s, l) SNT_PP_ERROR(0x0004)
# elif SNT_PP_LIMIT_WHILE == 512
# define SNT_PP_LIST_FOLD_RIGHT SNT_PP_CAT(SNT_PP_LIST_FOLD_RIGHT_, SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 512)))
# define SNT_PP_LIST_FOLD_RIGHT_513(o, s, l) SNT_PP_ERROR(0x0004)
# elif SNT_PP_LIMIT_WHILE == 1024
# define SNT_PP_LIST_FOLD_RIGHT SNT_PP_CAT(SNT_PP_LIST_FOLD_RIGHT_, SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 1024)))
# define SNT_PP_LIST_FOLD_RIGHT_1025(o, s, l) SNT_PP_ERROR(0x0004)
# else
# error Incorrect value for the SNT_PP_LIMIT_WHILE limit
# endif
#
# define SNT_PP_LIST_FOLD_RIGHT_D(d, o, s, l) SNT_PP_LIST_FOLD_RIGHT_ ## d(o, s, l)
# define SNT_PP_LIST_FOLD_RIGHT_2ND SNT_PP_LIST_FOLD_RIGHT
# define SNT_PP_LIST_FOLD_RIGHT_2ND_D SNT_PP_LIST_FOLD_RIGHT_D
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    include <sentient/preprocessor/list/detail/edg/fold_right.h>
# else
#    include <sentient/preprocessor/list/detail/fold_right.h>
# endif
#
# endif
#
# endif
