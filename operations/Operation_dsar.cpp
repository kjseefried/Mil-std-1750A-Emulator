
#include "Operation_dsar.h"

namespace {
  const std::string opName = "DSAR";
}

Operation_dsar::Operation_dsar() :
AbstractOperation(opName)
{

}
Operation_dsar::~Operation_dsar()
{
}


void Operation_dsar::execute() const
{
  AbstractOperation::execute();
}
