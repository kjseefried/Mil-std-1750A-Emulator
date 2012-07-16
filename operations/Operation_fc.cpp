
#include "Operation_fc.h"

namespace {
  const std::string opName = "FC";
}

Operation_fc::Operation_fc() :
AbstractOperation(opName)
{

}
Operation_fc::~Operation_fc()
{
}


void Operation_fc::execute() const
{
  AbstractOperation::execute();
}
