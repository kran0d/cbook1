CC=gcc

# -I <dir> tells the compiler what directory to find files
CFLAGS=-I.

# -o place output into a file or bin
2_brace_check_make: 2_brace_check.o
	$(CC) -o 2_brace_check 2_brace_check.o $(CFLAGS)
	
# -c compile or assemble the source files, but do not link
2_brace_check.o: 2_brace_check.c
	$(CC) -c 2_brace_check.c $(CFLAGS)

clean:
	rm -f *.o 2_brace_check
