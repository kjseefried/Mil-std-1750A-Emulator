#include <iostream>
#include <iomanip>

#include "Instruction_d.h"
#include "Operation_d.h"

namespace {
  opCodeRange opCode = {0xD4, 0xD4};
  const std::string opCodeStr = "D";
  const std::string opDescription = "Single Precision Integer divide, 32 bit dividend"; 
}

Instruction_d::Instruction_d() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_d());
}
Instruction_d::~Instruction_d()
{

}


void Instruction_d::execute() const
{
  Instruction_longInstruction::execute();
}
