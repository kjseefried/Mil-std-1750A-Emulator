
#include "Operation_slb.h"

namespace {
  const std::string opName = "SLB";
}

Operation_slb::Operation_slb() :
AbstractOperation(opName)
{

}
Operation_slb::~Operation_slb()
{
}


void Operation_slb::execute() const
{
  m_rightArg->lsb(m_leftArg->lsb());
}
