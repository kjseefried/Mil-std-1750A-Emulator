#include <iostream>
#include <iomanip>

#include "Instruction_m.h"
#include "Operation_m.h"

namespace {
  opCodeRange opCode = {0xC4, 0xC4};
  const std::string opCodeStr = "M";
  const std::string opDescription = "Single Precision Integer multiply, 32 bit dividend"; 
}

Instruction_m::Instruction_m() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_m());
}
Instruction_m::~Instruction_m()
{

}


void Instruction_m::execute() const
{
  Instruction_longInstruction::execute();
}
