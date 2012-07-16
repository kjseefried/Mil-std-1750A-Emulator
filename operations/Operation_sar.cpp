
#include "Operation_sar.h"

namespace {
  const std::string opName = "SAR";
}

Operation_sar::Operation_sar() :
AbstractOperation(opName)
{

}
Operation_sar::~Operation_sar()
{
}


void Operation_sar::execute() const
{
  AbstractOperation::execute();
}
