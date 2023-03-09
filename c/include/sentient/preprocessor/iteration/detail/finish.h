//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# include <sentient/preprocessor/slot/detail/shared.h>
#
# undef SNT_PP_LOCAL_FE
#
# undef SNT_PP_LOCAL_FE_DIGIT_1
# undef SNT_PP_LOCAL_FE_DIGIT_2
# undef SNT_PP_LOCAL_FE_DIGIT_3
# undef SNT_PP_LOCAL_FE_DIGIT_4
# undef SNT_PP_LOCAL_FE_DIGIT_5
# undef SNT_PP_LOCAL_FE_DIGIT_6
# undef SNT_PP_LOCAL_FE_DIGIT_7
# undef SNT_PP_LOCAL_FE_DIGIT_8
# undef SNT_PP_LOCAL_FE_DIGIT_9
# undef SNT_PP_LOCAL_FE_DIGIT_10
#
# if SNT_PP_SLOT_TEMP_3 == 0
#    define SNT_PP_LOCAL_FE_DIGIT_3 0
# elif SNT_PP_SLOT_TEMP_3 == 1
#    define SNT_PP_LOCAL_FE_DIGIT_3 1
# elif SNT_PP_SLOT_TEMP_3 == 2
#    define SNT_PP_LOCAL_FE_DIGIT_3 2
# elif SNT_PP_SLOT_TEMP_3 == 3
#    define SNT_PP_LOCAL_FE_DIGIT_3 3
# elif SNT_PP_SLOT_TEMP_3 == 4
#    define SNT_PP_LOCAL_FE_DIGIT_3 4
# elif SNT_PP_SLOT_TEMP_3 == 5
#    define SNT_PP_LOCAL_FE_DIGIT_3 5
# elif SNT_PP_SLOT_TEMP_3 == 6
#    define SNT_PP_LOCAL_FE_DIGIT_3 6
# elif SNT_PP_SLOT_TEMP_3 == 7
#    define SNT_PP_LOCAL_FE_DIGIT_3 7
# elif SNT_PP_SLOT_TEMP_3 == 8
#    define SNT_PP_LOCAL_FE_DIGIT_3 8
# elif SNT_PP_SLOT_TEMP_3 == 9
#    define SNT_PP_LOCAL_FE_DIGIT_3 9
# endif
#
# if SNT_PP_SLOT_TEMP_2 == 0
#    define SNT_PP_LOCAL_FE_DIGIT_2 0
# elif SNT_PP_SLOT_TEMP_2 == 1
#    define SNT_PP_LOCAL_FE_DIGIT_2 1
# elif SNT_PP_SLOT_TEMP_2 == 2
#    define SNT_PP_LOCAL_FE_DIGIT_2 2
# elif SNT_PP_SLOT_TEMP_2 == 3
#    define SNT_PP_LOCAL_FE_DIGIT_2 3
# elif SNT_PP_SLOT_TEMP_2 == 4
#    define SNT_PP_LOCAL_FE_DIGIT_2 4
# elif SNT_PP_SLOT_TEMP_2 == 5
#    define SNT_PP_LOCAL_FE_DIGIT_2 5
# elif SNT_PP_SLOT_TEMP_2 == 6
#    define SNT_PP_LOCAL_FE_DIGIT_2 6
# elif SNT_PP_SLOT_TEMP_2 == 7
#    define SNT_PP_LOCAL_FE_DIGIT_2 7
# elif SNT_PP_SLOT_TEMP_2 == 8
#    define SNT_PP_LOCAL_FE_DIGIT_2 8
# elif SNT_PP_SLOT_TEMP_2 == 9
#    define SNT_PP_LOCAL_FE_DIGIT_2 9
# endif
#
# if SNT_PP_SLOT_TEMP_1 == 0
#    define SNT_PP_LOCAL_FE_DIGIT_1 0
# elif SNT_PP_SLOT_TEMP_1 == 1
#    define SNT_PP_LOCAL_FE_DIGIT_1 1
# elif SNT_PP_SLOT_TEMP_1 == 2
#    define SNT_PP_LOCAL_FE_DIGIT_1 2
# elif SNT_PP_SLOT_TEMP_1 == 3
#    define SNT_PP_LOCAL_FE_DIGIT_1 3
# elif SNT_PP_SLOT_TEMP_1 == 4
#    define SNT_PP_LOCAL_FE_DIGIT_1 4
# elif SNT_PP_SLOT_TEMP_1 == 5
#    define SNT_PP_LOCAL_FE_DIGIT_1 5
# elif SNT_PP_SLOT_TEMP_1 == 6
#    define SNT_PP_LOCAL_FE_DIGIT_1 6
# elif SNT_PP_SLOT_TEMP_1 == 7
#    define SNT_PP_LOCAL_FE_DIGIT_1 7
# elif SNT_PP_SLOT_TEMP_1 == 8
#    define SNT_PP_LOCAL_FE_DIGIT_1 8
# elif SNT_PP_SLOT_TEMP_1 == 9
#    define SNT_PP_LOCAL_FE_DIGIT_1 9
# endif
#
# if SNT_PP_LOCAL_FE_DIGIT_3
#    define SNT_PP_LOCAL_FE() SNT_PP_SLOT_CC_3(SNT_PP_LOCAL_FE_DIGIT_3, SNT_PP_LOCAL_FE_DIGIT_2, SNT_PP_LOCAL_FE_DIGIT_1)
# elif SNT_PP_LOCAL_FE_DIGIT_2
#    define SNT_PP_LOCAL_FE() SNT_PP_SLOT_CC_2(SNT_PP_LOCAL_FE_DIGIT_2, SNT_PP_LOCAL_FE_DIGIT_1)
# else
#    define SNT_PP_LOCAL_FE() SNT_PP_LOCAL_FE_DIGIT_1
# endif
