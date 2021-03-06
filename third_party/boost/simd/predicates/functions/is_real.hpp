//==============================================================================
//         Copyright 2003 - 2012   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2012   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef BOOST_SIMD_PREDICATES_FUNCTIONS_IS_REAL_HPP_INCLUDED
#define BOOST_SIMD_PREDICATES_FUNCTIONS_IS_REAL_HPP_INCLUDED
#include <boost/simd/include/functor.hpp>
#include <boost/dispatch/include/functor.hpp>


namespace boost { namespace simd { namespace tag
  {
   /*!
     @brief is_real generic tag

     Represents the is_real function in generic contexts.

     @par Models:
        Hierarchy
   **/
    struct is_real_ : ext::elementwise_<is_real_>
    {
      /// @brief Parent hierarchy
      typedef ext::elementwise_<is_real_> parent;
    };}
  /*!
    Returns True or False according a0 is real or not.
    For non complex numbers it is always true

    @par Semantic:

    @code
    logical<T> r = is_real(a0);
    @endcode

    is similar to:

    @code
    logical<T> r = True;
    @endcode

    @param a0

    @return a logical value
  **/
  BOOST_DISPATCH_FUNCTION_IMPLEMENTATION(tag::is_real_, is_real,   1)
} }

#endif

