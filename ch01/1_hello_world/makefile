CC=gcc

# -I <dir> tells the compiler what directory to find files
CFLAGS=-I.

# -o place output into a file or bin
1_hello_world_make: 1_hello_world.o
	$(CC) -o 1_hello_world 1_hello_world.o $(CFLAGS)
	
# -c compile or assemble the source files, but do not link
1_hello_world.o: 1_hello_world.c
	$(CC) -c 1_hello_world.c $(CFLAGS)

clean:
	rm -f *.o 1_hello_world
