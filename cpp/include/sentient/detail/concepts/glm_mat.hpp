//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_DETAIL_CONCEPTS_GLM_MAT_HPP
#define SENTIENT_DETAIL_CONCEPTS_GLM_MAT_HPP

#include <type_traits>

namespace snt::detail::concepts {

template <typename GlmMat>
concept glm_mat = requires(GlmMat) {
    typename GlmMat::type;
    typename GlmMat::value_type;
    typename GlmMat::length_type;
    typename GlmMat::transpose_type;
    typename GlmMat::row_type;
    typename GlmMat::col_type;
    GlmMat::length();
    std::declval<GlmMat>().value;
};

}

#endif