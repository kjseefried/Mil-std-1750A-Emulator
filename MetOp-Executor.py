#!/usr/bin/python
import os

NUM_CYCLES = 2
INT2_OUTPUT_CYCLE = 0
INT8_OUTPUT_CYCLE = 0
PRINT_INITIAL = True
IPS = 640000.0
INT2 = 128.0
INT8 = 1.0
DUMP_START = '31BA'
DUMP_END   = '33BA'

DUMPDIR = 'dumps'

try:
    os.mkdir(DUMPDIR)
except:
    pass

instructions_between_int_2 = IPS/INT2

def quiet():
    print 'q'
def start(): 
    print 'start'
def exit(): 
    print 'exit'
def show_number_instructions():
    print 'N'
def advance(n):
    print 'n', str(n)
def configure_dump(start, end):
    print 'cfgdump', start, end 
def dump(file):
    print 'dump', file
def interrupt(i):
    print 'int', i
def comment(text):
    print 'c', text
def execute(n):
    for i in range(n):
        print 'l'
        print 'e'

quiet()
start()
#configure_dump(DUMP_START, DUMP_END)
if PRINT_INITIAL:
    execute(int(instructions_between_int_2/2))
else:
    advance(int(instructions_between_int_2/2))

dumpNumber = 0
for cycle in range (NUM_CYCLES):
    for i2 in range (int(INT2)):
        if (cycle == INT8_OUTPUT_CYCLE) or (INT8_OUTPUT_CYCLE == 0):
            comment('***** Start of code after interrupt 8 *****')
            execute(int(instructions_between_int_2/2))
            comment('****************** End ********************')
        else: 
            advance(int(instructions_between_int_2/2))
        interrupt(2)
        if (cycle == INT2_OUTPUT_CYCLE) or (INT2_OUTPUT_CYCLE == 0):
            comment('***** Start of code after interrupt 2 *****')
            execute(int(instructions_between_int_2/2))
            comment('****************** End ********************')
        else:
            advance(int(instructions_between_int_2/2))
#    dump(DUMPDIR + '/memory.dump.%(#)06i' % {'#':dumpNumber})
    dumpNumber += 1
    interrupt(8)

dump(DUMPDIR + '/memory.dump')
show_number_instructions()
exit() 
