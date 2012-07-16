
#include "Operation_tvbr.h"

namespace {
  const std::string opName = "TVBR";
}

Operation_tvbr::Operation_tvbr() :
AbstractOperation(opName)
{

}
Operation_tvbr::~Operation_tvbr()
{
}


void Operation_tvbr::execute() const
{

  if (! m_rightArg->testBit(m_leftArg->nib4()))
  {
    m_statusWord.cs(0x2);
  }
  else
  {
    if (m_leftArg->nib4() == 0)
    {
      m_statusWord.cs(0x1);
    }
    else
    {
      m_statusWord.cs(0x4);
    }
  }

}
