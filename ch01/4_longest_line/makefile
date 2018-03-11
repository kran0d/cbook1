CC=gcc

# -I <dir> tells the compiler what directory to find files
CFLAGS=-I.

# -o place output into a file or bin
4_longest_line_make: 4_longest_line.o
	$(CC) -o 4_longest_line 4_longest_line.o $(CFLAGS)
	
# -c compile or assemble the source files, but do not link
4_longest_line.o: 4_longest_line.c
	$(CC) -c 4_longest_line.c $(CFLAGS)

clean:
	rm -f *.o 4_longest_line
