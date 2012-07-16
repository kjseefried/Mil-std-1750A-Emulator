
#include "Operation_fneg.h"

namespace {
  const std::string opName = "FNEG";
}

Operation_fneg::Operation_fneg() :
AbstractOperation(opName)
{

}
Operation_fneg::~Operation_fneg()
{
}


void Operation_fneg::execute() const
{
  AbstractOperation::execute();
}
