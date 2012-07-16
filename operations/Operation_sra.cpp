
#include "Operation_sra.h"

namespace {
  const std::string opName = "SRA";
}

Operation_sra::Operation_sra() :
AbstractOperation(opName)
{

}
Operation_sra::~Operation_sra()
{
}


void Operation_sra::execute() const
{
AbstractOperation::execute();
}
