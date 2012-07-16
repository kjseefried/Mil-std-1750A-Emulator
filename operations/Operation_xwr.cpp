
#include "Operation_xwr.h"

namespace {
  const std::string opName = "XWR";
}

Operation_xwr::Operation_xwr() :
AbstractOperation(opName)
{

}
Operation_xwr::~Operation_xwr()
{
}


void Operation_xwr::execute() const
{
  Value_i16 v = *m_leftArg;
  *m_leftArg = *m_rightArg;
  *m_rightArg = v;
  m_statusWord.setCs(*m_leftArg);
}
