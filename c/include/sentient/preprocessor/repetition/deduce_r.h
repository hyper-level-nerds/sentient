//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_REPETITION_DEDUCE_R_H
# define SENTIENT_PREPROCESSOR_REPETITION_DEDUCE_R_H
#
# include <sentient/preprocessor/config/config.h>
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# include <sentient/preprocessor/detail/auto_rec.h>
# include <sentient/preprocessor/repetition/for.h>
#
# /* SNT_PP_DEDUCE_R */
#
# define SNT_PP_DEDUCE_R() SNT_PP_AUTO_REC(SNT_PP_FOR_P, 256)
#
# else
#
# /* SNT_PP_DEDUCE_R */
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/detail/auto_rec.h>
# include <sentient/preprocessor/repetition/for.h>
# include <sentient/preprocessor/config/limits.h>
#
# if SNT_PP_LIMIT_FOR == 256
# define SNT_PP_DEDUCE_R() SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_FOR_P, 256))
# elif SNT_PP_LIMIT_FOR == 512
# define SNT_PP_DEDUCE_R() SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_FOR_P, 512))
# elif SNT_PP_LIMIT_FOR == 1024
# define SNT_PP_DEDUCE_R() SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_FOR_P, 1024))
# else
# error Incorrect value for the SNT_PP_LIMIT_FOR limit
# endif
#
# endif
#
# endif
