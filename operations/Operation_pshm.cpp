
#include "Operation_pshm.h"

namespace {
  const std::string opName = "PSHM";
}

Operation_pshm::Operation_pshm() :
AbstractOperation(opName)
{

}
Operation_pshm::~Operation_pshm()
{
}


void Operation_pshm::execute() const
{
  if (*m_v1 <= *m_v2)
  {
    short int r =  *m_v2;
    while (r >= static_cast<short int>(*m_v1)) 
    {
      m_registerBank.start()[15]->decrement();
      m_memory.write(m_registerBank.start()[15]->read(), m_registerBank.start()[r]->read());
      r--;
    }
  }
  else
  {
    short int r = *m_v2;
    while (r >= 0) 
    {
      m_registerBank.start()[15]->decrement();
      m_memory.write(m_registerBank.start()[15]->read(), m_registerBank.start()[r]->read());
      r--;
    }
    r = 15;
    while (r >= static_cast<short int>(*m_v1)) 
    {
      m_registerBank.start()[15]->decrement();
      m_memory.write(m_registerBank.start()[15]->read(), m_registerBank.start()[r]->read());
      r--;
    }
  }
}
