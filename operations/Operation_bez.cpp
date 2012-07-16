
#include "Operation_bez.h"

namespace {
  const std::string opName = "BEZ";
}

Operation_bez::Operation_bez() :
AbstractOperation(opName)
{

}
Operation_bez::~Operation_bez()
{
}

void Operation_bez::execute() const
{
  if (!m_statusWord.ez())
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
