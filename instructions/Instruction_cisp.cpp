#include <iostream>
#include <iomanip>

#include "Instruction_cisp.h"
#include "Operation_c.h"

namespace {
  opCodeRange opCode = {0xF2, 0xF2};
  const std::string opCodeStr = "CISP";
  const std::string opDescription = "Single Precision Compare"; 
}
Instruction_cisp::Instruction_cisp() :
Instruction_immediateShortPositive(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_c());
}
Instruction_cisp::~Instruction_cisp()
{

}


void Instruction_cisp::execute() const
{
  Instruction_immediateShortPositive::execute();
}
