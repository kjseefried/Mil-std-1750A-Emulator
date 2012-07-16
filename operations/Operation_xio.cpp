
#include "Operation_xio.h"
#include "ComponentRegistry.h"

namespace {
  const std::string opName = "XIO";
}

Operation_xio::Operation_xio() :
AbstractOperation(opName)
{
  m_20Functions[0] = &Operation_xio::setInterruptMask;
  m_20Functions[1] = &Operation_xio::clearInterrupts;
  m_20Functions[2] = &Operation_xio::enableInterrupts;
  m_20Functions[3] = &Operation_xio::disableInterrupts;
  m_20Functions[4] = &Operation_xio::resetPendingInterrupts;
  m_20Functions[5] = &Operation_xio::setPendingInterruptRegister;
  m_20Functions[6] = &Operation_xio::doNothing;
  m_20Functions[7] = &Operation_xio::doNothing;
  m_20Functions[8] = &Operation_xio::outputDiscretes;
  m_20Functions[9] = &Operation_xio::doNothing;
  m_20Functions[0xA] = &Operation_xio::doNothing;
  m_20Functions[0xB] = &Operation_xio::doNothing;
  m_20Functions[0xC] = &Operation_xio::doNothing;
  m_20Functions[0xD] = &Operation_xio::doNothing;
  m_20Functions[0xE] = &Operation_xio::writeStatusWord;
  m_20Functions[0xF] = &Operation_xio::doNothing;
  m_A0Functions[0x0] = &Operation_xio::readInterruptMask;
  m_A0Functions[0x1] = &Operation_xio::doNothing;
  m_A0Functions[0x2] = &Operation_xio::doNothing;
  m_A0Functions[0x3] = &Operation_xio::doNothing;
  m_A0Functions[0x4] = &Operation_xio::readPendingInterruptRegister;
  m_A0Functions[0x5] = &Operation_xio::doNothing;
  m_A0Functions[0x6] = &Operation_xio::doNothing;
  m_A0Functions[0x7] = &Operation_xio::doNothing;
  m_A0Functions[0x8] = &Operation_xio::doNothing;
  m_A0Functions[0x9] = &Operation_xio::doNothing;
  m_A0Functions[0xA] = &Operation_xio::doNothing;
  m_A0Functions[0xB] = &Operation_xio::doNothing;
  m_A0Functions[0xC] = &Operation_xio::doNothing;
  m_A0Functions[0xD] = &Operation_xio::doNothing;
  m_A0Functions[0xE] = &Operation_xio::readStatusWord;
  m_A0Functions[0xF] = &Operation_xio::readClearFaultRegister;


}
Operation_xio::~Operation_xio()
{
}


void Operation_xio::execute() const
{
  if ((m_rightArg->value() & 0xff00) == 0x2000)
  {
    ((*this).*m_20Functions[m_rightArg->value() & 0xf])();
  }
  else if ((m_rightArg->value() & 0xff00) == 0xA000)
  {
    ((*this).*m_A0Functions[m_rightArg->value() & 0xf])();
  }
  else if ((m_rightArg->value() & 0xff00) == 0x5100)
  {
    m_pageRegisters.writeInstructionRegister(m_rightArg->nib3(), m_rightArg->nib4(), *m_leftArg);
  }
  else if ((m_rightArg->value() & 0xff00) == 0x5200)
  {
    m_pageRegisters.writeOperandRegister(m_rightArg->nib3(), m_rightArg->nib4(), *m_leftArg);
  }
  else if ((m_rightArg->value() & 0xfc00) == 0x0000)
  {
    std::cout << "Programmed Output" << std::endl;
  }
  else if ((m_rightArg->value() & 0xfc00) == 0x8000)
  {
    std::cout << "Programmed Input" << std::endl;
  }
  else
  {
    static bool already = false;
    if (!already)
    {
      std::cout << "Not all XIO functions implemented. " << std::hex << m_rightArg->value() << std::endl;
  //    already = true;
    }
  }
}

void Operation_xio::writeStatusWord() const
{
  m_statusWord.write(m_leftArg->value());  
}
void Operation_xio::setInterruptMask() const
{
  m_interruptMask.write(*m_leftArg);  
}
void Operation_xio::clearInterrupts() const
{
  m_pendingInterrupts.write(0);  
  m_faults.write(0);  
}
void Operation_xio::enableInterrupts() const
{
  m_processor.enableInterrupts();
}
void Operation_xio::disableInterrupts() const
{
  m_processor.disableInterrupts();
}
void Operation_xio::resetPendingInterrupts() const
{
  m_pendingInterrupts.valueRef().resetBit(static_cast<unsigned short int>(m_leftArg->value()));
  if (*m_leftArg == 1)
  {
    m_faults.write(0);
  }
}
void Operation_xio::setPendingInterruptRegister() const
{
  m_pendingInterrupts.write(m_pendingInterrupts.read() | *m_leftArg);
}

void Operation_xio::outputDiscretes() const
{
  std::cout << "Discrete Buffer not implemented" << std::endl;
}
void Operation_xio::readInterruptMask() const
{
  *m_leftArg = m_interruptMask.read();
}
void Operation_xio::readPendingInterruptRegister() const
{
  *m_leftArg = m_pendingInterrupts.read();
}
void Operation_xio::readStatusWord() const
{
  *m_leftArg = m_statusWord.read();
}
void Operation_xio::readClearFaultRegister() const
{
  *m_leftArg = m_faults.read();
  m_faults.write(0);  
}
