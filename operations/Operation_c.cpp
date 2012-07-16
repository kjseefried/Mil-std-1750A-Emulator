#include <iostream>
#include "Operation_c.h"

namespace {
  const std::string opName = "C";
}

Operation_c::Operation_c() :
AbstractOperation(opName)
{

}
Operation_c::~Operation_c()
{
}


void Operation_c::execute() const
{
  m_statusWord.setCs(m_leftArg->value() - m_rightArg->value());
}
