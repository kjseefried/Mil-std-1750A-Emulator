
#include <iostream>
#include <iomanip>
#include "InstructionRegistry.h"
#include "ComponentRegistry.h"
#include "Processor.h"
#include "Register.h"
#include "Memory.h"

namespace
{
  unsigned short int interruptLinkagePointerAddress[] = {0x20, 0x22, 0x24, 0x26, 0x28, 0x2A, 0x2C, 0x2E, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3A, 0x3C, 0x3E};
  unsigned short int interruptServicePointerAddress[] = {0x21, 0x23, 0x25, 0x27, 0x29, 0x2B, 0x2D, 0x2F, 0x31, 0x33, 0x35, 0x37, 0x39, 0x3B, 0x3D, 0x3F};
  bool alwaysEnabledInterrupts[] = {1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};	
}

Processor::Processor() :
m_debugInstruction(0),
m_interruptsEnabled(true),
m_interruptedInstruction(0),
m_lastInterrupt(0xff)
{
}

Processor::~Processor()
{
}
void Processor::step()
{
  static Memory & s_memory = ComponentRegistry::instance().memory();
  static InstructionRegistry & ir = InstructionRegistry::instance();
  static Register & s_instructionCounter = ComponentRegistry::instance().instructionCounter();
//  Value_i16 & data = memory.read(ic.read());
  m_debugInstruction = ir.findInstruction(s_memory.read(s_instructionCounter.read()));  

  if (m_debugInstruction)
  {
    m_debugInstruction->setData(s_memory.read(s_instructionCounter.read()));

    unsigned int additionalIncrements = 0;
    while (m_debugInstruction->more())
    {
      s_instructionCounter.increment();
      additionalIncrements++;
//      data = memory.read(ic.read());     
      m_debugInstruction->setData(s_memory.read(s_instructionCounter.read()));
    }
    while (additionalIncrements > 0)
    {
      s_instructionCounter.decrement();
      additionalIncrements--;
    }

  }
}
void Processor::show()
{
  static Register & s_instructionCounter = ComponentRegistry::instance().instructionCounter();
  unsigned short int address = s_instructionCounter.value();
  if (m_debugInstruction)
  {
    std::cout << std::hex << std::uppercase << std::setfill('0') << std::setw(8) << std::right << address << "  :  ";
    std::cout << std::setw(8) << std::setfill(' ') << std::right << m_debugInstruction->data() << "  :  ";
    std::cout << std::setfill(' ') << std::setw(4) << std::left << m_debugInstruction->opcode_str() << " : ";
    std::cout << std::setw(40) << std::setfill(' ') << std::left << m_debugInstruction->details();
    std::cout << " ! " << m_debugInstruction->description();
    std::cout << std::endl;
  }
  else
  {
    std::cout << " ! No valid instruction at address: " << s_instructionCounter.read() << std::endl;
  }

}
void Processor::execute()
{
  static Register & s_instructionCounter = ComponentRegistry::instance().instructionCounter();
  Value_i16 icv = s_instructionCounter.value();

  if ((m_lastInterrupt < 16) && (m_interruptedInstruction == icv))
  {
    ComponentRegistry::instance().pendingInterrupts().valueRef().resetBit(m_lastInterrupt);
    m_lastInterrupt = 0xff;
  }

  m_debugInstruction->execute();
  // Increment the counter here, unless it was changed by the instruction
  if (icv == s_instructionCounter.value())
  {
    s_instructionCounter.increment(m_debugInstruction->size());
  }

}
void Processor::clock()
{
  step();
  execute();
}

void Processor::interrupt(unsigned short int interruptNumber)
{
  if ((!m_interruptsEnabled) && (!alwaysEnabledInterrupts[interruptNumber]))
  {
    return;
  }

  static Memory & s_memory = ComponentRegistry::instance().memory();
  static StatusWord & s_statusWord = ComponentRegistry::instance().statusWord();
  static Register & s_interruptMask = ComponentRegistry::instance().interruptMask();
  static Register & s_instructionCounter = ComponentRegistry::instance().instructionCounter();

  disableInterrupts();
  m_lastInterrupt = interruptNumber;
  m_interruptedInstruction = s_instructionCounter.value();

  Value_i16 lpa = s_memory.read(interruptLinkagePointerAddress[interruptNumber]);

  s_memory.write(lpa, s_interruptMask.value());
  s_memory.write(lpa + 1, s_statusWord.value());
  s_memory.write(lpa + 2, s_instructionCounter.value());

  Value_i16 spa = s_memory.read(interruptServicePointerAddress[interruptNumber]);

  s_interruptMask.write(s_memory.read(spa));
  s_statusWord.write(s_memory.read(spa + 1));
  s_instructionCounter.write(s_memory.read(spa + 2));

  std::cout << "Not resetting pending interrupts!" << std::endl;
}

