#include <iostream>
#include <iomanip>

#include "Instruction_stci.h"
#include "Operation_stc.h"

namespace {
  opCodeRange opCode = {0x92, 0x92};
  const std::string opCodeStr = "STCI";
  const std::string opDescription = "Store a Non Negative Constant"; 
}

Instruction_stci::Instruction_stci() :
Instruction_longInstructionIndirect(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_stc());
}
Instruction_stci::~Instruction_stci()
{

}


void Instruction_stci::execute() const
{
  Instruction_longInstructionIndirect::execute();
}
