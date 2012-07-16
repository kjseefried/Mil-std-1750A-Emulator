#include <iostream>
#include <iomanip>

#include "Instruction_aisp.h"
#include "Operation_a.h"

namespace {
  opCodeRange opCode = {0xA2, 0xA2};
  const std::string opCodeStr = "AISP";
  const std::string opDescription = "Single Precision Integer Add"; 
}

Instruction_aisp::Instruction_aisp() :
Instruction_immediateShortPositive(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_a());
}
Instruction_aisp::~Instruction_aisp()
{

}


void Instruction_aisp::execute() const
{
  Instruction_immediateShortPositive::execute();
}
