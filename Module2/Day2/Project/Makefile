CC = gcc
CFLAGS = -Wall -pedantic -std=c99 -g
INCLUDE = include

bin/main: src/main.c bin/count.o bin/sum.o
	$(CC) $(CFLAGS) -I$(INCLUDE) src/main.c bin/count.o bin/sum.o -o bin/main

bin/count.o: src/count.c include/count.h
	$(CC) $(CFLAGS) -I$(INCLUDE) -c src/count.c -o bin/count.o

bin/sum.o: src/sum.c include/sum.h
	$(CC) $(CFLAGS) -I$(INCLUDE) -c src/sum.c -o bin/sum.o

clean:
	rm -f bin/*
