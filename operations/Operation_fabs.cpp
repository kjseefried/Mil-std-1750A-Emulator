
#include "Operation_fabs.h"

namespace {
  const std::string opName = "FABS";
}

Operation_fabs::Operation_fabs() :
AbstractOperation(opName)
{

}
Operation_fabs::~Operation_fabs()
{
}


void Operation_fabs::execute() const
{
  AbstractOperation::execute();
}
