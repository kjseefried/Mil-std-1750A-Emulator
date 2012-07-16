
#include "Operation_nop.h"

namespace {
  const std::string opName = "NOP";
}

Operation_nop::Operation_nop() :
AbstractOperation(opName)
{

}
Operation_nop::~Operation_nop()
{
}


void Operation_nop::execute() const
{
}
