
#include "Operation_vio.h"

namespace {
  const std::string opName = "VIO";
}

Operation_vio::Operation_vio() :
AbstractOperation(opName)
{

}
Operation_vio::~Operation_vio()
{
}


void Operation_vio::execute() const
{
  AbstractOperation::execute();
}
