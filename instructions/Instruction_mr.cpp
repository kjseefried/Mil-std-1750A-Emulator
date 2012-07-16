#include <iostream>
#include <iomanip>

#include "Instruction_mr.h"
#include "Operation_m.h"

namespace {
  opCodeRange opCode = {0xC5, 0xC5};
  const std::string opCodeStr = "MR";
  const std::string opDescription = "Single Precision Integer Multiply, 32 bit dividend"; 
}

Instruction_mr::Instruction_mr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_m());
}
Instruction_mr::~Instruction_mr()
{

}


void Instruction_mr::execute() const
{
  Instruction_register2Register::execute();
}
