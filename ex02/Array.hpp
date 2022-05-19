#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template<typename T>
class Array
{
private:
    int size_;
    T *array_;
public:
    Array<T>(): size_(0), array_(NULL)
    {}
    Array<T>(const unsigned int size): size_(size)
    {
        if (size > 0)
            array_ = new T[size];
        else
            array_ = NULL;
    }
    Array<T>(const Array<T> &array)
    {
        *this = array;
    }
    ~Array<T>()
    {
        if (array_ != NULL)
            delete []array_;
    }
    Array<T> &operator=(const Array<T> &array)
    {
        if (this == &array)
            return *this;
        if (array_ != NULL)
            delete []array_;
        size_ = array.size_;
        array_ = new T[size_];
        for (int i = 0; i < size_; i++)
            array_[i] = array[i];
        return *this;
    }
    T operator[](const int index) const
    {
        if (index > size_ || index < 0)
            throw std::exception();
        return array_[index];
    }
    T &operator[](const int index)
    {
        if (index > size_ || index < 0)
            throw std::exception();
        return array_[index];
    }
    unsigned int size()
    {
        return size_;
    }
};

#endif
