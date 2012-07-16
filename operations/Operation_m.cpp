
#include "Operation_m.h"

namespace {
  const std::string opName = "M";
}

Operation_m::Operation_m() :
AbstractOperation(opName)
{

}
Operation_m::~Operation_m()
{
}


void Operation_m::execute() const
{
  AbstractOperation::execute();
}
