
#include "Operation_dsrl.h"

namespace {
  const std::string opName = "DSRL";
}

Operation_dsrl::Operation_dsrl() :
AbstractOperation(opName)
{

}
Operation_dsrl::~Operation_dsrl()
{
}


void Operation_dsrl::execute() const
{
  *m_rightArg32 >>= (1 + *m_v1);
  m_statusWord.setCs(*m_rightArg32);
}
