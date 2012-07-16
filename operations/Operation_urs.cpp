
#include "Operation_urs.h"

namespace {
  const std::string opName = "URS";
}

Operation_urs::Operation_urs() :
AbstractOperation(opName)
{

}
Operation_urs::~Operation_urs()
{
}


void Operation_urs::execute() const
{
  m_instructionCounter.write( m_memory.read(m_leftArg->value())); 
  m_leftArg->increment();
}
