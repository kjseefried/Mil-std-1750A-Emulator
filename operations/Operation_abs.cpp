
#include "Operation_abs.h"

namespace {
  const std::string opName = "ABS";
}

Operation_abs::Operation_abs() :
AbstractOperation(opName)
{

}
Operation_abs::~Operation_abs()
{
}


void Operation_abs::execute() const
{
  AbstractOperation::execute();
}
