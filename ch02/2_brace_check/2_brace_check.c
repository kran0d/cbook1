// This program will read C source code from the standard input and ensure
// that the braces are paired correctly. Note: you need
// not worry about braces that appear within comments,
// string literals, or character constants.

#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	int	n_braces;	/* # of braces found */
	int 	close_braces;   /* # of close braces */
	int 	input;		/* holds the input from stdin */

	while ( 1 ) {
		n_braces = 0;
		close_braces = 0;
		input = 0;
	
		printf( "Please enter your code to check\n: ");
		while ( ( input = getchar() ) != EOF && input != '\n' ) {
			if ( input == '{' ){
				n_braces++;
			} else if ( input == '}' && n_braces == 0 ) {
				printf (" Found closing brace with no open brace\n" );
				close_braces++;
			} else if ( input == '}' )
				n_braces--;
		}

		if (n_braces > 0 ){
			printf (" Found open brace with no closing brace\n ");
		} else if (n_braces == 0 && close_braces > 0) {
			;	
		} else if (n_braces == 0 && close_braces == 0 ) { 
			printf (" No miss matched braces found\n ");
		} else
			printf ("Something broke\n");
	}

	return EXIT_SUCCESS;
}


