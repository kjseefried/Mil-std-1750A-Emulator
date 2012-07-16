
#include "Operation_efm.h"

namespace {
  const std::string opName = "EFM";
}

Operation_efm::Operation_efm() :
AbstractOperation(opName)
{

}
Operation_efm::~Operation_efm()
{
}


void Operation_efm::execute() const
{
  AbstractOperation::execute();
}
