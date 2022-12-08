#ifndef SENTIENT_DETAIL_COMPTIME_STRING_LITERAL_HPP
#define SENTIENT_DETAIL_COMPTIME_STRING_LITERAL_HPP

#include <cstddef>
#include <algorithm>

namespace snt {
namespace detail {

template <std::size_t StrLen>
struct comptime_string_literal
{
    constexpr comptime_string_literal(const char (&str)[StrLen])
    {
        std::copy_n(str, StrLen, this->value);
    }

    char value[StrLen];
};

}
}

#endif