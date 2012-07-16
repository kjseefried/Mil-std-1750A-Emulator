#include <iostream>
#include <iomanip>

#include "Instruction_s.h"
#include "Operation_s.h"

namespace {
  opCodeRange opCode = {0xB0, 0xB0};
  const std::string opCodeStr = "S";
  const std::string opDescription = "Single Precision Integer subtract"; 
}

Instruction_s::Instruction_s() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_s());
}
Instruction_s::~Instruction_s()
{

}


void Instruction_s::execute() const
{
  Instruction_longInstruction::execute();
}
