
#include "Operation_incm.h"

namespace {
  const std::string opName = "INCM";
}

Operation_incm::Operation_incm() :
AbstractOperation(opName)
{

}
Operation_incm::~Operation_incm()
{
}


void Operation_incm::execute() const
{
  m_rightArg->increment((*m_v1) + 1);
}
