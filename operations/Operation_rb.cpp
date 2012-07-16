
#include "Operation_rb.h"

namespace {
  const std::string opName = "RB";
}

Operation_rb::Operation_rb() :
AbstractOperation(opName)
{

}
Operation_rb::~Operation_rb()
{
}


void Operation_rb::execute() const
{
  m_rightArg->resetBit(*m_v1);
}
