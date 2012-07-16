
#include "Operation_srm.h"

namespace {
  const std::string opName = "SRM";
}

Operation_srm::Operation_srm() :
AbstractOperation(opName)
{

}
Operation_srm::~Operation_srm()
{
}


void Operation_srm::execute() const
{
  Value_i16 v1 = m_leftArg32->msv() & m_leftArg32->lsv();
  Value_i16 v2 = *m_da & (~m_leftArg32->lsv());
  *m_rightArg = v1 | v2;
}
