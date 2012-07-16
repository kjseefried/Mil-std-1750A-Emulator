#include <iostream>
#include <iomanip>

#include "Instruction_dli.h"
#include "Operation_dl.h"

namespace {
  opCodeRange opCode = {0x88, 0x88};
  const std::string opCodeStr = "DLI";
  const std::string opDescription = "Double Precision Integer Load"; 
}

Instruction_dli::Instruction_dli() :
Instruction_longInstructionIndirect(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dl());
}
Instruction_dli::~Instruction_dli()
{

}


void Instruction_dli::execute() const
{
  Instruction_longInstructionIndirect::execute();
}
