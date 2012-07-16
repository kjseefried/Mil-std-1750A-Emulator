SHELL = /bin/sh

CC=g++
CFLAGS=-c -Wall -g
LDFLAGS=
INCLUDES=-I../others -I../instructions -I../components -I../instructionTypes -I../operations
SOURCES := $(shell ls *.cpp)

OBJECTS=$(SOURCES:.cpp=.o)

EXECUTABLE=Mil-Std-1750A_test

all: $(OBJECTS) EXE

EXE:
	g++ -o $(EXECUTABLE) *.o ../components/*o ../instructionTypes/*.o ../instructions/*.o ../operations/*.o ../others/*.o

.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@ 

clean:
	rm -f Mil-Std-1750A_test;
	rm -f *.o;
