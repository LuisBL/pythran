//==============================================================================
//         Copyright 2003 - 2011   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_BOOLEAN_FUNCTIONS_LOGICAL_NOTOR_HPP_INCLUDED
#define NT2_BOOLEAN_FUNCTIONS_LOGICAL_NOTOR_HPP_INCLUDED

#include <boost/simd/boolean/include/functions/logical_notor.hpp>
#include <nt2/include/functor.hpp>

/* Automatically generated for module core.base */

namespace nt2
{
  namespace tag
  {
    #ifdef DOXYGEN_ONLY
    /*! \brief Same as \classref{boost::simd::tag::logical_notor_} **/
    struct logical_notor_ {};
    #endif
    using boost::simd::tag::logical_notor_;
  }

  #ifdef DOXYGEN_ONLY
  /*! \brief Same as \funcref{boost::simd::logical_notor} **/
  template<class... Args>
  details::unspecified logical_notor(Args&&... args);
  #endif
  using boost::simd::logical_notor;
}

#endif
