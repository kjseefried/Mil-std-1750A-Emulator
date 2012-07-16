
#include "Operation_n.h"

namespace {
  const std::string opName = "N";
}

Operation_n::Operation_n() :
AbstractOperation(opName)
{

}
Operation_n::~Operation_n()
{
}


void Operation_n::execute() const
{
  *m_leftArg &= *m_rightArg;
  *m_leftArg = ~(*m_rightArg);
  m_statusWord.setCs(*m_leftArg);
}
