//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONCEPTS_STD_LIST_HPP
#define SENTIENT_CONCEPTS_STD_LIST_HPP

#include <type_traits>
#include <concepts>
#include <iterator>

namespace snt {
namespace concepts {

template <typename Container>
concept std_list = requires(Container) {
    typename Container::value_type;
    typename Container::allocator_type;
    typename Container::size_type;
    typename Container::difference_type;
    typename Container::reference;
    typename Container::const_reference;
    typename Container::pointer;
    typename Container::const_pointer;
    typename Container::iterator;
    typename Container::const_iterator;
    typename Container::reverse_iterator;
    typename Container::const_reverse_iterator;
    std::declval<Container>().get_allocator();
    std::declval<Container>().front();
    std::declval<Container>().back();
    std::declval<Container>().size();
    std::declval<Container>().max_size();
    std::declval<Container>().begin();
    std::declval<Container>().end();
    std::declval<Container>().cbegin();
    std::declval<Container>().cend();
    std::declval<Container>().crbegin();
    std::declval<Container>().crend();
    std::declval<Container>().empty();
    typename std::iterator_traits<
        typename Container::iterator
    >::iterator_category::forward_iterator_tag;
    typename std::iterator_traits<
        typename Container::iterator
    >::iterator_category::input_iterator_tag;
};
    
}
}

#endif