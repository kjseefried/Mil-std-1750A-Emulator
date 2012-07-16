
#include "Operation_slc.h"

namespace {
  const std::string opName = "SLC";
}

Operation_slc::Operation_slc() :
AbstractOperation(opName)
{

}
Operation_slc::~Operation_slc()
{
}


void Operation_slc::execute() const
{
  AbstractOperation::execute();
}
