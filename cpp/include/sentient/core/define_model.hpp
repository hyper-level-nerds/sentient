#ifndef __SENTIENT_CORE_DEFINE_STRUCT_HPP__
#define __SENTIENT_CORE_DEFINE_STRUCT_HPP__

/**
 * @file define_model.hpp
 * @author Jin (jaehwanspin@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <boost/hana/define_struct.hpp>

#ifdef BOOST_HANA_DEFINE_STRUCT
#define SENTIENT_DEFINE_MODEL BOOST_HANA_DEFINE_STRUCT
#else
#error "fucking BOOST_HANA_DEFINE_STRUCT not found"
#endif

#endif