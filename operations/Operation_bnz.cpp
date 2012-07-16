
#include "Operation_bnz.h"

namespace {
  const std::string opName = "BNZ";
}

Operation_bnz::Operation_bnz() :
AbstractOperation(opName)
{

}
Operation_bnz::~Operation_bnz()
{
}


void Operation_bnz::execute() const
{
  if (!m_statusWord.nz())
  {
    return;
  }
  if (*m_v1 < 128)
  {
    m_instructionCounter.increment(*m_v1);
  }
  else
  {
    m_instructionCounter.decrement(256 - (*m_v1));
  }
}
