
#include "Operation_fs.h"

namespace {
  const std::string opName = "FS";
}

Operation_fs::Operation_fs() :
AbstractOperation(opName)
{

}
Operation_fs::~Operation_fs()
{
}


void Operation_fs::execute() const
{
  AbstractOperation::execute();
}
