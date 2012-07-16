
#include "Operation_ds.h"

namespace {
  const std::string opName = "DS";
}

Operation_ds::Operation_ds() :
AbstractOperation(opName)
{

}
Operation_ds::~Operation_ds()
{
}


void Operation_ds::execute() const
{
  AbstractOperation::execute();
}
