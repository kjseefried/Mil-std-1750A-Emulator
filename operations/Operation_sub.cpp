
#include "Operation_sub.h"

namespace {
  const std::string opName = "SUB";
}

Operation_sub::Operation_sub() :
AbstractOperation(opName)
{

}
Operation_sub::~Operation_sub()
{
}


void Operation_sub::execute() const
{
  m_rightArg->msb(m_leftArg->lsb());
}
