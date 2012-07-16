
#include "Operation_dslc.h"

namespace {
  const std::string opName = "DSLC";
}

Operation_dslc::Operation_dslc() :
AbstractOperation(opName)
{

}
Operation_dslc::~Operation_dslc()
{
}


void Operation_dslc::execute() const
{
  AbstractOperation::execute();
}
