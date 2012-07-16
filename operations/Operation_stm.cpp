
#include "Operation_stm.h"

namespace {
  const std::string opName = "STM";
}

Operation_stm::Operation_stm() :
AbstractOperation(opName)
{

}
Operation_stm::~Operation_stm()
{
}


void Operation_stm::execute() const
{
  for (short int i = 0; i <= *m_v1; i++)
  {
    m_memory.write((*m_da) + i, m_registerBank.start()[i]->read());
  }
}
