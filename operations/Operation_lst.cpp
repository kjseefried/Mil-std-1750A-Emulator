
#include "Operation_lst.h"

namespace {
  const std::string opName = "LST";
}

Operation_lst::Operation_lst() :
AbstractOperation(opName)
{

}
Operation_lst::~Operation_lst()
{
}


void Operation_lst::execute() const
{
  m_interruptMask.write(m_memory.read(*m_da));
  m_statusWord.write(m_memory.read((*m_da) + 1));
  m_instructionCounter.write(m_memory.read((*m_da) + 2));
}
