
#include "Operation_stc.h"

namespace {
  const std::string opName = "STC";
}

Operation_stc::Operation_stc() :
AbstractOperation(opName)
{

}
Operation_stc::~Operation_stc()
{
}


void Operation_stc::execute() const
{
  *m_rightArg = *m_v1;
}
