#include <iostream>
#include <iomanip>

#include "Instruction_dabs.h"
#include "Operation_dabs.h"

namespace {
  opCodeRange opCode = {0xA5, 0xA5};
  const std::string opCodeStr = "DABS";
  const std::string opDescription = "Double Precision Integer Absolute Value"; 
}

Instruction_dabs::Instruction_dabs() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dabs());
}
Instruction_dabs::~Instruction_dabs()
{

}


void Instruction_dabs::execute() const
{
  Instruction_register2Register::execute();
}
