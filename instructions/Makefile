SHELL = /bin/sh

CC=g++
CFLAGS=-c -Wall -g
LDFLAGS=
INCLUDES=-I../others -I../instructionTypes -I../operations -I../components
SOURCES := $(shell ls *.cpp)

OBJECTS=$(SOURCES:.cpp=.o)

all: $(OBJECTS)

.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@ 

clean:
	rm *.o
