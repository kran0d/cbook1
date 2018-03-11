/* This program will call a negate function and increment function
 * with a value and print the results of the function to 
 * the screen.
 */

#include <stdio.h>
#include <stdlib.h>
#include "increment.h"
#include "negate.h"
#define VAL1 10
#define VAL2 0
#define VAL3 -10

int main ( void )
{
	/* Run the two functions using a value of 10 */
	printf("Results of increment using value 10: %d\n", increment(VAL1));
	printf("Results of negate using value 10: %d\n\n", negate(VAL1));

	/* Run the two functions using a value of 0 */
	printf("Results of increment using value 0: %d\n", increment(VAL2));
	printf("Results of negate using value 0: %d\n\n", negate(VAL2));
	
	/* Run the two functions using a value of -10 */
	printf("Results of increment using value -10: %d\n", increment(VAL3));
	printf("Results of negate using value -10: %d\n\n", negate(VAL3));
	
	return EXIT_SUCCESS;
}
