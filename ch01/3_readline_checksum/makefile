CC=gcc

# -I <dir> tells the compiler what directory to find files
CFLAGS=-I.

# -o place output into a file or bin
3_readline_checksum_make: 3_readline_checksum.o
	$(CC) -o 3_readline_checksum 3_readline_checksum.o $(CFLAGS)
	
# -c compile or assemble the source files, but do not link
3_readline_checksum.o: 3_readline_checksum.c
	$(CC) -c 3_readline_checksum.c $(CFLAGS)

clean:
	rm -f *.o 3_readline_checksum
