
#include "Operation_xbr.h"

namespace {
  const std::string opName = "XBR";
}

Operation_xbr::Operation_xbr() :
AbstractOperation(opName)
{

}
Operation_xbr::~Operation_xbr()
{
}


void Operation_xbr::execute() const
{
  unsigned short int v = m_leftArg->msb();
  m_leftArg->msb(m_leftArg->lsb());
  m_leftArg->lsb(v);
  m_statusWord.setCs(*m_leftArg);
}
