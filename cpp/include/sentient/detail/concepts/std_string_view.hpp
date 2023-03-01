//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_DETAIL_CONCEPTS_STD_STRING_VIEW_HPP
#define SENTIENT_DETAIL_CONCEPTS_STD_STRING_VIEW_HPP

#include <iterator>
#include <concepts>

namespace snt::detail::concepts {

template <typename StringView>
concept std_string_view = requires(StringView) {
    typename StringView::value_type;
    typename StringView::size_type;
    typename StringView::difference_type;
    typename StringView::reference;
    typename StringView::const_reference;
    typename StringView::pointer;
    typename StringView::const_pointer;
    typename StringView::iterator;
    typename StringView::const_iterator;
    typename StringView::reverse_iterator;
    typename StringView::const_reverse_iterator;
    typename StringView::traits_type;
    typename std::invoke_result<decltype(&StringView::remove_prefix), StringView*, std::size_t>;
    typename std::invoke_result<decltype(&StringView::remove_suffix), StringView*, std::size_t>;
    std::declval<StringView>().data();
    std::declval<StringView>().size();
    std::declval<StringView>().begin();
    std::declval<StringView>().end();
    std::declval<StringView>().cbegin();
    std::declval<StringView>().cend();
    std::declval<StringView>().crbegin();
    std::declval<StringView>().crend();
    std::declval<StringView>().empty();
    std::declval<StringView>().substr(0, 0);
    typename std::iterator_traits<
        typename StringView::iterator
    >::iterator_category::bidirectional_iterator_tag;
    typename std::iterator_traits<
        typename StringView::iterator
    >::iterator_category::forward_iterator_tag;
    typename std::iterator_traits<
        typename StringView::iterator
    >::iterator_category::input_iterator_tag;
};

}

#endif