//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONCEPTS_COMPLEX_HPP
#define SENTIENT_CONCEPTS_COMPLEX_HPP

#include <type_traits>

namespace snt {
namespace concepts {

template <typename Complex>
concept complex = requires(Complex) {
    typename Complex::value_type;
    std::declval<Complex>().real();
    std::declval<Complex>().imag();
};

}
}

#endif