#ifndef __SENTIENT_CORE_DEFINE_STRUCT_HPP__
#define __SENTIENT_CORE_DEFINE_STRUCT_HPP__

#include <boost/hana/define_struct.hpp>

#ifdef BOOST_HANA_DEFINE_STRUCT
#define SENTIENT_DEFINE_MODEL BOOST_HANA_DEFINE_STRUCT
#else
#error "fucking BOOST_HANA_DEFINE_STRUCT not found"
#endif

#endif