
#include "Operation_svbr.h"

namespace {
  const std::string opName = "SVBR";
}

Operation_svbr::Operation_svbr() :
AbstractOperation(opName)
{

}
Operation_svbr::~Operation_svbr()
{
}


void Operation_svbr::execute() const
{
  m_rightArg->setBit(m_leftArg->nib4());
}
