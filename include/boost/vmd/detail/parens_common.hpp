#if !defined(BOOST_VMD_DETAIL_PARENS_COMMON_HPP)
#define BOOST_VMD_DETAIL_PARENS_COMMON_HPP

#include <boost/preprocessor/facilities/expand.hpp>
#include <boost/preprocessor/punctuation/paren.hpp>
#include <boost/vmd/empty.hpp>
  
#define BOOST_VMD_DETAIL_BEGIN_PARENS_EXP2(...) ( __VA_ARGS__ ) BOOST_VMD_EMPTY BOOST_PP_LPAREN()
#define BOOST_VMD_DETAIL_BEGIN_PARENS_EXP1(vseq) BOOST_VMD_DETAIL_BEGIN_PARENS_EXP2 vseq BOOST_PP_RPAREN()
#define BOOST_VMD_DETAIL_BEGIN_PARENS(vseq) BOOST_PP_EXPAND(BOOST_VMD_DETAIL_BEGIN_PARENS_EXP1(vseq))

#define BOOST_VMD_DETAIL_AFTER_PARENS_DATA(vseq) BOOST_VMD_EMPTY vseq
#define BOOST_VMD_DETAIL_SPLIT_PARENS(vseq) (BOOST_VMD_DETAIL_BEGIN_PARENS(vseq),BOOST_VMD_DETAIL_AFTER_PARENS_DATA(vseq))

#endif /* BOOST_VMD_DETAIL_PARENS_COMMON_HPP */