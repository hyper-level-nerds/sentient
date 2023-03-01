# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2011.                                    *
#  *     (C) Copyright Paul Mensonides 2011.                                  *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef SENTIENT_PREPROCESSOR_VARIADIC_SIZE_H
# define SENTIENT_PREPROCESSOR_VARIADIC_SIZE_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/facilities/check_empty.h>
#
# /* SNT_PP_VARIADIC_SIZE */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
#    if SNT_PP_VARIADIC_HAS_OPT()
#       if SNT_PP_VARIADICS_MSVC
#           define SNT_PP_VARIADIC_SIZE_NOT_EMPTY(...) SNT_PP_CAT(SNT_PP_VARIADIC_SIZE_I(__VA_ARGS__, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1,),)
#       else
#           define SNT_PP_VARIADIC_SIZE_NOT_EMPTY(...) SNT_PP_VARIADIC_SIZE_I(__VA_ARGS__, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1,)
#       endif
#       define SNT_PP_VARIADIC_SIZE_EMPTY(...) 0
#       define SNT_PP_VARIADIC_SIZE(...) SNT_PP_IIF(SNT_PP_CHECK_EMPTY(__VA_ARGS__),SNT_PP_VARIADIC_SIZE_EMPTY,SNT_PP_VARIADIC_SIZE_NOT_EMPTY)(__VA_ARGS__)
#    elif SNT_PP_VARIADICS_MSVC
#       define SNT_PP_VARIADIC_SIZE(...) SNT_PP_CAT(SNT_PP_VARIADIC_SIZE_I(__VA_ARGS__, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1,),)
#    else
#       define SNT_PP_VARIADIC_SIZE(...) SNT_PP_VARIADIC_SIZE_I(__VA_ARGS__, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1,)
#    endif
#    define SNT_PP_VARIADIC_SIZE_I(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52, e53, e54, e55, e56, e57, e58, e59, e60, e61, e62, e63, size, ...) size
#
# else
#
#    if SNT_PP_VARIADIC_HAS_OPT()
#       define SNT_PP_VARIADIC_SIZE_EMPTY(...) 0
#       define SNT_PP_VARIADIC_SIZE(...) SNT_PP_IIF(SNT_PP_CHECK_EMPTY(__VA_ARGS__),SNT_PP_VARIADIC_SIZE_EMPTY,SNT_PP_VARIADIC_DO_SIZE)(__VA_ARGS__)
#    else
#       define SNT_PP_VARIADIC_SIZE(...) SNT_PP_VARIADIC_DO_SIZE(__VA_ARGS__)
#    endif
#
# include <sentient/preprocessor/config/limits.h>
#
# if SNT_PP_LIMIT_VARIADIC == 64
# include <sentient/preprocessor/variadic/limits/size_64.h>
# elif SNT_PP_LIMIT_VARIADIC == 128
# include <sentient/preprocessor/variadic/limits/size_128.h>
# elif SNT_PP_LIMIT_VARIADIC == 256
# include <sentient/preprocessor/variadic/limits/size_256.h>
# else
# error Incorrect value for the SNT_PP_LIMIT_TUPLE limit
# endif
#
# endif
#
# endif
