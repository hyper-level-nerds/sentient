//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_DETAIL_CONCEPTS_GLM_VEC_HPP
#define SENTIENT_DETAIL_CONCEPTS_GLM_VEC_HPP

#include <type_traits>

namespace snt::detail::concepts {

template <typename GlmVec>
concept glm_vec = requires(GlmVec) {
    typename GlmVec::type;
    typename GlmVec::value_type;
    typename GlmVec::length_type;
    typename GlmVec::bool_type;
    GlmVec::length();
    std::declval<GlmVec>().value;
};

}

#endif