
#include "Operation_efc.h"

namespace {
  const std::string opName = "EFC";
}

Operation_efc::Operation_efc() :
AbstractOperation(opName)
{

}
Operation_efc::~Operation_efc()
{
}


void Operation_efc::execute() const
{
  AbstractOperation::execute();
}
