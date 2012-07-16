
#include "Operation_dc.h"

namespace {
  const std::string opName = "DC";
}

Operation_dc::Operation_dc() :
AbstractOperation(opName)
{

}
Operation_dc::~Operation_dc()
{
}


void Operation_dc::execute() const
{
  AbstractOperation::execute();
}
