
#include "Operation_sjs.h"

namespace {
  const std::string opName = "SJS";
}

Operation_sjs::Operation_sjs() :
AbstractOperation(opName)
{

}
Operation_sjs::~Operation_sjs()
{
}


void Operation_sjs::execute() const
{
  m_leftArg->decrement();
  // Write the address of the instruction after this one
  m_memory.write(m_leftArg->value(),  m_instructionCounter.read() + 2);
  m_instructionCounter.write(m_rightArg->value()); 
}
