
#include "Operation_flt.h"

namespace {
  const std::string opName = "FLT";
}

Operation_flt::Operation_flt() :
AbstractOperation(opName)
{

}
Operation_flt::~Operation_flt()
{
}


void Operation_flt::execute() const
{
  AbstractOperation::execute();
}
