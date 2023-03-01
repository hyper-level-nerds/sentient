# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2019.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef SENTIENT_PREPROCESSOR_VARIADIC_DETAIL_HAS_OPT_H
# define SENTIENT_PREPROCESSOR_VARIADIC_DETAIL_HAS_OPT_H
#
# include <sentient/preprocessor/config/config.h>
#
# if defined(__cplusplus) && __cplusplus > 201703L
#
# if SNT_PP_VARIADICS_MSVC
# include <sentient/preprocessor/cat.h>
# endif
#
# define SNT_PP_VARIADIC_HAS_OPT_FUNCTION(...) \
    __VA_OPT__(,) , 1, 0 \
/**/
#
# if SNT_PP_VARIADICS_MSVC
# define SNT_PP_VARIADIC_HAS_OPT_ELEM0(e0, ...) SNT_PP_CAT(SNT_PP_VARIADIC_HAS_OPT_ELEM_0(e0,__VA_ARGS__),)
# define SNT_PP_VARIADIC_HAS_OPT_ELEM2(e0, ...) SNT_PP_CAT(SNT_PP_VARIADIC_HAS_OPT_ELEM_2(e0,__VA_ARGS__),)
# else
# define SNT_PP_VARIADIC_HAS_OPT_ELEM0(e0, ...) SNT_PP_VARIADIC_HAS_OPT_ELEM_0(e0,__VA_ARGS__)
# define SNT_PP_VARIADIC_HAS_OPT_ELEM2(e0, ...) SNT_PP_VARIADIC_HAS_OPT_ELEM_2(e0,__VA_ARGS__)
# endif
# define SNT_PP_VARIADIC_HAS_OPT_ELEM_0(e0, ...) e0
# define SNT_PP_VARIADIC_HAS_OPT_ELEM_2(e0, e1, e2, ...) e2
#
# endif
#
# endif
