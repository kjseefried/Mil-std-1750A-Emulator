
#include "Operation_bex.h"

namespace {
  const std::string opName = "BEX";
}

Operation_bex::Operation_bex() :
AbstractOperation(opName)
{

}
Operation_bex::~Operation_bex()
{
}

void Operation_bex::execute() const
{
  AbstractOperation::execute();
}
