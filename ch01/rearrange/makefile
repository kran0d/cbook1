CC=gcc

# -I <dir> tells the compiler what directory to find files
CFLAGS=-I.

# -o place output into a file or bin
rearrange_make: rearrange.o
	$(CC) -o rearrange rearrange.o $(CFLAGS)
	
# -c compile or assemble the source files, but do not link
rearrange.o: rearrange.c
	$(CC) -c rearrange.c $(CFLAGS)

clean:
	rm -f *.o rearrange
