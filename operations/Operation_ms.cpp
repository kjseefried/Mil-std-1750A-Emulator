
#include "Operation_ms.h"

namespace {
  const std::string opName = "MS";
}

Operation_ms::Operation_ms() :
AbstractOperation(opName)
{

}
Operation_ms::~Operation_ms()
{
}


void Operation_ms::execute() const
{
  AbstractOperation::execute();
}
