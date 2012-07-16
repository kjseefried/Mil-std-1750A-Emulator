#include <iostream>
#include <iomanip>

#include "Instruction_l.h"
#include "Operation_l.h"

namespace {
  opCodeRange opCode = {0x80, 0x80};
  const std::string opCodeStr = "L";
  const std::string opDescription = "Single Precision Integer Load"; 
}

Instruction_l::Instruction_l() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_l());
}
Instruction_l::~Instruction_l()
{

}


void Instruction_l::execute() const
{
  Instruction_longInstruction::execute();
}
