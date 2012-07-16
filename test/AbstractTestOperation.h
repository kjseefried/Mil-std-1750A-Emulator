#ifndef ABSTRACT_TEST_OPERATION
#define ABSTRACT_TEST_OPERATION
#include <iostream>
#include <string>
#include "Value_i16.h"
#include "StatusWord.h"
#include "Register.h"
#include "RegisterBank.h"
#include "ComponentRegistry.h"
#include "Memory.h"
#include "Processor.h"

class AbstractTestOperation
{
public:
  AbstractTestOperation(const std::string & test) ;
  virtual ~AbstractTestOperation(); 


  virtual bool testOperation() const = 0;
  const std::string & string() const {return m_testString;}

protected:
  std::string m_testString;
  StatusWord & m_statusWord;
  Register & m_interruptMask;
  Register & m_pendingInterrupts;
  Register & m_interrupts;
  Register & m_faults;
  Register & m_instructionCounter;
  Memory   & m_memory;
  GeneralRegisters  & m_registerBank;
  Processor & m_processor;
};

#endif

