#include <iostream>
#include <iomanip>

#include "Instruction_msr.h"
#include "Operation_ms.h"

namespace {
  opCodeRange opCode = {0xC1, 0xC1};
  const std::string opCodeStr = "MSR";
  const std::string opDescription = "Single Precision Integer Multiply, 16 bit product"; 
}

Instruction_msr::Instruction_msr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_ms());
}
Instruction_msr::~Instruction_msr()
{

}


void Instruction_msr::execute() const
{
  Instruction_register2Register::execute();
}
