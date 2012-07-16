
#include "Operation_dabs.h"

namespace {
  const std::string opName = "DABS";
}

Operation_dabs::Operation_dabs() :
AbstractOperation(opName)
{

}
Operation_dabs::~Operation_dabs()
{
}


void Operation_dabs::execute() const
{
  AbstractOperation::execute();
}
