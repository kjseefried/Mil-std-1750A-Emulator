
#include "Operation_dst.h"

namespace {
  const std::string opName = "DST";
}

Operation_dst::Operation_dst() :
AbstractOperation(opName)
{

}
Operation_dst::~Operation_dst()
{
}


void Operation_dst::execute() const
{
  // RA
  m_memory.write(*m_da, m_leftArg32->msv());
  m_memory.write(*m_da, m_leftArg32->lsv());
  // RA + 1
  
//  m_memory.write(*m_da + 1, m_registerBank.start()[(*m_v1 + 1)]->value());
}
