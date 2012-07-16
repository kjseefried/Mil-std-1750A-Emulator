#include <iostream>
#include <iomanip>

#include "Instruction_abs.h"
#include "Operation_abs.h"

namespace {
  opCodeRange opCode = {0xA4, 0xA4};
  const std::string opCodeStr = "ABS";
  const std::string opDescription = "Single Precision Integer Absolute Value"; 
}

Instruction_abs::Instruction_abs() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_abs());
}
Instruction_abs::~Instruction_abs()
{

}


void Instruction_abs::execute() const
{
  Instruction_register2Register::execute();
}
