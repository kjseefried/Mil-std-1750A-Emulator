SHELL = /bin/sh

CC=g++
CFLAGS=-c -Wall -g
LDFLAGS=
INCLUDES=

SOURCES := $(shell ls *.cpp)

OBJECTS=$(SOURCES:.cpp=.o)

all: $(OBJECTS)

.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@ 

clean:
	rm *.o
