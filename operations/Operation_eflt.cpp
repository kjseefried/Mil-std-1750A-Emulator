
#include "Operation_eflt.h"

namespace {
  const std::string opName = "EFLT";
}

Operation_eflt::Operation_eflt() :
AbstractOperation(opName)
{

}
Operation_eflt::~Operation_eflt()
{
}


void Operation_eflt::execute() const
{
  AbstractOperation::execute();
}
