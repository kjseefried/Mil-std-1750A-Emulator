
#include "Operation_l.h"

namespace {
  const std::string opName = "L";
}

Operation_l::Operation_l() :
AbstractOperation(opName)
{

}
Operation_l::~Operation_l()
{
}


void Operation_l::execute() const
{
  *m_leftArg = *m_rightArg;
  m_statusWord.setCs(*m_leftArg);
}
