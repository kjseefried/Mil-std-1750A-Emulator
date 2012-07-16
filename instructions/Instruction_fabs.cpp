#include <iostream>
#include <iomanip>

#include "Instruction_fabs.h"
#include "Operation_fabs.h"

namespace {
  opCodeRange opCode = {0xAC, 0xAC};
  const std::string opCodeStr = "FABS";
  const std::string opDescription = "Floating Point Absolute Value"; 
}

Instruction_fabs::Instruction_fabs() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_fabs());
}
Instruction_fabs::~Instruction_fabs()
{

}


void Instruction_fabs::execute() const
{
  Instruction_register2Register::execute();
}
