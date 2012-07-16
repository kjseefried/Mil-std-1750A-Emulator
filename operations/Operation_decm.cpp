
#include "Operation_decm.h"

namespace {
  const std::string opName = "DECM";
}

Operation_decm::Operation_decm() :
AbstractOperation(opName)
{

}
Operation_decm::~Operation_decm()
{
}


void Operation_decm::execute() const
{
  m_rightArg->decrement((*m_v1) + 1);
}
