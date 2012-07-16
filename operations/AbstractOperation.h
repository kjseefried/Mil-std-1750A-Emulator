
#ifndef ABSTRACT_OPERATION
#define ABSTRACT_OPERATION
#include <iostream>
#include <string>
#include "Value_i16.h"
#include "Value_i32.h"
#include "StatusWord.h"
#include "Register.h"
#include "RegisterBank.h"
#include "ComponentRegistry.h"
#include "Memory.h"

class AbstractOperation {

public:
    AbstractOperation(const std::string & opName);
    virtual ~AbstractOperation() = 0;

    virtual void print() const;
    virtual void execute() const;
    virtual void execute_register2Register(unsigned short r1, unsigned short r2);
    virtual void execute_baseRelative(unsigned short r1, unsigned short r2, unsigned short int displ);
    virtual void execute_baseRelativeIndexed(unsigned short r1, unsigned short r2, unsigned short int displ);
    virtual void execute_immediate(unsigned short r1, const Value_i16 & data);
    virtual void execute_longInstructionData(unsigned short r1, unsigned short r2, const Value_i16 & data);
    virtual void execute_longInstructionDirectAddr(unsigned short r1, unsigned short r2, const Value_i16 & data);
    virtual void execute_longInstructionIndirectAddr(unsigned short r1, unsigned short r2, const Value_i16 & data);
    virtual void execute_counterRelative(unsigned short d);
    virtual void execute_immediateShortPositive(unsigned short r1, unsigned short r2);
    virtual void execute_immediateShortNegative(unsigned short r1, unsigned short r2);
    static Value_i16 s_nullValue;

protected:
    std::string m_name;
   
    unsigned short int * m_v1;
    unsigned short int * m_v2;
 
    Value_i16 * m_leftArg;
    Value_i16 * m_rightArg;
    Value_i16 * m_da;

    Value_i32 * m_leftArg32;
    Value_i32 * m_rightArg32;

    StatusWord & m_statusWord;
    Register & m_interruptMask;
    Register & m_pendingInterrupts;
    Processor & m_processor;
    Register & m_faults;
    Register & m_instructionCounter;
    Memory   & m_memory;
    GeneralRegisters  & m_registerBank;
    PageRegisters  & m_pageRegisters;
private:

  AbstractOperation(const AbstractOperation &);
  AbstractOperation & operator=(const AbstractOperation &);
};


std::ostream & operator<<(std::ostream & os, const AbstractOperation & operation);
#endif
