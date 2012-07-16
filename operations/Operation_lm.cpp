
#include "Operation_lm.h"

namespace {
  const std::string opName = "LM";
}

Operation_lm::Operation_lm() :
AbstractOperation(opName)
{

}
Operation_lm::~Operation_lm()
{
}


void Operation_lm::execute() const
{
  for (short int i = 0; i <= *m_v1; i++)
  {
    m_registerBank.start()[i]->write(m_memory.read((*m_da) + i));
  }
}
