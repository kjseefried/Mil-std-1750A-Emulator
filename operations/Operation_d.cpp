
#include "Operation_d.h"

namespace {
  const std::string opName = "D";
}

Operation_d::Operation_d() :
AbstractOperation(opName)
{

}
Operation_d::~Operation_d()
{
}


void Operation_d::execute() const
{
  AbstractOperation::execute();
}
