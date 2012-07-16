
#include "Operation_jc.h"

namespace {
  const std::string opName = "JC";
}

Operation_jc::Operation_jc() :
AbstractOperation(opName)
{

}
Operation_jc::~Operation_jc()
{
}


void Operation_jc::execute() const
{
  unsigned short int v = *m_v1 & m_statusWord.cs();

  if ((v > 0) || ( *m_v1 == 7) || ( *m_v1 == 0xf))
  {
    m_instructionCounter.write(m_rightArg->value());
  }
}
