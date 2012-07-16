
#include "Operation_lub.h"

namespace {
  const std::string opName = "LUB";
}

Operation_lub::Operation_lub() :
AbstractOperation(opName)
{

}
Operation_lub::~Operation_lub()
{
}


void Operation_lub::execute() const
{
  AbstractOperation::execute();
}
