
#include "Operation_s.h"

namespace {
  const std::string opName = "S";
}

Operation_s::Operation_s() :
AbstractOperation(opName)
{

}
Operation_s::~Operation_s()
{
}


void Operation_s::execute() const
{
  *m_leftArg -= *m_rightArg;
}
