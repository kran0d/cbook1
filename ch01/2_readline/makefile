CC=gcc

# -I <dir> tells the compiler what directory to find files
CFLAGS=-I.

# -o place output into a file or bin
2_readline_make: 2_readline.o
	$(CC) -o 2_readline 2_readline.o $(CFLAGS)
	
# -c compile or assemble the source files, but do not link
2_readline.o: 2_readline.c
	$(CC) -c 2_readline.c $(CFLAGS)

clean:
	rm -f *.o 2_readline
