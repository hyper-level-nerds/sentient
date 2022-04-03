#ifndef __SENTIENT_CORE_SERIALIZATION_HPP__
#define __SENTIENT_CORE_SERIALIZATION_HPP__

/**
 * @file serialization.hpp
 * @author Jin (jaehwanspin@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <sentient/core/types.hpp>
#include <sentient/core/type_traits.hpp>

namespace sentient
{


/**
 * @author Jin
 * @brief 
 * 
 * @tparam _Tp 
 * @tparam _Up 
 * @param model 
 * @return byte_buffer_t 
 */
template <typename _Tp, typename _Up = void>
byte_buffer_t make_byte_buffer(const _Tp& model)
{
	return std::make_pair<byte_array_t, size_t>(nullptr, 0);
}

template <typename _Model,
	std::enable_if<type_traits::is_static_model<_Model>::value, _Model>::type
>
byte_buffer_t make_byte_buffer(const _Model& model)
{
	byte_buffer_t bb;

	byte_array_t ba = std::make_unique<byte_array_t::element_type[]>(sizeof(_Model));
	std::memcpy(ba.get(), &model, sizeof(_Model));
	bb = std::make_pair<byte_array_t, size_t>(std::move(ba), sizeof(_Model));

	return std::move(bb);
}

template <typename _Model, typename _Delete = std::default_delete<_Model>>
std::unique_ptr<_Model, _Delete> make_unique_model(const byte_buffer_t& byte_buffer)
{
	std::unique_ptr<_Model, _Delete> uq_model = nullptr;

	return std::move(uq_model);
}

}


#endif