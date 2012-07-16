
#include "Operation_fa.h"

namespace {
  const std::string opName = "FA";
}

Operation_fa::Operation_fa() :
AbstractOperation(opName)
{

}
Operation_fa::~Operation_fa()
{
}


void Operation_fa::execute() const
{
  AbstractOperation::execute();
}
