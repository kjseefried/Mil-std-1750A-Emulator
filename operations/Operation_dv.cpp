
#include "Operation_dv.h"

namespace {
  const std::string opName = "DV";
}

Operation_dv::Operation_dv() :
AbstractOperation(opName)
{

}
Operation_dv::~Operation_dv()
{
}


void Operation_dv::execute() const
{
  AbstractOperation::execute();
}
