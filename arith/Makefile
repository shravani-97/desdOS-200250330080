CC=gcc


arith:arith.o  add.o  sub.o
	$(CC) -o arith  arith.o  add.o  sub.o

arith.o:arith.c
	$(CC) -c -o arith.o  arith.c

add.o:add.c
	$(CC) -c -o add.o add.c

sub.o:sub.c
	$(CC) -c -o sub.o sub.c

clean:
	rm -rf *.o  arith