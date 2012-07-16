
#include "Operation_dslr.h"

namespace {
  const std::string opName = "DSLR";
}

Operation_dslr::Operation_dslr() :
AbstractOperation(opName)
{

}
Operation_dslr::~Operation_dslr()
{
}


void Operation_dslr::execute() const
{
  AbstractOperation::execute();
}
