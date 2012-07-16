
#include "Operation_slr.h"

namespace {
  const std::string opName = "SLR";
}

Operation_slr::Operation_slr() :
AbstractOperation(opName)
{

}
Operation_slr::~Operation_slr()
{
}


void Operation_slr::execute() const
{
  if (*m_rightArg >= 0) 
  {
    if (*m_rightArg <= 15)
    {
      *m_leftArg <<= (m_rightArg->value());
    }
    else
    {
      std::cout << "Fixed point overflow" << std::endl;
      return;
    }
  }
  else
  {
    if (*m_rightArg >= -15)
    {
      *m_leftArg >>= (-1 * m_rightArg->value());
    }
    else
    {
      std::cout << "Fixed point overflow" << std::endl;
      return;
    }
  }
  m_statusWord.setCs(*m_leftArg);
}
