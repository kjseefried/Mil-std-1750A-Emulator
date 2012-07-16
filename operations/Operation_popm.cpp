
#include "Operation_popm.h"

namespace {
  const std::string opName = "POPM";
}

Operation_popm::Operation_popm() :
AbstractOperation(opName)
{

}
Operation_popm::~Operation_popm()
{
}


void Operation_popm::execute() const
{
  // m_v1 is RA m_v2 is RB
  if (*m_v1 <= *m_v2)
  {
    short int r =  *m_v1;
    while (r <= static_cast<short int>(*m_v2))
    {
      if (r != 15)
      {
        m_registerBank.start()[r]->write(m_memory.read(m_registerBank.start()[15]->read()));
        m_registerBank.start()[15]->increment();
      }
      r++;
    }
  }
  else
  {
    short int r = *m_v2;

    while (r <= 14)
    {
      m_registerBank.start()[r]->write(m_memory.read(m_registerBank.start()[15]->read()));
      m_registerBank.start()[15]->increment();
      r++;
    }
    r = 0;
    while (r <= static_cast<short int>(*m_v2))
    {
      m_registerBank.start()[r]->write(m_memory.read(m_registerBank.start()[15]->read()));
      m_registerBank.start()[15]->increment();
      r++;
    }
  }
}
