
#include "Operation_br.h"

namespace {
  const std::string opName = "BR";
}

Operation_br::Operation_br() :
AbstractOperation(opName)
{

}
Operation_br::~Operation_br()
{
}

void Operation_br::execute() const
{
  if (*m_v1 < 128)
  {
    m_instructionCounter.increment(*m_v1);
  }
  else
  {
    
    m_instructionCounter.decrement(256 - (*m_v1));
  }
}
