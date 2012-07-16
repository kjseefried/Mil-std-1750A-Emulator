
#include "Operation_efs.h"

namespace {
  const std::string opName = "EFS";
}

Operation_efs::Operation_efs() :
AbstractOperation(opName)
{

}
Operation_efs::~Operation_efs()
{
}


void Operation_efs::execute() const
{
  AbstractOperation::execute();
}
