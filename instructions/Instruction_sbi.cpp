#include <iostream>
#include <iomanip>

#include "Instruction_sbi.h"
#include "Operation_sb.h"

namespace {
  opCodeRange opCode = {0x52, 0x52};
  const std::string opCodeStr = "SBI";
  const std::string opDescription = "Set Bit"; 
}

Instruction_sbi::Instruction_sbi() :
Instruction_longInstructionIndirect(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_sb());
}
Instruction_sbi::~Instruction_sbi()
{

}


void Instruction_sbi::execute() const
{
  Instruction_longInstructionIndirect::execute();
}
