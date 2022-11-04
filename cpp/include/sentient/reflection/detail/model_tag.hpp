//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_REFLECTION_DETAIL_MODEL_TAG_HPP
#define SENTIENT_REFLECTION_DETAIL_MODEL_TAG_HPP

namespace snt {
namespace detail {

struct encapsulated_model_tag { };
struct lockfree_model_tag { };
struct observable_model_tag { };
struct shared_enabled_model_tag { };

}
}

#endif