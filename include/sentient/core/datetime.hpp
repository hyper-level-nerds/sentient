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
    template <u64_t _ThisCentry>
    struct subcentry_helper
    {
        static constexpr u64_t this_year = ((_ThisCentry - 1) * 100);
    };

}

/**
 * @author Jin
 * @brief bit-fielded subcentry date time type
 * 
 * @tparam _ThisCentry 
 */
template <u64_t _ThisCentry>
struct subcentry_datetime32
{
    static constexpr u64_t this_centry = _ThisCentry;
    static constexpr u64_t this_year = internal::subcentry_helper<this_centry>::this_year;
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
     * @return boost::posix_time::ptime 
     */
    operator boost::posix_time::ptime()
    {
        return boost::posix_time::ptime_from_tm(
            std::tm {
                static_cast<int>(this->seconds),
                static_cast<int>(this->minutes),
                static_cast<int>(this->hours),
                static_cast<int>(this->day),
                static_cast<int>(this->month),
                // static_cast<int>(this->year) + ,
                0, });
    }
};

/**
 * @author Jin
 * @brief 
 * 
 * @tparam _ThisCentry 
 */
template <u64_t _ThisCentry>
struct subcentry_datetime64 : subcentry_datetime32<_ThisCentry>
{
	u32_t microseconds;
};

struct datetime128
{
	u64_t nanosecond;
	u64_t year;
	u8_t month;
	u8_t day;
	u8_t hour;
	u8_t minute;
	u8_t second;
};

template <u64_t _ThisCentry>
using scdt32_t = subcentry_datetime32<_ThisCentry>;
template <u64_t _ThisCentry>
using scdt64_t = subcentry_datetime64<_ThisCentry>;

}

#endif