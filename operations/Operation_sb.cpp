
#include "Operation_sb.h"

namespace {
  const std::string opName = "SB";
}

Operation_sb::Operation_sb() :
AbstractOperation(opName)
{

}
Operation_sb::~Operation_sb()
{
}


void Operation_sb::execute() const
{
  m_rightArg->setBit(*m_v1);
}
