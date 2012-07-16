
#include "Operation_fd.h"

namespace {
  const std::string opName = "FD";
}

Operation_fd::Operation_fd() :
AbstractOperation(opName)
{

}
Operation_fd::~Operation_fd()
{
}


void Operation_fd::execute() const
{
  AbstractOperation::execute();
}
