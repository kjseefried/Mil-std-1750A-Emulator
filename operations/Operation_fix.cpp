
#include "Operation_fix.h"

namespace {
  const std::string opName = "FIX";
}

Operation_fix::Operation_fix() :
AbstractOperation(opName)
{

}
Operation_fix::~Operation_fix()
{
}


void Operation_fix::execute() const
{
  AbstractOperation::execute();
}
