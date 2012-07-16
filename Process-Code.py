#!/usr/bin/python
import re
import sys

#def usage():
#    print sys.argv[0], '<filename>'

code = {}
subroutines = {}
subroutine_calls = {}

# These two are specific to the MetOp safe mode software
subroutines['0000146F'] = 'void process_interrupt_2()'
subroutines['0000005E'] = 'void main()'

def main():
#    if len(sys.argv) < 2:
#        usage()
#        sys.exit(1)
    while True:
        line = sys.stdin.readline().strip()
        if not len(line):
            exit()
        process_line(line)

def process_line(line):

    # Check that this is a code line and not a comment
    m = re.match('([0-9A-F]{8}).*', line)
    if m:
        code[m.group(1)] = m.group(0)

    # Try to identify subroutines calls. Note, we can only identify then
    # if the address to be called can be identified from the code - i.e.
    # doesn't depend on the content of registers
    m = re.match('([0-9A-F]{8})  :  7E[0-9A-F]0([0-9A-F]{4})', line)
    if m:
        addr = '0000' + m.group(2)
        subroutines[addr] = 'void subroutine_' + addr[4:] + '()'
        subroutine_calls[m.group(1)] = 'subroutine_' + addr[4:] + '();'

def exit():
    addresses = code.keys()
    addresses.sort()
    subroutine_addresses = subroutines.keys()
    subroutine_addresses.sort()

    sub = 0

    for address in addresses:
        if sub < len(subroutine_addresses) and address == subroutine_addresses[sub]:
            if sub > 0: 
                print '*/'
                print '}'
            print '/*'
            print '*'
            print '*/'
            print subroutines[address]
            print '{'
            print '/*'
            sub += 1
        print code[address]
        try:
            test = subroutine_calls[address]
            print '*/'
            print subroutine_calls[address]
            print '/*'
        except:
            pass
   
    print '*/'
    print '}' 
    sys.exit(1)

main()
