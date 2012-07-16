
#include "Operation_dscr.h"

namespace {
  const std::string opName = "DSCR";
}

Operation_dscr::Operation_dscr() :
AbstractOperation(opName)
{

}
Operation_dscr::~Operation_dscr()
{
}


void Operation_dscr::execute() const
{
  AbstractOperation::execute();
}
