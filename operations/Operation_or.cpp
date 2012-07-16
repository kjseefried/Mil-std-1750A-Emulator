
#include "Operation_or.h"

namespace {
  const std::string opName = "OR";
}

Operation_or::Operation_or() :
AbstractOperation(opName)
{

}
Operation_or::~Operation_or()
{
}


void Operation_or::execute() const
{
  *m_leftArg |= *m_rightArg;
  m_statusWord.setCs(*m_leftArg);
}
