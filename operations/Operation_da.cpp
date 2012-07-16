
#include "Operation_da.h"

namespace {
  const std::string opName = "DA";
}

Operation_da::Operation_da() :
AbstractOperation(opName)
{

}
Operation_da::~Operation_da()
{
}


void Operation_da::execute() const
{
  bool sameSign = m_leftArg32->testBit(0) == m_rightArg32->testBit(0);
  *m_leftArg32 += *m_rightArg32;
  m_statusWord.setCs(*m_leftArg);

  if ((sameSign) && (m_leftArg32->testBit(0) != m_rightArg32->testBit(0)))
  {
    m_pendingInterrupts.valueRef().setBit(4);
    std::cout << "Fixed point overflow, should trigger interrupt" << std::endl;
  }
}
