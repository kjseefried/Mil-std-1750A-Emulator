#include <iostream>
#include <iomanip>

#include "Instruction_efa.h"
#include "Operation_efa.h"

namespace {
  opCodeRange opCode = {0xAA, 0xAA};
  const std::string opCodeStr = "EFA";
  const std::string opDescription = "Extended Precision Floating Point Add"; 
}

Instruction_efa::Instruction_efa() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_efa());
}
Instruction_efa::~Instruction_efa()
{

}


void Instruction_efa::execute() const
{
  Instruction_longInstruction::execute();
}
