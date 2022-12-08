//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_DETAIL_GET_VALUE_TYPE_HPP
#define SENTIENT_DETAIL_GET_VALUE_TYPE_HPP

namespace snt {
namespace detail {

template <typename Type>
struct get_value_type { using type = typename Type::value_type; };
template <typename Type>
using get_value_type_t = get_value_type<Type>::type;

}
}

#endif