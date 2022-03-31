#ifndef __SENTIENT_CORE_TYPES_HPP__
#define __SENTIENT_CORE_TYPES_HPP__

/**
 * @file types.hpp
 * @author Jin (jaehwanspin@gmail.com)
 * @brief basic Sentient type aliases
 * @version 0.1
 * @date 2022-03-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <cstddef>
#include <cstdint>
#include <map>
#include <memory>

#include <boost/date_time/gregorian/greg_date.hpp>
#include <boost/date_time/posix_time/ptime.hpp>

namespace sentient
{

using b8_t = bool;
using u8_t = uint8_t;
using u16_t = uint16_t;
using u32_t = uint32_t;
using u64_t = uint64_t;
using i8_t = int8_t;
using i16_t = int16_t;
using i32_t = int32_t;
using i64_t = int64_t;
using f32_t = float;
using f64_t = double;

using ascii_t = char;

using crc8_t = uint8_t;
using crc16_t = uint16_t;
using crc32_t = uint32_t;

template <typename _Tp, size_t _Size>
using arr_t = _Tp[_Size];
template <size_t _Size>
using ascii8_t = arr_t<ascii_t, _Size>;
template <size_t _Size>
using str8_t = arr_t<char8_t, _Size>;
template <size_t _Size>
using str16_t = arr_t<char16_t, _Size>;
template <size_t _Size>
using str32_t = arr_t<char32_t, _Size>;

template <typename _Deleter = std::default_delete<std::byte>>
using byte_array_t = std::unique_ptr<std::byte[], _Deleter>;
template <typename _Deleter = std::default_delete<std::byte>>
using byte_buffer_t = std::pair<byte_array_t<_Deleter>, size_t>;

struct subcentry_datetime32_t
{
	u32_t year : 7;
	u32_t month : 4;
	u32_t day : 5;
	u32_t hours : 4;
	u32_t minutes : 6;
	u32_t seconds : 6;

	boost::gregorian::date to_date()
	{
		return boost::gregorian::date(
			this->year, this->month, this->day);
	}
};

struct subcentry_datetime64_t
{
	u32_t year : 7;
	u32_t month : 4;
	u32_t day : 5;
	u32_t hours : 4;
	u32_t minutes : 6;
	u32_t seconds : 6;
	u32_t microseconds;

	boost::gregorian::date to_date()
	{
		return boost::gregorian::date(
			this->year, this->month, this->day);
	}
};

struct datetime64_t
{
	u32_t year;
	u8_t month;
	u8_t day;
	u8_t hour;
	u8_t minute;
	u8_t second;
	u16_t milliseconds;
};

}

#endif