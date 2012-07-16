
#include "Operation_sll.h"

namespace {
  const std::string opName = "SLL";
}

Operation_sll::Operation_sll() :
AbstractOperation(opName)
{

}
Operation_sll::~Operation_sll()
{
}


void Operation_sll::execute() const
{
  *m_rightArg <<= (1 + *m_v1);
  m_statusWord.setCs(*m_rightArg);
}
