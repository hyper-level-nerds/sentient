//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_STRINGIZE_H
# define SENTIENT_PREPROCESSOR_STRINGIZE_H
#
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_STRINGIZE */
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#    define SNT_PP_STRINGIZE(text) SNT_PP_STRINGIZE_A((text))
#    define SNT_PP_STRINGIZE_A(arg) SNT_PP_STRINGIZE_I arg
# elif SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_STRINGIZE(text) SNT_PP_STRINGIZE_OO((text))
#    define SNT_PP_STRINGIZE_OO(par) SNT_PP_STRINGIZE_I ## par
# else
#    define SNT_PP_STRINGIZE(text) SNT_PP_STRINGIZE_I(text)
# endif
#
# define SNT_PP_STRINGIZE_I(...) #__VA_ARGS__
#
# endif
