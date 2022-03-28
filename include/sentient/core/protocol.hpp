#ifndef __SENTIENT_CORE_PROTOCOL_HPP__
#define __SENTIENT_CORE_PROTOCOL_HPP__

#include <tuple>

namespace sentient
{
namespace attrs
{

template <typename _Tp>
struct from { using from_type = _Tp; };

}

template <typename _HeaderType, typename _FooterType = void>
struct protocol
{
    using header_type = _HeaderType;
    using footer_type = _FooterType;
};


}

#endif