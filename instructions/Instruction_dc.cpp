#include <iostream>
#include <iomanip>

#include "Instruction_dc.h"
#include "Operation_dc.h"

namespace {
  opCodeRange opCode = {0xF6, 0xF6};
  const std::string opCodeStr = "DC";
  const std::string opDescription = "Double Precision Compare"; 
}

Instruction_dc::Instruction_dc() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dc());

}
Instruction_dc::~Instruction_dc()
{

}


void Instruction_dc::execute() const
{
  Instruction_longInstruction::execute();
}
