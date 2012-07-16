
#include "Operation_soj.h"

namespace {
  const std::string opName = "SOJ";
}

Operation_soj::Operation_soj() :
AbstractOperation(opName)
{

}
Operation_soj::~Operation_soj()
{
}


void Operation_soj::execute() const
{
  m_leftArg->decrement(); 

  if (m_leftArg->value())
  {
    m_instructionCounter.write(m_rightArg->value());
  }
  m_statusWord.setCs(m_leftArg->value());
}
