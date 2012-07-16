
#include "Operation_llb.h"

namespace {
  const std::string opName = "LLB";
}

Operation_llb::Operation_llb() :
AbstractOperation(opName)
{

}
Operation_llb::~Operation_llb()
{
}


void Operation_llb::execute() const
{
  AbstractOperation::execute();
}
