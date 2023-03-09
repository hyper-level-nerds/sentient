//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_VARIADIC_DETAIL_IS_SINGLE_RETURN_H
# define SENTIENT_PREPROCESSOR_VARIADIC_DETAIL_IS_SINGLE_RETURN_H
#
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_VARIADIC_IS_SINGLE_RETURN */
#
# if SNT_PP_VARIADICS_MSVC
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/facilities/is_1.h>
# include <sentient/preprocessor/variadic/size.h>
# define SNT_PP_VARIADIC_IS_SINGLE_RETURN(sr,nsr,...) \
    SNT_PP_IIF(SNT_PP_IS_1(SNT_PP_VARIADIC_SIZE(__VA_ARGS__)),sr,nsr) \
    /**/
# endif /* SNT_PP_VARIADICS_MSVC */
#
# endif /* SENTIENT_PREPROCESSOR_VARIADIC_DETAIL_IS_SINGLE_RETURN_H */
