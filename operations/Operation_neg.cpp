
#include "Operation_neg.h"

namespace {
  const std::string opName = "NEG";
}

Operation_neg::Operation_neg() :
AbstractOperation(opName)
{

}
Operation_neg::~Operation_neg()
{
}


void Operation_neg::execute() const
{
  AbstractOperation::execute();
}
