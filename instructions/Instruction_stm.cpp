#include <iostream>
#include <iomanip>

#include "Instruction_stm.h"
#include "Operation_stm.h"

namespace {
  opCodeRange opCode = {0x99, 0x99};
  const std::string opCodeStr = "STM";
  const std::string opDescription = "Store Multiple Registers"; 
}

Instruction_stm::Instruction_stm() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_stm());
}
Instruction_stm::~Instruction_stm()
{

}


void Instruction_stm::execute() const
{
  Instruction_longInstruction::execute();
}
