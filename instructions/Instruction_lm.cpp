#include <iostream>
#include <iomanip>

#include "Instruction_lm.h"
#include "Operation_lm.h"

namespace {
  opCodeRange opCode = {0x89, 0x89};
  const std::string opCodeStr = "LM";
  const std::string opDescription = "Load Multiple Registers"; 
}

Instruction_lm::Instruction_lm() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_lm());
}
Instruction_lm::~Instruction_lm()
{

}


void Instruction_lm::execute() const
{
  Instruction_longInstruction::execute();
}
