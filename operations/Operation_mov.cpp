
#include "Operation_mov.h"

namespace {
  const std::string opName = "MOV";
}

Operation_mov::Operation_mov() :
AbstractOperation(opName)
{

}
Operation_mov::~Operation_mov()
{
}


void Operation_mov::execute() const
{
  
  // Number of words to move is store in RA+1
  Value_i16 * n = &(m_registerBank.start()[*m_v1 + 1])->valueRef();

  while(n->value())
  {
    // RA contains the address of where the word is to be transferred
    // RB the address of the word to be transferred
    m_memory.write(m_leftArg->value(), m_memory.read(m_rightArg->value()));
    m_leftArg->increment();
    m_rightArg->increment();

    n->decrement();
  }

  std::cout << "Need to implement interrupt between moves" << std::endl;
}
