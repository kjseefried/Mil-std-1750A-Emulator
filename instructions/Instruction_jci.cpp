#include <iostream>
#include <iomanip>

#include "Instruction_jci.h"
#include "Operation_jc.h"

namespace {
  opCodeRange opCode = {0x71, 0x71};
  const std::string opCodeStr = "JCI";
  const std::string opDescription = "Jump On Condition"; 
}

Instruction_jci::Instruction_jci() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_jc());
}
Instruction_jci::~Instruction_jci()
{

}


void Instruction_jci::execute() const
{
  Instruction_longInstruction::execute();
}
