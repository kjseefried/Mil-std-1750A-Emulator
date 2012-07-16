#include <iostream>
#include "Operation_xor.h"

namespace {
  const std::string opName = "XOR";
}

Operation_xor::Operation_xor() :
AbstractOperation(opName)
{

}
Operation_xor::~Operation_xor()
{
}


void Operation_xor::execute() const
{
  *m_leftArg ^= *m_rightArg;
  m_statusWord.setCs(*m_rightArg);
}
