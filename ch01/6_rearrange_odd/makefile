CC=gcc

# -I <dir> tells the compiler what directory to find files
CFLAGS=-I.

# -o place output into a file or bin
6_rearrange_odd_make: 6_rearrange_odd.o
	$(CC) -o 6_rearrange_odd 6_rearrange_odd.o $(CFLAGS)
	
# -c compile or assemble the source files, but do not link
6_rearrange_odd.o: 6_rearrange_odd.c
	$(CC) -c 6_rearrange_odd.c $(CFLAGS)

clean:
	rm -f *.o 6_rearrange_odd
