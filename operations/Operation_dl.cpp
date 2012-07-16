
#include "Operation_dl.h"

namespace {
  const std::string opName = "DL";
}

Operation_dl::Operation_dl() :
AbstractOperation(opName)
{

}
Operation_dl::~Operation_dl()
{
}


void Operation_dl::execute() const
{
  m_leftArg32->msv(m_rightArg32->msv());
  m_leftArg32->lsv(m_rightArg32->lsv());

  m_statusWord.setCs(*m_leftArg32);
}
