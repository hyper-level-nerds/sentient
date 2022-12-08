#ifndef SENTIENT_REFLECTION_MODEL_BASE_HPP
#define SENTIENT_REFLECTION_MODEL_BASE_HPP

#include <sentient/detail/comptime_string_literal.hpp>

namespace snt {

template <
    snt::detail::comptime_string_literal ModelName,
    typename ImplType,
    typename... ParentTypes
>
struct model_info
{
    static constexpr auto model_name = ModelName.value;
    using this_type = ImplType;
    using parent_types =
        std::tuple<ParentTypes...>;
};

template <
    snt::detail::comptime_string_literal ModelName,
    typename ImplType,
    typename... ParentTypes
>
struct model_impl
{
    template <typename Type>
    using snt_model_info = model_info<
        ModelName,
        ImplType,
        ParentTypes...
    >;
};

}

#endif