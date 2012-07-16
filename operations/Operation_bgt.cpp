
#include "Operation_bgt.h"

namespace {
  const std::string opName = "BGT";
}

Operation_bgt::Operation_bgt() :
AbstractOperation(opName)
{

}
Operation_bgt::~Operation_bgt()
{
}


void Operation_bgt::execute() const
{
  if (!m_statusWord.gz())
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
