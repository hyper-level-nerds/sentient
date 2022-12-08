//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_REFLECTION_ENCAPSULATED_MODEL_BASE_HPP
#define SENTIENT_REFLECTION_ENCAPSULATED_MODEL_BASE_HPP

#include <sentient/reflection/detail/model_tag.hpp>

namespace snt {

struct default_model_base
{
    using snt_model_tag = detail::default_model_tag;
};

}

#endif