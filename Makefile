SHELL = /bin/sh

CC=g++
CFLAGS=-c -Wall -g
LDFLAGS=
INCLUDES=-Iothers -Iinstructions -Icomponents
SOURCES := $(shell ls *.cpp)

OBJECTS=$(SOURCES:.cpp=.o)

DEBUGGER=Debugger
EXECUTOR=Executor

all: SUBDIRS $(OBJECTS) EXE

EXE:
	g++ -o $(DEBUGGER) $(DEBUGGER).o components/*o instructionTypes/*.o instructions/*.o operations/*.o others/*.o
	g++ -o $(EXECUTOR) $(EXECUTOR).o components/*o instructionTypes/*.o instructions/*.o operations/*.o others/*.o

SUBDIRS: 
	@cd components; make;
	@cd operations; make;
	@cd instructionTypes; make;
	@cd instructions; make;
	@cd test; make;
.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@ 

clean:
	rm -f Debugger;
	rm -f test/Mil-Std-1750A;
	rm -f test/*.o;
	rm -f *.o;
	rm -f operations/*.o
	rm -f components/*.o
	rm -f instructions/*.o
	rm -f instructionTypes/*.o
