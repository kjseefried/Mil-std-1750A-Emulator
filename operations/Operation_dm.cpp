
#include "Operation_dm.h"

namespace {
  const std::string opName = "DM";
}

Operation_dm::Operation_dm() :
AbstractOperation(opName)
{

}
Operation_dm::~Operation_dm()
{
}


void Operation_dm::execute() const
{
  AbstractOperation::execute();
}
