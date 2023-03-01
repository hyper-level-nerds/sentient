# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# ifndef SENTIENT_PREPROCESSOR_DETAIL_SPLIT_H
# define SENTIENT_PREPROCESSOR_DETAIL_SPLIT_H
#
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_SPLIT */
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_SPLIT(n, im) SNT_PP_SPLIT_I((n, im))
#    define SNT_PP_SPLIT_I(par) SNT_PP_SPLIT_II ## par
#    define SNT_PP_SPLIT_II(n, a, b) SNT_PP_SPLIT_ ## n(a, b)
# elif SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#    define SNT_PP_SPLIT(n, im) SNT_PP_SPLIT_I(n((im)))
#    define SNT_PP_SPLIT_I(n) SNT_PP_SPLIT_ID(SNT_PP_SPLIT_II_ ## n)
#    define SNT_PP_SPLIT_II_0(s) SNT_PP_SPLIT_ID(SNT_PP_SPLIT_0 s)
#    define SNT_PP_SPLIT_II_1(s) SNT_PP_SPLIT_ID(SNT_PP_SPLIT_1 s)
#    define SNT_PP_SPLIT_ID(id) id
# else
#    define SNT_PP_SPLIT(n, im) SNT_PP_SPLIT_I(n)(im)
#    define SNT_PP_SPLIT_I(n) SNT_PP_SPLIT_ ## n
# endif
#
# define SNT_PP_SPLIT_0(a, b) a
# define SNT_PP_SPLIT_1(a, b) b
#
# endif
