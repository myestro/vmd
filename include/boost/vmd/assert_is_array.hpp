#if !defined(BOOST_VMD_ASSERT_IS_ARRAY_HPP)
#define BOOST_VMD_ASSERT_IS_ARRAY_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_ASSERT_IS_ARRAY(array)

    \brief Asserts that the parameter is a pplib array.

    The macro checks that the parameter is a pplib array.
    If it is not a pplib array, it forces a compiler error.
    
    The macro works through variadic macro support.
    
    The macro normally checks for a pplib array only in 
    debug mode. However an end-user can force the macro 
    to check or not check by defining the macro 
    BOOST_VMD_ASSERT_DATA to 1 or 0 respectively.

    array = a possible pplib array.

    returns = Normally the macro returns nothing. 
    
              If the parameter is a pplib array, nothing is 
              output.
              
              For VC++, because there is no sure way of forcing  
              a compiler error from within a macro without producing
              output, if the parameter is not a pplib array the 
              macro forces a compiler error by outputting invalid C++.
              
              For all other compilers a compiler error is forced 
              without producing output if the parameter is not a 
              pplib array.
    
*/

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_ARRAY(array)

#else

#include <boost/vmd/is_array.hpp>
#include <boost/vmd/assert.hpp>

#define BOOST_VMD_ASSERT_IS_ARRAY(array) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_ARRAY(array), \
      	BOOST_VMD_IS_ARRAY_ASSERT_ERROR \
      	) \
/**/

#define BOOST_VMD_ASSERT_IS_ARRAY_D(d,array) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_ARRAY_D(d,array), \
      	BOOST_VMD_IS_ARRAY_ASSERT_ERROR \
      	) \
/**/

#endif /* !BOOST_VMD_ASSERT_DATA */

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_ASSERT_IS_ARRAY_HPP */
