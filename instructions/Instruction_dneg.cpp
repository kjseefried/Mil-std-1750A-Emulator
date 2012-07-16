#include <iostream>
#include <iomanip>

#include "Instruction_dneg.h"
#include "Operation_dneg.h"

namespace {
  opCodeRange opCode = {0xB5, 0xB5};
  const std::string opCodeStr = "DNEG";
  const std::string opDescription = "Double Precision Negate Register"; 
}

Instruction_dneg::Instruction_dneg() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dneg());
}
Instruction_dneg::~Instruction_dneg()
{

}


void Instruction_dneg::execute() const
{
  Instruction_register2Register::execute();
}
