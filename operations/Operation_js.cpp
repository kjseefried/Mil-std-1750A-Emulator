
#include "Operation_js.h"

namespace {
  const std::string opName = "JS";
}

Operation_js::Operation_js() :
AbstractOperation(opName)
{

}
Operation_js::~Operation_js()
{
}


void Operation_js::execute() const
{
  AbstractOperation::execute();
}
