/* This program will read lines from stdin from the user
 * as each line is processed it will be check to see if
 * it is the longest line. When all lines are entered
 * the longest line is printed to the screen.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_INPUT 1000

int
main ( void) 
{
	int 	input; 		 	/* holds value of input */
	int 	num = 0;		/* holds current line length */
	int 	long_length = 0;	/* holds the longest line length */
	int	not_done = 1;		/* boolen to keep program running */
	char 	temp_input[MAX_INPUT];	/* array to hold input from stdin */
	char 	long_input[MAX_INPUT];  /* array to hold longest line */

	// This is the loop that keeps the program running
	// while the boolean is 1 and not at the EOF keep
	// running.
	while( not_done && ( input = getchar() ) != EOF ){
		// This will make sure we have not hit
		// the newline character meaning that we are still
		// processing a line.
		if( input != '\n'){
			temp_input[num] = input;
			num++;
		// If we are here, we know we have hit a newline
		// character. If the user entered two newlines
		// meaning the num value will be 0, the user 
		// has indicated that this is the EOF. We now
		// set the boolean to 0 to break the loop and 
		// end the program.
		} else if( num == 0 ){
			not_done = 0;
		// If we are here, the user entered a newline and
		// the line has data to process. We need to see if
		// this line is the longest line thus far.
		} else {
			// Here we check if the value in num which is
			// the number of characters in the line is 
			// longer than the longest line. If it is
			// we clear the old longest line and copy the new
			// longest line. We set the longest length set to
			// the new length and then clear the temp array
			if( num > long_length ){
				memset( long_input, 0, MAX_INPUT );
				strncpy( long_input, temp_input, num );	
				long_length = num;
				num = 0;
				memset( temp_input, 0 , MAX_INPUT );
			// If we are here, there was data in the input
			// array but it was not longer than the longest
			// so we need to clear the line and ready for new
			// input.
			} else {
				memset ( temp_input, 0 , MAX_INPUT );
				num = 0;
			}
		}
	}
	//If we are here the user has indicated EOF and we
	//print out the current longest line to stdout and
	//exit the program cleanly.
	printf( "\n\nLongest line: %s\n", long_input );
	return EXIT_SUCCESS;
}
