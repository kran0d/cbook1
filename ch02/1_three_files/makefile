CC=gcc

# -I <dir> tells the compiler what directory to find files
CFLAGS=-I.

# -o place output into a file or bin
1_three_files_make: 1_three_files.o increment.o negate.o
	$(CC) -o 1_three_files 1_three_files.o increment.o negate.o $(CFLAGS)
	
# -c compile or assemble the source files, but do not link
1_three_files.o: 1_three_files.c increment.h negate.h
	$(CC) -c 1_three_files.c $(CFLAGS)

increment.o: increment.c increment.h
	$(CC) -c increment.c $(CFLAGS)

negate.o: negate.c negate.h
	$(CC) -c negate.c $(CFLAGS)

clean:
	rm -f *.o 1_three_files
