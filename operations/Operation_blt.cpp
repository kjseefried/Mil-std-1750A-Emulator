
#include "Operation_blt.h"

namespace {
  const std::string opName = "BLT";
}

Operation_blt::Operation_blt() :
AbstractOperation(opName)
{

}
Operation_blt::~Operation_blt()
{
}

void Operation_blt::execute() const
{
  if (!m_statusWord.lz())
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
