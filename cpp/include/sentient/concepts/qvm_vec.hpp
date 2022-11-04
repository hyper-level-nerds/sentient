//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONCEPTS_QVM_VEC_HPP
#define SENTIENT_CONCEPTS_QVM_VEC_HPP

#include <type_traits>

namespace snt {
namespace concepts {

template <typename QvmVec>
concept qvm_vec = requires(QvmVec) {
    std::declval<QvmVec>().a;
    
};

}
}

#endif