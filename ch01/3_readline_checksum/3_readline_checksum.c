/*
 * This program will take a line from stdin and print it to stdout. A checksum
 * will also be calculated and added to stdout on a new line.
 */

#include <stdio.h>
#include <stdlib.h>

int
main ( void )
{

	signed char 	checksum = -1;	/* holds the checksum for input */
	signed char	input;	/* holds the line from stdin with no limit */

	// This while loop will allow the program to run until the user 
	// ends with ctrl-c.
	while( 1 ){	
		printf( "Please enter your string: " );
		// After the user enters a string and hits return, the 
		// stream buffer stdin is read by getchar() character by
		// character and added to input. The loop continues while
		// input does not have EOF (indicating an error) or a 
		// new line character indcating the end of the user input.
		// getchar will increase the location in the stdin buffer
		// on its own so the dev does not need to account for it.
		while( ( input = getchar() ) != EOF && input != '\n' ) {
			// The value of the checksum is the initialized value
			// of -1 added to the integer value of each character
			// the user entered.
			checksum += input;
			// This print statement will print the current input
			// value to the screen as a character.
			printf( "%c", input );
		}
		//Because the newline character was not printed inside the loop
		//(because it was used to terminate the loop), it is added
		//after the loop. I should be clear the last getchar() will always
		//be the newline character.
		checksum += input;
		// This print will go to the next line, print the checksum
		// as a signed integer and then start at a new line again.
		printf( "\n%d\n", (int)checksum );
		// This statement reinitializes the checksum
		checksum = -1;	
	}
	//as the program is written now, this statement is never reached.
	return EXIT_SUCCESS;
}
