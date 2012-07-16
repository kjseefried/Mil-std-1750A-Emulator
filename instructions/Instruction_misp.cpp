#include <iostream>
#include <iomanip>

#include "Instruction_misp.h"
#include "Operation_ms.h"

namespace {
  opCodeRange opCode = {0xC2, 0xC2};
  const std::string opCodeStr = "MISP";
  const std::string opDescription = "Single Precision Integer Multiply, 16 bit product"; 
}

Instruction_misp::Instruction_misp() :
Instruction_immediateShortPositive(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_ms());
}
Instruction_misp::~Instruction_misp()
{

}


void Instruction_misp::execute() const
{
  Instruction_immediateShortPositive::execute();
}
