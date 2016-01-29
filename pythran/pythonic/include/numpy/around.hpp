#ifndef PYTHONIC_INCLUDE_NUMPY_AROUND_HPP
#define PYTHONIC_INCLUDE_NUMPY_AROUND_HPP

#include "pythonic/include/numpy/rint.hpp"
#include "pythonic/include/numpy/asarray.hpp"
#include "pythonic/include/numpy/sum.hpp"

namespace pythonic
{

  namespace numpy
  {
    namespace details
    {
      template <class T>
      struct is_integral_valued {
        // what a trick :-) use sum to get the dtype even when T is a scalar
        // type
        using type = decltype(functor::sum{}(std::declval<T>()));
        static constexpr bool value = std::is_integral<type>::value;
      };
    }
    // fast path
    template <class E>
    auto around(E const &a) -> decltype(functor::rint{}(a));

    // generic floating point version, pure numpy_expr
    template <class E>
    auto around(E const &a, long decimals) -> typename std::enable_if<
        !details::is_integral_valued<E>::value,
        decltype(functor::rint{}(
                     a *std::declval<details::is_integral_valued<E>::type>()) /
                 std::declval<details::is_integral_valued<E>::type>())>::type;

    // the integer version is only relevant when decimals < 0
    template <class E>
    auto around(E const &a, long decimals) -> typename std::enable_if<
        details::is_integral_valued<E>::value,
        decltype((a / std::declval<
                          typename details::is_integral_valued<E>::type>()) *
                 std::declval<
                     typename details::is_integral_valued<E>::type>())>::type;
    // list version
    template <class E>
    auto around(types::list<E> const &a, long decimals)
        -> decltype(around(functor::asarray{}(a), decimals));

    DECLARE_FUNCTOR(pythonic::numpy, around);
  }
}

#endif
