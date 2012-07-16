#include <iostream>
#include <iomanip>

#include "Instruction_dsti.h"
#include "Operation_dst.h"

namespace {
  opCodeRange opCode = {0x98, 0x98};
  const std::string opCodeStr = "DTSI";
  const std::string opDescription = "Double Precision Integer Store"; 
}

Instruction_dsti::Instruction_dsti() :
Instruction_longInstructionIndirect(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dst());
}
Instruction_dsti::~Instruction_dsti()
{

}


void Instruction_dsti::execute() const
{
  Instruction_longInstructionIndirect::execute();
}
