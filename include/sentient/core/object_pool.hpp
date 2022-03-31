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
#include <atomic>
#include <type_traits>
#include <memory>
#include <mutex>
#include <condition_variable>

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
    using type = object_pool<_Tp, _PtrType>;
    using value_type = _Tp;
    using element_type = value_type;
    using pointer_type = std::add_pointer_t<value_type>;
    using smart_pointer_type = _PtrType;
    using pool_type = boost::lockfree::queue<std::add_pointer_t<value_type>>;

    friend pool_type;

private:
    /**
     * @brief custom smart pointer deleter for object_pool
     * 
     */
    struct pool_deleter
    {
        friend object_pool;
        // boost::lockfree::queue<pointer_type>& pool_;
        object_pool<value_type, smart_pointer_type> pool_;
        pool_deleter(object_pool& pool) :
            pool_(pool) {}

        void operator() (pointer_type t) const
        {
            this->pool_.pool_.push(t);
            this->pool_.pool_.
        }
    };

public:

    /**
     * @author Jin
     * @brief Construct a new object pool object
     * 
     * @tparam _Args 
     * @param capacity 
     * @param default_constructor_args 
     */
    template <typename ... _Args>
    object_pool(size_t capacity, _Args... default_constructor_args) :
        pool_(capacity),
        size_(0)
    {
        for (size_t idx = 0; idx < this->size_; idx++)
            pool_.push(new value_type(default_constructor_args...));
    }

    /**
     * @author Jin
     * @brief Destroy the object pool object
     * 
     */
    virtual ~object_pool()
    {
        if (this->all_returned_mtx_.)
        {
            std::unique_lock lk(this->all_returned_mtx_);
            this->all_returned_condvar_.wait(lk, [&]() {
                return this->size() == this->
                });
        }
        for (size_t idx = 0; idx < this->size_; idx++)
        {
            pointer_type ret = nullptr;
            pool_.pop(ret);
            if (ret != nullptr) delete ret;
        }
    }


    inline const size_t size() { return this->size_; }
    inline bool available() { return this->pool_.capacity() != 0; }
    

    smart_pointer_type get_object()
    {
        value_type* ret = nullptr;
        pool_.pop(ret);
        this->size_--;
        return smart_pointer_type(ret, pool_deleter(pool_));
    }

private:
    std::mutex              all_returned_mtx_;
    std::condition_variable all_returned_condvar_;
    std::atomic_size_t      size_;
    pool_type               pool_;
};

}

#endif  