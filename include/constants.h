/* 
 * File:   constants.h
 * Author: vlad
 *
 * Created on December 12, 2013, 10:41 PM
 */

#ifndef CONSTANTS_H_
#define	CONSTANTS_H_

#include <complex>

// constants

namespace qpp
{
namespace ct
{

// used in disp(ln) function for setting to zero numbers for which |z|<chop
const double chop = 1e-10;

// used to decide whether a number in double precision
// is zero or not, in if() decissions such as if(x<eps) (i.e., x is zero)
const double eps = 1e-14;

// math constants
const std::complex<double> ii = { 0, 1 }; // Imaginary i (square root of -1)
const double pi = 3.141592653589793238462643383279502884; // pi
const double ee = 2.718281828459045235360287471352662497; // base of natural log

// D-th root of unity
std::complex<double> omega(size_t D) // D-th root of unity
{
	return exp(2.0 * pi * ii / static_cast<double>(D));
}

} /* namespace ct */
} /* namespace qpp */

#endif	/* CONSTANTS_H_ */

