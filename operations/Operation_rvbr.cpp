
#include "Operation_rvbr.h"

namespace {
  const std::string opName = "RVBR";
}

Operation_rvbr::Operation_rvbr() :
AbstractOperation(opName)
{

}
Operation_rvbr::~Operation_rvbr()
{
}


void Operation_rvbr::execute() const
{
  m_rightArg->resetBit(m_leftArg->nib4());
}
