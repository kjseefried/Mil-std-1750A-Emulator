#include <iostream>
#include <iomanip>

#include "Instruction_tbi.h"
#include "Operation_tb.h"

namespace {
  opCodeRange opCode = {0x58, 0x58};
  const std::string opCodeStr = "TBI";
  const std::string opDescription = "Test Bit"; 
}

Instruction_tbi::Instruction_tbi() :
Instruction_longInstructionIndirect(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_tb());
}
Instruction_tbi::~Instruction_tbi()
{

}


void Instruction_tbi::execute() const
{
  Instruction_longInstructionIndirect::execute();
}
