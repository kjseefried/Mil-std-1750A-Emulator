#include <iostream>
#include <iomanip>

#include "Instruction_efc.h"
#include "Operation_efc.h"

namespace {
  opCodeRange opCode = {0xFA, 0xFA};
  const std::string opCodeStr = "EFC";
  const std::string opDescription = "Extended Precision Floating Point Compare"; 
}

Instruction_efc::Instruction_efc() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_efc());
}
Instruction_efc::~Instruction_efc()
{

}


void Instruction_efc::execute() const
{
  Instruction_longInstruction::execute();
}
