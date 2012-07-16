#include <iostream>
#include <iomanip>

#include "Instruction_efl.h"
#include "Operation_efl.h"

namespace {
  opCodeRange opCode = {0x8A, 0x8A};
  const std::string opCodeStr = "EFL";
  const std::string opDescription = "Extended Precision Floating Point Load"; 
}

Instruction_efl::Instruction_efl() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_efl());
}
Instruction_efl::~Instruction_efl()
{

}


void Instruction_efl::execute() const
{
  Instruction_longInstruction::execute();
}
