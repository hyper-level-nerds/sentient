//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONCEPTS_ATOMIC_HPP
#define SENTIENT_CONCEPTS_ATOMIC_HPP

#include <type_traits>

namespace snt {
namespace concepts {

template <typename Type>
concept atomic = requires(Type) {
    typename Type::value_type;
    std::declval<Type>().is_lock_free();
    std::declval<Type>().notify_one();
    std::declval<Type>().notify_all();
    std::declval<Type>().store(typename Type::value_type{});
    std::declval<Type>().load();
};

}
}

#endif