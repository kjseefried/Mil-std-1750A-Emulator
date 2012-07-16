
#include "Operation_efl.h"

namespace {
  const std::string opName = "EFL";
}

Operation_efl::Operation_efl() :
AbstractOperation(opName)
{

}
Operation_efl::~Operation_efl()
{
}


void Operation_efl::execute() const
{
  AbstractOperation::execute();
}
