#include <iostream>
#include <iomanip>

#include "Instruction_neg.h"
#include "Operation_neg.h"

namespace {
  opCodeRange opCode = {0xB4, 0xB4};
  const std::string opCodeStr = "NEG";
  const std::string opDescription = "Single Precision Negate Register"; 
}

Instruction_neg::Instruction_neg() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_neg());
}
Instruction_neg::~Instruction_neg()
{

}


void Instruction_neg::execute() const
{
  Instruction_register2Register::execute();
}
