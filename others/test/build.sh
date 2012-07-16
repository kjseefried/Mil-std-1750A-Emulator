#!/bin/sh

rm *.o

g++ -c Values_test.cpp -I.. -o Values_test.o
g++ Values_test.o ../*.o -o Values_Test
