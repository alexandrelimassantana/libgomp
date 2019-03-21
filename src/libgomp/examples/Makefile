CC=gcc
CPP=g++
MOGSLIB=../../../../lb-framework

CFLAGS=-rdynamic -g -fopenmp
CPPFLAGS=-rdynamic -g -fopenmp -std=c++14

all: pedro-test binlpt-01 binlpt-02

pedro-test:
	$(CC) $(CFLAGS) pedro-test.c -o pedro-test

mogslib:
	$(CPP) $(CPPFLAGS) -c -I../build -I$(MOGSLIB)/include -g -O0 -fopenmp mogslib-02.cpp mogslib.cpp
	$(CPP) $(CPPFLAGS) mogslib.o mogslib-02.o -o mogslib-test -Wl,-rpath=../build/.libs -L../build/.libs -lgomp

# Trick for both linking against our modified libgomp AND use it at run time.
binlpt-01: binlpt-01.c ../build/omp.h
	$(CC) -c -I../build -g -O0 -fopenmp binlpt-01.c mogslib.c
	$(CC) binlpt-01.o mogslib.o -o binlpt-01 -Wl,-rpath=../build/.libs/ -L../build/.libs -lgomp

binlpt-02: binlpt-02.c ../build/omp.h
	$(CC) -c -I../build -g -O0 -fopenmp binlpt-02.c mogslib.c
	$(CC) binlpt-02.o mogslib.o -o binlpt-02 -Wl,-rpath=../build/.libs/ -L../build/.libs -lgomp

../build/omp.h:
	@echo "[error] Can't find ../build/omp.h. Please build the libgomp library before trying to compile any example program."
	@exit 1

clean:
	rm -f *.o pedro-test binlpt-01 binlpt-02 mogslib-test
