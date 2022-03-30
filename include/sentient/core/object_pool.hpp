#ifndef __SENTIENT_CORE_OBJECT_POOL_HPP__
#define __SENTIENT_CORE_OBJECT_POOL_HPP__

/**
 * @file object_pool.hpp
 * @author Jin (jaehwanspin@gmail.com)
 * @brief defines generic object pool types
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <cstddef>
#include <type_traits>
#include <memory>

#include <boost/lockfree/queue.hpp>

namespace sentient
{

/**
 * @author Jin
 * @brief 
 * 
 * @tparam _Tp 
 * @tparam _PtrType 
 */
template <typename _Tp, typename _PtrType = std::shared_ptr<_Tp>>
class object_pool
{
public:
    using value_type = _Tp;
    using pointer_type = _PtrType;
    using pool_type = boost::lockfree::queue<std::add_pointer_t<_Tp>>;

private:
    /**
     * @brief custom smart pointer deleter for object_pool
     * 
     */
    struct pool_deleter
    {
        boost::lockfree::queue<std::add_pointer_t<_Tp>>& pool_;
        pool_deleter(boost::lockfree::queue<std::add_pointer_t<_Tp>>& pool) :
            pool_(pool) {}

        void operator() (_Tp* t) const
        {
            pool.push(t);
        }
    };

public:

    template <typename ... _Args>
    object_pool(size_t capacity, _Args... default_constructor_args) :
        pool_(capacity),
        size_(capacity)
    {
        for (size_t idx = 0; idx < this->size_; idx++)
            pool_.push(new value_type(default_constructor_args));
    }

    virtual ~object_pool()
    {
        for (size_t idx = 0; idx < this->size_; idx++)
        {
            value_type* ret = nullptr;
            pool_.pop(ret);
            if (ret != nullptr) delete ret;
        }
    }

    size_t size() { return this->size_; }
    bool available() { return this->pool_.capacity() != 0; }

    pointer_type get_object()
    {
        value_type* ret = nullptr;
        pool_.pop(ret);
        return pointer_type(ret, pool_deleter(pool_));
    }

private:

    size_t    size_;
    pool_type pool_;
};

}

#endif  