
#include "Operation_efa.h"

namespace {
  const std::string opName = "EFA";
}

Operation_efa::Operation_efa() :
AbstractOperation(opName)
{

}
Operation_efa::~Operation_efa()
{
}


void Operation_efa::execute() const
{
  AbstractOperation::execute();
}
