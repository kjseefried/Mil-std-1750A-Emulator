
#include "Operation_scr.h"

namespace {
  const std::string opName = "SCR";
}

Operation_scr::Operation_scr() :
AbstractOperation(opName)
{

}
Operation_scr::~Operation_scr()
{
}


void Operation_scr::execute() const
{
  AbstractOperation::execute();
}
