#ifndef __SENTIENT_CORE_TYPE_TRAITS_HPP__
#define __SENTIENT_CORE_TYPE_TRAITS_HPP__

/**
 * @file type_traits.hpp
 * @author Jin (jaehwanspin@gmail.com)
 * @brief Type(Model) attributes utilities
 * @version 0.1
 * @date 2022-03-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <type_traits>
#include <tuple>

#include <boost/hana/define_struct.hpp>

namespace sentient
{
namespace type_traits
{
namespace internal
{
template<typename... Tps>
struct is_stl_spec_container_helper {};
}

/**
 * @author Jin
 * @brief basic sentient model attribute
 * 
 */
struct sentient_model_attr
{ using base_type = sentient_model_attr; };

/**
 * @author Jin
 * @brief static sized model attribute
 * 
 */
struct static_model_attr : sentient_model_attr
{ using model_flexiblity_attr_type = static_model_attr; };

/**
 * @author Jin
 * @brief dynamic sized model attribute
 * 
 */
struct dynamic_model_attr : sentient_model_attr
{ using model_flexiblity_attr_type = dynamic_model_attr; };

/**
 * @author Jin
 * @brief 
 * 
 * @tparam _DatabaseName 
 */
template <typename _Derived, char ... _DatabaseName>
struct dbms_compatible_attr : sentient_model_attr
{
	using dbms_compatible_type = _Derived;
	// static constexpr std::tuple<_DatabaseName ...> param_pack = { _DatabaseName... };
	static constexpr const char database_name[sizeof...(_DatabaseName)] = { (_DatabaseName)... };
};

/**
 * @author Jin
 * @brief matafunc if the model type is sentient-based model
 * 
 * @tparam _Model 
 */
template <typename _Model>
struct is_sentient_model :
	std::is_same<typename _Model::base_type, sentient_model_attr> { };
template <typename _Model>
constexpr inline bool is_sentient_model_v = is_sentient_model<_Model>::value;

/**
 * @author Jin
 * @brief 
 * 
 * @tparam _Model 
 */
template <typename _Model>
struct is_static_model :
	std::is_same<typename _Model::model_flexiblity_attr_type, static_model_attr> { };
template <typename _Model>
constexpr inline bool is_static_model_v = is_static_model<_Model>::value;

/**
 * @author Jin
 * @brief 
 * 
 * @tparam _Model 
 */
template <typename _Model>
struct is_dynamic_model :
	std::is_same<typename _Model::model_flexiblity_attr_type, dynamic_model_attr> { };
template <typename _Model>
constexpr inline bool is_dynamic_model_v = is_dynamic_model<_Model>::value;

/**
 * @author Jin
 * @brief 
 * 
 * @tparam _Model 
 * @tparam typename 
 */
template <typename _Model, typename _Tp = void>
struct is_dbms_compatible_model : std::false_type { };
template <typename _Model>
struct is_dbms_compatible_model<
	_Model,
	std::conditional_t<false,
		typename _Model::dbms_compatible_type,
		void
	>
> : std::true_type { };
template <typename _Model, typename _Tp = void>
constexpr inline bool is_dbms_compatible_model_v = is_dbms_compatible_model<_Model, _Tp>::value;

/**
 * @brief check if the type is an standard spec implemented container
 * 
 * @tparam _Tp 
 * @tparam _Up 
 */
template<typename _Tp, typename _Up = void>
struct is_stl_spec_container : std::false_type {};
template<typename _Tp>
struct is_stl_spec_container<
        _Tp,
        std::conditional_t<
            false,
            internal::is_stl_spec_container_helper<
                typename _Tp::value_type,
                typename _Tp::size_type,
                typename _Tp::allocator_type,
                typename _Tp::iterator,
                typename _Tp::const_iterator,
                decltype(std::declval<_Tp>().size()),
                decltype(std::declval<_Tp>().begin()),
                decltype(std::declval<_Tp>().end()),
                decltype(std::declval<_Tp>().cbegin()),
                decltype(std::declval<_Tp>().cend())
                >,
            void
            >
        > : public std::true_type {};
template <typename _Tp, typename _Up = void>
constexpr inline bool is_stl_spec_container_v = is_stl_spec_container<_Tp, _Up>::value;

template<typename _Tp, typename _Up = void>
struct is_stl_spec_string : std::false_type { };

namespace protocol_traits
{

template <typename _Tp, _Tp _Val>
struct protocol_stx
{ using stx_type = _Tp; static constexpr stx_type stx_value = _Val; };
template <typename _Tp>
struct protocol_from { using from_type = _Tp; };
template <typename _Tp>
struct protocol_to { using to_type = _Tp; };
template <typename _Tp>
struct protocol_sequence_number { using sequence_number_type = _Tp; };
template <typename _Tp>
struct protocol_command_code { using command_code_type = _Tp; };
template <typename _Tp>
struct protocol_crc { using crc_type = _Tp; };
template <typename _Tp, _Tp _Val>
struct protocol_etx 
{ using etx_type = _Tp; static constexpr etx_type etx_value = _Val; };

}


namespace concepts
{

} // concepts
} // type_traits
} // sentient
#endif