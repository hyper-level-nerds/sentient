//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONCEPTS_STD_SHARED_PTR_HPP
#define SENTIENT_CONCEPTS_STD_SHARED_PTR_HPP

#include <type_traits>

namespace snt {
namespace concepts {

template <typename SharedPtr>
concept std_shared_ptr = requires(SharedPtr) {
    typename SharedPtr::element_type;
    std::declval<SharedPtr>().get();
    std::declval<SharedPtr>().use_count();
    std::declval<SharedPtr>().unique();
};

} // snt
} // concepts

#endif