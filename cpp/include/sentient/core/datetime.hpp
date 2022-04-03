#ifndef __SENTIENT_CORE_DATETIME_HPP__
#define __SENTIENT_CORE_DATETIME_HPP__

/**
 * @file datetime.hpp
 * @author Jin (jaehwanspin@gmail.com)
 * @brief Date/Time classes
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <functional>

#include <sentient/core/types.hpp>

#include <boost/date_time/gregorian/greg_date.hpp>
#include <boost/date_time/posix_time/ptime.hpp>
#include <boost/date_time.hpp>

namespace sentient
{

namespace internal
{
    template <u64_t _ThisCentury>
    struct subcentury_helper
    {
        static constexpr u64_t this_year = ((_ThisCentury - 1) * 100);
    };

}

/**
 * @author Jin
 * @brief bit-fielded subcentury date time type
 * 
 * @tparam _ThisCentry 
 */
template <u64_t _ThisCentury>
struct subcentury_datetime32
{
    static constexpr u64_t this_century = _ThisCentury;
    static constexpr u64_t this_year =
        internal::subcentury_helper<this_century>::this_year;
    static constexpr int tm_year_conversion_constant = 1900;
    // static constexpr int tm_to_this_type = 

	u32_t year : 7;    /* [0-99] a centry */
	u32_t month : 4;   /* [0-11] */
	u32_t day : 5;     /* [0-31] */
	u32_t hours : 5;   /* [0-11] */
	u32_t minutes : 6; /* [0-59] */
	u32_t seconds : 5; /* [0-29] 0-59 in 2-second intervals */

    /**
     * @author Jin
     * @brief 
     * 
     * @return boost::gregorian::date 
     */
    operator boost::gregorian::date()
    {
        return subcentury_datetime32::operator boost::posix_time::ptime();
    }

    operator std::tm()
    {
        return std::tm {
        static_cast<decltype(std::declval<std::tm>().tm_sec)>(this->seconds) * 2,
        static_cast<decltype(std::declval<std::tm>().tm_min)>(this->minutes),
        static_cast<decltype(std::declval<std::tm>().tm_hour)>(this->hours),
        static_cast<decltype(std::declval<std::tm>().tm_mday)>(this->day),
        static_cast<decltype(std::declval<std::tm>().tm_mon)>(this->month),
        static_cast<decltype(std::declval<std::tm>().tm_year)>(
            this->year + this_year - 1900)
        };
    }

    /**
     * @author Jin
     * @brief 
     * 
     * @return boost::posix_time::ptime 
     */
    operator boost::posix_time::ptime()
    {
        return boost::posix_time::ptime_from_tm(
            operator std::tm()
        );
    }

    static subcentury_datetime32 from_tm(const std::tm& tm)
    {
        subcentury_datetime32 res;
        res.year = static_cast<u32_t>(1900 + tm.tm_year) - this_year;
        res.month = static_cast<u32_t>(tm.tm_mon);
        res.day = static_cast<u32_t>(tm.tm_mday);
        res.hours = static_cast<u32_t>(tm.tm_hour);
        res.minutes = static_cast<u32_t>(tm.tm_min);
        res.seconds = static_cast<u32_t>(tm.tm_sec / 2);
        return res;
    }
};

/**
 * @author Jin
 * @brief 
 * 
 * @tparam _ThisCentury 
 */
template <u64_t _ThisCentury>
struct subcentury_datetime64 : subcentury_datetime32<_ThisCentury>
{
	u32_t microseconds;
};

#pragma pack(push, 1)
struct datetime128
{
	u64_t year;
	u8_t month;
	u8_t day;
	u8_t hour;
	u8_t minute;
	u8_t second;
	u64_t nanosecond;
};
#pragma pack(pop)

template <u64_t _ThisCentury>
using scdt32_t = subcentury_datetime32<_ThisCentury>;
template <u64_t _ThisCentury>
using scdt64_t = subcentury_datetime64<_ThisCentury>;


using pt64_t = u64_t;

}

#endif
