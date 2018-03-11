CC=gcc

# -I <dir> tells the compiler what directory to find files
CFLAGS=-I.

# -o place output into a file or bin
5_rearrange_no_order_make: 5_rearrange_no_order.o
	$(CC) -o 5_rearrange_no_order 5_rearrange_no_order.o $(CFLAGS)
	
# -c compile or assemble the source files, but do not link
5_rearrange_no_order.o: 5_rearrange_no_order.c
	$(CC) -c 5_rearrange_no_order.c $(CFLAGS)

clean:
	rm -f *.o 5_rearrange_no_order
