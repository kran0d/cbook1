/**
 * This program reads input lines from the standard input and prints
 * each input line, followed by just some portions of the lines, to 
 * the standard output.
 *
 * The first input is a list of column nubmers, which ends with a 
 * negative number. The column numbers are paired and specify
 * ranges of columns from the input line that are to be printed.
 * For expample, 0 3 10 12 -1 indicates that only columns 0 through 3
 * and columns 10 through 12 will be printed.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_COLS	20	/* max # of columns to process */
#define MAX_INPUT	1000	/* max len of input & output lines */

int read_column_numbers( int columns[], int max );
void rearrange( char *output, char const *input,
		   int n_columns, int const columns[] );

int main ( void )
{
	int	n_columns;		/* # of columns to process */
	int 	columns[MAX_COLS];	/* the columns to process */
	char	input[MAX_INPUT];	/* array for input line */
	char	output[MAX_INPUT];	/* array for output line */

	/*
	 * Read the list of column numbers
	 */
	n_columns = read_column_numbers( columns, MAX_COLS );

	/*
	 * Read, process and print the remaining lines of input.
	 */
	while( gets( input ) != NULL ) {
		printf( "Original input: %s\n", input );
		rearrange( output, input, n_columns, columns );
		printf( "Rearranged line: %s\n", output);
	}

	return EXIT_SUCCESS;
}

/*
 * Read the list of column nubmers, ignoring any byond the specified
 * maximum.
 */
int read_column_numbers( int columns[], int max )
{
	int	num = 0;
	int 	ch;

	/*
	 * Get the numbers, stopping at eof or when a number is < 0.
	 */
	while( num < max && scanf( "%d", &columns[num] ) == 1
			&& columns[num] >= 0 )
		num += 1;
	
	/*
	 * Make sure we have an even number of inputs, as they are
	 * supposed to be paired.
	 */
	if( num % 2 != 0 ) {
		puts( "Last column number is not paired." );
		exit( EXIT_FAILURE );
	}

	/*
	 * Discard the rest of the line that contained the final
	 * number.
	 */
	while( (ch = getchar() ) != EOF && ch != '\n' )
		;

	return num;
}

/*
 * Process a line of input by concatenating the characters from
 * the indicated columns. The output line is then NUL terminated.
 */
void rearrange( char *output, char const *input,
		int n_columns, int const columns[] )
{
	int col;		/* subscript for columns array */
	int output_col;		/* output column counter */
	int len;		/* length of input line */

	len = strlen( input );
	output_col = 0;

	/*
	 * Process each pair of column numbers.
	 */
	for( col = 0; col < n_columns; col +=2 ){
		int nchars = 0;
		int col_start = 0;
		/*
		 * This check allows the user to enter ranges
		 * from high value to low value without error.
		 */
		if ( columns[col] > columns[col + 1] ){
			nchars = columns[col] - columns[col + 1] + 1;
			col_start = col + 1;
		} else {
			nchars = columns[col + 1] - columns[col] + 1;
			col_start = col;
		}

		/*
		 * If the input line isn't this long, skip this
		 * range and move on to the next.
		 */
		if( columns[col] >= len )
			continue;

		/*
		 * If the output array is full, we'er done.
		 */
		if( output_col == MAX_INPUT - 1 )
			break;

		/*
		 * If there isn't room in the output array, only copy
		 * what will fit.
		 */
		if( output_col + nchars > MAX_INPUT -1)
			nchars = MAX_INPUT - output_col -1;

		/*
		 * If the range is larger then the length of the input
		 * line, only copy until the end of the input line.
		 */
		if( columns[col_start] + nchars - 1 >= len )
			nchars = len - columns[col_start];

		/*
		 * Copy the relevant data.
		 */
		strncpy( output + output_col, input + columns[col_start],
				nchars );
		output_col += nchars;
	}
	output[output_col] = '\0';
}
	
	
