
#include "Operation_dsll.h"

namespace {
  const std::string opName = "DSLL";
}

Operation_dsll::Operation_dsll() :
AbstractOperation(opName)
{

}
Operation_dsll::~Operation_dsll()
{
}


void Operation_dsll::execute() const
{
  *m_rightArg32 <<= (1 + *m_v1);
  m_statusWord.setCs(*m_rightArg32);
}
