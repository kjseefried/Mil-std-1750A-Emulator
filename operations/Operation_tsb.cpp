
#include "Operation_tsb.h"

namespace {
  const std::string opName = "TSB";
}

Operation_tsb::Operation_tsb() :
AbstractOperation(opName)
{

}
Operation_tsb::~Operation_tsb()
{
}


void Operation_tsb::execute() const
{
  if (! m_rightArg->testBit(*m_v1))
  {
    m_statusWord.cs(0x2);
  }
  else
  {
    if (*m_v1 == 0)
    {
      m_statusWord.cs(0x1);
    }
    else
    {
      m_statusWord.cs(0x4);
    }
  }
  m_rightArg->setBit(*m_v1);
}
