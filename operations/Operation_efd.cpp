
#include "Operation_efd.h"

namespace {
  const std::string opName = "EFD";
}

Operation_efd::Operation_efd() :
AbstractOperation(opName)
{

}
Operation_efd::~Operation_efd()
{
}


void Operation_efd::execute() const
{
  AbstractOperation::execute();
}
