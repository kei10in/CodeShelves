#ifndef VALUE_HPP_
#define VALUE_HPP_

namespace uniformed_access {

template <typename T>
class value {
  public:
    typedef T value_type;

    value<value_type>& operator=(const value_type& v)
    {
        v_ = v;
        return *this;
    }

    const value<value_type>& operator=(const value_type& v) const
    {
        v_ = v;
        return *this;
    }

    operator value_type&()
    {
        return v_;
    }

    operator const value_type&() const
    {
        return v_;
    }

  private:
    value_type v_;
};

template <class T>
bool operator==(const value<T>& lhs, const T& rhs)
{
    return static_cast<T>(lhs) == rhs;
}

template <class T>
bool operator==(const T& lhs, const value<T>& rhs)
{
    return rhs == lhs;
}


}

#endif  /* VALUE_H_ */
