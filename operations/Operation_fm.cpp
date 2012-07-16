
#include "Operation_fm.h"

namespace {
  const std::string opName = "FM";
}

Operation_fm::Operation_fm() :
AbstractOperation(opName)
{

}
Operation_fm::~Operation_fm()
{
}


void Operation_fm::execute() const
{
  AbstractOperation::execute();
}
