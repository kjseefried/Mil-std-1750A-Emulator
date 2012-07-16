
#include "Operation_efst.h"

namespace {
  const std::string opName = "EFST";
}

Operation_efst::Operation_efst() :
AbstractOperation(opName)
{

}
Operation_efst::~Operation_efst()
{
}


void Operation_efst::execute() const
{
  AbstractOperation::execute();
}
