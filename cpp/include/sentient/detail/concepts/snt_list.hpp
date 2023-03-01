//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_DETAIL_CONCEPTS_SNT_LIST_HPP
#define SENTIENT_DETAIL_CONCEPTS_SNT_LIST_HPP

#include <sentient/detail/concepts/std_list.hpp>

#include <concepts>

namespace snt::detail::concepts {

template <typename List>
concept snt_list = std_list<List> && requires(List) {
    typename List::serialized_size_field_type;
};

}

#endif