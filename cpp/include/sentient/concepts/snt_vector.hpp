#ifndef SENTIENT_CONCEPTS_SNT_VECTOR_HPP
#define SENTIENT_CONCEPTS_SNT_VECTOR_HPP

#include <sentient/concepts/std_vector.hpp>

#include <concepts>

namespace snt {
namespace concepts {

template <typename Vector>
concept snt_vector = std_vector<Vector> && requires(Vector) {
    typename Vector::serialized_size_field_type;
};

}
}

#endif