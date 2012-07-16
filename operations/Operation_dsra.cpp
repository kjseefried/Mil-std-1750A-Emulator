
#include "Operation_dsra.h"

namespace {
  const std::string opName = "DSRA";
}

Operation_dsra::Operation_dsra() :
AbstractOperation(opName)
{

}
Operation_dsra::~Operation_dsra()
{
}


void Operation_dsra::execute() const
{
  AbstractOperation::execute();
}
