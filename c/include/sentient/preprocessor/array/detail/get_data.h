//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_ARRAY_DETAIL_GET_DATA_H
# define SENTIENT_PREPROCESSOR_ARRAY_DETAIL_GET_DATA_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/tuple/rem.h>
# include <sentient/preprocessor/control/if.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/facilities/is_1.h>
#
# /* SNT_PP_ARRAY_DETAIL_GET_DATA */
#
# define SNT_PP_ARRAY_DETAIL_GET_DATA_NONE(size, data)

# if !(SNT_PP_VARIADICS_MSVC && _MSC_VER <= 1400)
#    if SNT_PP_VARIADICS_MSVC
#       define SNT_PP_ARRAY_DETAIL_GET_DATA_ANY_VC_DEFAULT(size, data) SNT_PP_TUPLE_REM(size) data
#       define SNT_PP_ARRAY_DETAIL_GET_DATA_ANY_VC_CAT(size, data) SNT_PP_TUPLE_REM_CAT(size) data
#       define SNT_PP_ARRAY_DETAIL_GET_DATA_ANY(size, data) \
            SNT_PP_IIF \
                ( \
                SNT_PP_IS_1(size), \
                SNT_PP_ARRAY_DETAIL_GET_DATA_ANY_VC_CAT, \
                SNT_PP_ARRAY_DETAIL_GET_DATA_ANY_VC_DEFAULT \
                ) \
            (size,data) \
/**/
#    else
#       define SNT_PP_ARRAY_DETAIL_GET_DATA_ANY(size, data) SNT_PP_TUPLE_REM(size) data
#    endif
# else
#    define SNT_PP_ARRAY_DETAIL_GET_DATA_ANY(size, data) SNT_PP_TUPLE_REM(size) data
# endif

# define SNT_PP_ARRAY_DETAIL_GET_DATA(size, data) \
    SNT_PP_IF \
        ( \
        size, \
        SNT_PP_ARRAY_DETAIL_GET_DATA_ANY, \
        SNT_PP_ARRAY_DETAIL_GET_DATA_NONE \
        ) \
    (size,data) \
/**/
#
# endif /* SENTIENT_PREPROCESSOR_ARRAY_DETAIL_GET_DATA_H */
