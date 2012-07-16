
#include "Operation_dd.h"

namespace {
  const std::string opName = "DD";
}

Operation_dd::Operation_dd() :
AbstractOperation(opName)
{

}
Operation_dd::~Operation_dd()
{
}


void Operation_dd::execute() const
{
  AbstractOperation::execute();
}
