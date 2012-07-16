
#ifndef COMPONENT_REGISTRY
#define COMPONENT_REGISTRY 

#include "Processor.h"
#include "Register.h"
#include "RegisterBank.h"
#include "PageRegisters.h"
#include "Memory.h"
#include "StatusWord.h"
#include "InterruptGenerator.h"

typedef RegisterBank<16,16> GeneralRegisters;

class ComponentRegistry {

public:
    static ComponentRegistry & instance();
    virtual ~ComponentRegistry();

    Processor & processor() { return m_processor; }
    Register & instructionCounter() { return m_instructionCounter; }
    Register & pendingInterrupts() { return m_pendingInterrupts; }
    Register & interruptMask() { return m_interruptMask; }
    Register & interrupts() { return m_interrupts; }
    Register & faults() { return m_faults; }
    Memory   & memory() { return m_memory; }
    GeneralRegisters & registerBank() {return m_registers;}
    StatusWord & statusWord() {return m_statusWord;}
    InterruptGenerator & interruptGenerator() {return m_interruptGenerator;}
    PageRegisters & pageRegisters() {return m_pageRegisters;}

protected:

private:
    ComponentRegistry();

    Processor m_processor;
    Register  m_instructionCounter;
    Register  m_pendingInterrupts;
    Register  m_interruptMask;
    Register  m_interrupts;
    Register  m_faults;
    PageRegisters  m_pageRegisters;
    Memory    m_memory;
    GeneralRegisters m_registers;
    StatusWord m_statusWord;
    InterruptGenerator m_interruptGenerator;
};


#endif
