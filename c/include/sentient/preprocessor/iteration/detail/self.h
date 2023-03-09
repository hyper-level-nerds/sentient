//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# if !defined(SNT_PP_INDIRECT_SELF)
#    error SNT_PP_ERROR:  no indirect file to include
# endif
#
# define SNT_PP_IS_SELFISH 1
#
# include SNT_PP_INDIRECT_SELF
#
# undef SNT_PP_IS_SELFISH
# undef SNT_PP_INDIRECT_SELF