//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_DETAIL_CONCEPTS_STD_STRING_HPP
#define SENTIENT_DETAIL_CONCEPTS_STD_STRING_HPP

#include <iterator>
#include <concepts>

namespace snt::detail::concepts {

template <typename String>
concept std_string = requires(String) {
    typename String::value_type;
    typename String::allocator_type;
    typename String::size_type;
    typename String::difference_type;
    typename String::reference;
    typename String::const_reference;
    typename String::pointer;
    typename String::const_pointer;
    typename String::iterator;
    typename String::const_iterator;
    typename String::reverse_iterator;
    typename String::const_reverse_iterator;
    typename String::traits_type;
    std::declval<String>().data();
    std::declval<String>().size();
    std::declval<String>().capacity();
    std::declval<String>().begin();
    std::declval<String>().end();
    std::declval<String>().cbegin();
    std::declval<String>().cend();
    std::declval<String>().crbegin();
    std::declval<String>().crend();
    std::declval<String>().empty();
    std::declval<String>().substr(0, 0);
    typename std::iterator_traits<
        typename String::iterator
    >::iterator_category::bidirectional_iterator_tag;
    typename std::iterator_traits<
        typename String::iterator
    >::iterator_category::forward_iterator_tag;
    typename std::iterator_traits<
        typename String::iterator
    >::iterator_category::input_iterator_tag;
};

}

#endif