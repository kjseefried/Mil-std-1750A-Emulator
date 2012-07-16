#include "InterruptGenerator.h"
#include "ComponentRegistry.h"

InterruptGenerator::InterruptGenerator()
{
}

InterruptGenerator::~InterruptGenerator()
{
}

void InterruptGenerator::addInterrupt(unsigned short int interrupt)
{
  // Add new interrupt to pending interrupts
  ComponentRegistry::instance().pendingInterrupts().valueRef().setBit(interrupt);
  sendInterrupt();

}
void InterruptGenerator::sendInterrupt() const
{
  short int interruptToSend = highestPriority();

  if (interruptToSend >= 0)
  {
    ComponentRegistry::instance().processor().interrupt(interruptToSend);
  }
}

short int InterruptGenerator::highestPriority() const
{
  // Note that interrupt 1 & 5 cannot be masked, hence the or with x0101
  unsigned short int available = ComponentRegistry::instance().pendingInterrupts().value() & 
                                 (0x101 | ComponentRegistry::instance().interruptMask().value());

  unsigned short bit = 1 << 15;
  unsigned short int interrupt = 0;

  for (; interrupt < 16; bit >>= 1, interrupt++)
  {
    if ((bit & available) == bit)
    {
      return interrupt;
    }
  }
  return -1;
}
