
#include "Operation_srl.h"

namespace {
  const std::string opName = "SRL";
}

Operation_srl::Operation_srl() :
AbstractOperation(opName)
{

}
Operation_srl::~Operation_srl()
{
}


void Operation_srl::execute() const
{
  *m_rightArg >>= (1 + *m_v1);
  m_statusWord.setCs(*m_rightArg);
}
