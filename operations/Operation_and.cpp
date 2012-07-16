
#include "Operation_and.h"

namespace {
  const std::string opName = "AND";
}

Operation_and::Operation_and() :
AbstractOperation(opName)
{

}
Operation_and::~Operation_and()
{
}


void Operation_and::execute() const
{
  *m_leftArg &= *m_rightArg;
  m_statusWord.setCs(*m_leftArg);
}
