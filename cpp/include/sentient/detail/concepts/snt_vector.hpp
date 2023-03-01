#ifndef SENTIENT_DETAIL_CONCEPTS_SNT_VECTOR_HPP
#define SENTIENT_DETAIL_CONCEPTS_SNT_VECTOR_HPP

#include <concepts>

#include <sentient/detail/concepts/std_vector.hpp>

namespace snt::detail::concepts {

template <typename Vector>
concept snt_vector = std_vector<Vector> && requires(Vector) {
    typename Vector::serialized_size_field_type;
};

}

#endif