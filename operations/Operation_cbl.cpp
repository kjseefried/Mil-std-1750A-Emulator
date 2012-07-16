
#include "Operation_cbl.h"

namespace {
  const std::string opName = "CBL";
}

Operation_cbl::Operation_cbl() :
AbstractOperation(opName)
{

}
Operation_cbl::~Operation_cbl()
{
}


void Operation_cbl::execute() const
{
  AbstractOperation::execute();
}
