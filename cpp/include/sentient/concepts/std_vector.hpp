//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONCEPTS_STD_VECTOR_HPP
#define SENTIENT_CONCEPTS_STD_VECTOR_HPP

#include <type_traits>
#include <concepts>

namespace snt {
namespace concepts {

template <typename Container>
concept std_vector = requires(Container) {
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
    std::declval<Container>().data();
    std::declval<Container>().size();
    std::declval<Container>().capacity();
    std::declval<Container>().begin();
    std::declval<Container>().end();
    std::declval<Container>().cbegin();
    std::declval<Container>().cend();
    std::declval<Container>().crbegin();
    std::declval<Container>().crend();
    std::declval<Container>().empty();
    typename std::iterator_traits<
        typename Container::iterator
    >::iterator_category::bidirectional_iterator_tag;
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