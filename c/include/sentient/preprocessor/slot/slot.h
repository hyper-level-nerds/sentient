//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SLOT_SLOT_H
# define SENTIENT_PREPROCESSOR_SLOT_SLOT_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/slot/detail/def.h>
#
# /* SNT_PP_ASSIGN_SLOT */
#
# define SNT_PP_ASSIGN_SLOT(i) SNT_PP_CAT(SNT_PP_ASSIGN_SLOT_, i)
#
# define SNT_PP_ASSIGN_SLOT_1 <sentient/preprocessor/slot/detail/slot1.h>
# define SNT_PP_ASSIGN_SLOT_2 <sentient/preprocessor/slot/detail/slot2.h>
# define SNT_PP_ASSIGN_SLOT_3 <sentient/preprocessor/slot/detail/slot3.h>
# define SNT_PP_ASSIGN_SLOT_4 <sentient/preprocessor/slot/detail/slot4.h>
# define SNT_PP_ASSIGN_SLOT_5 <sentient/preprocessor/slot/detail/slot5.h>
#
# /* SNT_PP_SLOT */
#
# define SNT_PP_SLOT(i) SNT_PP_CAT(SNT_PP_SLOT_, i)()
#
# endif
