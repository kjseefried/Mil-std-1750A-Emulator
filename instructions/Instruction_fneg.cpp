#include <iostream>
#include <iomanip>

#include "Instruction_fneg.h"
#include "Operation_fneg.h"

namespace {
  opCodeRange opCode = {0xBC, 0xBC};
  const std::string opCodeStr = "FNEG";
  const std::string opDescription = "Floating Point Negate Register"; 
}

Instruction_fneg::Instruction_fneg() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_fneg());
}
Instruction_fneg::~Instruction_fneg()
{

}


void Instruction_fneg::execute() const
{
  Instruction_register2Register::execute();
}
