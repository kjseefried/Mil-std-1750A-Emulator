#include <iostream>
#include <iomanip>

#include "Instruction_js.h"
#include "Operation_js.h"

namespace {
  opCodeRange opCode = {0x72, 0x72};
  const std::string opCodeStr = "JS";
  const std::string opDescription = "Jump To Subroutine"; 
}

Instruction_js::Instruction_js() :
Instruction_longInstructionData(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_js());
}
Instruction_js::~Instruction_js()
{

}


void Instruction_js::execute() const
{
  Instruction_longInstructionData::execute();
}
