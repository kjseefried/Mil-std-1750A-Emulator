
#include "Operation_a.h"

namespace {
  const std::string opName = "A";
}

Operation_a::Operation_a() :
AbstractOperation(opName)
{

}
Operation_a::~Operation_a()
{
}


void Operation_a::execute() const
{
  *m_leftArg += *m_rightArg;
}
