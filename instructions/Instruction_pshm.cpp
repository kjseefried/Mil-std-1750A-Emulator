#include <iostream>
#include <iomanip>

#include "Instruction_pshm.h"
#include "Operation_pshm.h"

namespace {
  opCodeRange opCode = {0x9F, 0x9F};
  const std::string opCodeStr = "PSHM";
  const std::string opDescription = "Push Multiple Registers On Stack"; 
}

Instruction_pshm::Instruction_pshm() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_pshm());
}
Instruction_pshm::~Instruction_pshm()
{

}


void Instruction_pshm::execute() const
{
  Instruction_register2Register::execute();
}
