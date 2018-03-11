/*
 * This file contains a function that takes a single integer
 * argument and returns the negated value of that argument
 */

#include "negate.h"

signed int negate( int val )
{
	return ( ~val + 1 );
}
