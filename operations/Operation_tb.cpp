
#include "Operation_tb.h"

namespace {
  const std::string opName = "TB";
}

Operation_tb::Operation_tb() :
AbstractOperation(opName)
{

}
Operation_tb::~Operation_tb()
{
}


void Operation_tb::execute() const
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
}
