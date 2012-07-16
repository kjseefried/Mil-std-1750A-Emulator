#include <iostream>
#include <iomanip>

#include "Instruction_misn.h"
#include "Operation_ms.h"

namespace {
  opCodeRange opCode = {0xC3, 0xC3};
  const std::string opCodeStr = "MISN";
  const std::string opDescription = "Single Precision Integer Multiply, 16 bit product"; 
}

Instruction_misn::Instruction_misn() :
Instruction_immediateShortNegative(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_ms());
}
Instruction_misn::~Instruction_misn()
{

}


void Instruction_misn::execute() const
{
  Instruction_immediateShortNegative::execute();
}
