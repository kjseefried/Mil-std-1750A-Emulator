#include <iostream>
#include <iomanip>

#include "Instruction_rbi.h"
#include "Operation_rb.h"

namespace {
  opCodeRange opCode = {0x55, 0x55};
  const std::string opCodeStr = "RBI";
  const std::string opDescription = "Reset Bit"; 
}

Instruction_rbi::Instruction_rbi() :
Instruction_longInstructionIndirect(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_rb());
}
Instruction_rbi::~Instruction_rbi()
{

}


void Instruction_rbi::execute() const
{
  Instruction_longInstructionIndirect::execute();
}
