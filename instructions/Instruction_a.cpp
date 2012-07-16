#include <iostream>
#include <iomanip>

#include "Instruction_a.h"
#include "Operation_a.h"

namespace {
  opCodeRange opCode = {0xA0, 0xA0};
  const std::string opCodeStr = "A";
  const std::string opDescription = "Single Precision Integer Add"; 
}

Instruction_a::Instruction_a() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_a());
}
Instruction_a::~Instruction_a()
{

}


void Instruction_a::execute() const
{
  Instruction_longInstruction::execute();
}
