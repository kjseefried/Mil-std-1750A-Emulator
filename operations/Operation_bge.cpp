
#include "Operation_bge.h"

namespace {
  const std::string opName = "BGE";
}

Operation_bge::Operation_bge() :
AbstractOperation(opName)
{

}
Operation_bge::~Operation_bge()
{
}


void Operation_bge::execute() const
{
  if (!m_statusWord.gez())
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
