/*
 * This program will take a line from stdin and print it to stdout with
 * it's number line preceding the line.
 */

#include <stdio.h>
#include <stdlib.h>

int
main ( void )
{

	int 	line_num = 1;	/* holds the line number for current line */
	int	input;	/* holds the line from stdin with no limit */
	
	while( 1 ){	
		printf( "Please enter your string: " );
		input = getchar();
		printf( "%d %c", line_num, input );
		while( ( input = getchar() ) != EOF && input != '\n' ) {
			printf( "%c", input );
		}
		printf( "\n" );
		line_num++;
	}
	return EXIT_SUCCESS;
}
