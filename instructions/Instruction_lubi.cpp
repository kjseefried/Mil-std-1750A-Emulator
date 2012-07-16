#include <iostream>
#include <iomanip>

#include "Instruction_lubi.h"
#include "Operation_lub.h"

namespace {
  opCodeRange opCode = {0x8D, 0x8D};
  const std::string opCodeStr = "LUBI";
  const std::string opDescription = "Load Upper Byte"; 
}

Instruction_lubi::Instruction_lubi() :
Instruction_longInstructionIndirect(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_lub());
}
Instruction_lubi::~Instruction_lubi()
{

}


void Instruction_lubi::execute() const
{
  Instruction_longInstructionIndirect::execute();
}
