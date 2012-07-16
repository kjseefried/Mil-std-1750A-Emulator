#include <iostream>
#include <iomanip>

#include "Instruction_li.h"
#include "Operation_l.h"

namespace {
  opCodeRange opCode = {0x84, 0x84};
  const std::string opCodeStr = "LI";
  const std::string opDescription = "Single Precision Integer Load"; 
}

Instruction_li::Instruction_li() :
Instruction_longInstructionIndirect(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_l());
}
Instruction_li::~Instruction_li()
{

}


void Instruction_li::execute() const
{
  Instruction_longInstructionIndirect::execute();
}
