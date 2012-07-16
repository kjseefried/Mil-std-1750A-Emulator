
#ifndef PROCESSOR
#define PROCESSOR 

#include "Register.h"
#include "StatusWord.h"
#include "Memory.h"
#include "InterruptGenerator.h"

class AbstractInstruction;

class Processor {

public:
    Processor();
    virtual ~Processor();
    void clock();
    void step();
    void show();
    void execute();
    void interrupt(unsigned short int interruptNumber);
    void disableInterrupts() { m_interruptsEnabled = false ;}
    void enableInterrupts()  { m_interruptsEnabled = true ;}
    bool interruptsEnabled() const { return m_interruptsEnabled ;}

protected:
  const AbstractInstruction * m_debugInstruction;
  InterruptGenerator m_interruptGenerator;

private:
    bool m_interruptsEnabled;
    Value_i16 m_interruptedInstruction;
    unsigned short int m_lastInterrupt;
};


#endif
