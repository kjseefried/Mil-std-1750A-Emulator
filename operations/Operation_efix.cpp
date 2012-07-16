
#include "Operation_efix.h"

namespace {
  const std::string opName = "EFIX";
}

Operation_efix::Operation_efix() :
AbstractOperation(opName)
{

}
Operation_efix::~Operation_efix()
{
}


void Operation_efix::execute() const
{
  AbstractOperation::execute();
}
