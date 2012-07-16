
#include "Operation_dneg.h"

namespace {
  const std::string opName = "DNEG";
}

Operation_dneg::Operation_dneg() :
AbstractOperation(opName)
{

}
Operation_dneg::~Operation_dneg()
{
}


void Operation_dneg::execute() const
{
  AbstractOperation::execute();
}
