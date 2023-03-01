//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_CONTAINER_BASIC_STRING_VIEW_HPP
#define SENTIENT_CONTAINER_BASIC_STRING_VIEW_HPP

#if __cplusplus >= 202002L

#include <string>
#include <memory>
#include <type_traits>
#include <stdexcept>
#include <ranges>

namespace snt {

/**
 * @author Jin (jaehwanspin@gmail.com)
 * @brief basic_string_view have its own size type to serialize
 *
 * @tparam CharType value type
 * @tparam PayloadSizeType payload size type for serialization
 * @tparam CharTraits traits type for CharType, default std::char_traits<CharType>
 * @tparam BaseContainer base standard string_view container type, default std::basic_string_view<...>
*/
template <
    class CharType,
    class PayloadSizeType,
    typename CharTraits = std::char_traits<CharType>,
    class BaseContainer =
        std::basic_string_view<
            CharType,
            CharTraits
        >
>
class basic_string_view : public BaseContainer
{
private:
    static_assert(std::is_integral_v<PayloadSizeType>, "PayloadSizeType must be integer");
    static_assert(std::is_unsigned_v<PayloadSizeType>, "PayloadSizeType must be unsigned integer");

    static constexpr const char* exceeded_message = "max size exceeded";

    using base_type = BaseContainer;

public:
    using traits_type = typename base_type::traits_type;
    using value_type = typename base_type::value_type;
    using pointer = typename base_type::pointer;
    using const_pointer = typename base_type::const_pointer;
    using reference = typename base_type::reference;
    using const_reference = typename base_type::const_reference;
    using iterator = typename base_type::iterator;
    using const_iterator = typename base_type::const_iterator;
    using reverse_iterator = typename base_type::reverse_iterator;
    using const_reverse_iterator = typename base_type::const_reverse_iterator;
    using size_type = typename base_type::size_type;
    using difference_type = typename base_type::difference_type;
    using payload_size_type = PayloadSizeType;

public:

	/////////////////////////////////////////////////////////////////
	//                      _                   _
	//   ___ ___  _ __  ___| |_ _ __ _   _  ___| |_ ___  _ __
	//  / __/ _ \| '_ \/ __| __| '__| | | |/ __| __/ _ \| '__|
	// | (_| (_) | | | \__ \ |_| |  | |_| | (__| || (_) | |
	//  \___\___/|_| |_|___/\__|_|   \__,_|\___|\__\___/|_|
	//
	/////////////////////////////////////////////////////////////////

	/////////////////////////////////////////////////////////////////
	// constructor 0
	/////////////////////////////////////////////////////////////////

	/**
	 * @brief standard string_view constructor spec default (c++20 ~)
	 */
    constexpr basic_string_view() noexcept :
		base_type()
	{ }

	/////////////////////////////////////////////////////////////////
	// constructor 1
	/////////////////////////////////////////////////////////////////

	/**
	 * @brief standard string_view constructor spec 1st (c++20 ~)
	 * @param other other object to copy
	 */
    constexpr basic_string_view(const basic_string_view& other) noexcept :
        base_type(other)
    { }

	/**
	 * @brief standard string_view constructor spec 1st (c++20 ~)
	 * @param other other object to copy
	 */
    constexpr basic_string_view(const base_type& other):
        base_type(other)
    {
        if (other.size() > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

	/////////////////////////////////////////////////////////////////
	// constructor 1
	/////////////////////////////////////////////////////////////////

    constexpr basic_string_view(const_pointer s, size_type count) :
        base_type(s, count)
    {
        if (count > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    constexpr basic_string_view(const_pointer s) :
        base_type(s)
    {
        if (traits_type::length(s) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    template <class It, class End>
    constexpr basic_string_view(It first, End last) :
        base_type(first, last)
    {
        if (std::distance(first, last) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    template <class R>
    explicit constexpr basic_string_view(R&& r) :
        base_type(std::move(r))
    {
        if (std::ranges::size(r) > this->max_size())
        {
            throw std::overflow_error(exceeded_message);
        }
    }

    constexpr basic_string_view(std::nullptr_t) = delete;

    constexpr size_type max_size() const noexcept
    {
        using nlim = std::numeric_limits<payload_size_type>;
        constexpr auto type_size_max =
            static_cast<std::size_t>(nlim::max());
        return type_size_max;
    }

};

template <typename PayloadSizeType>
using string_view = basic_string_view<char, PayloadSizeType>;
template <typename PayloadSizeType>
using wstring_view = basic_string_view<wchar_t, PayloadSizeType>;
template <typename PayloadSizeType>
using u8string_view = basic_string_view<char8_t, PayloadSizeType>;
template <typename PayloadSizeType>
using u16string_view = basic_string_view<char16_t, PayloadSizeType>;
template <typename PayloadSizeType>
using u32string_view = basic_string_view<char32_t, PayloadSizeType>;

}

#else
#error "Go get the compiler that supports over c++20 to use Sentient"
#endif // #if __cplusplus >= 202002L

#endif