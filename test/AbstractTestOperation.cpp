#include "AbstractTestOperation.h"
#include "ComponentRegistry.h"

AbstractTestOperation::AbstractTestOperation(const std::string & test) :
m_testString(test),
m_statusWord(ComponentRegistry::instance().statusWord()),
m_interruptMask(ComponentRegistry::instance().interruptMask()),
m_pendingInterrupts(ComponentRegistry::instance().pendingInterrupts()),
m_interrupts(ComponentRegistry::instance().interrupts()),
m_faults(ComponentRegistry::instance().faults()),
m_instructionCounter(ComponentRegistry::instance().instructionCounter()),
m_memory(ComponentRegistry::instance().memory()),
m_registerBank(ComponentRegistry::instance().registerBank()),
m_processor(ComponentRegistry::instance().processor())
{
}
AbstractTestOperation::~AbstractTestOperation() 
{

}
