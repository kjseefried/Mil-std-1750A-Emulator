#include <iostream>
#include <iomanip>

#include "Instruction_sisp.h"
#include "Operation_s.h"

namespace {
  opCodeRange opCode = {0xB2, 0xB2};
  const std::string opCodeStr = "SISP";
  const std::string opDescription = "Single Precision Integer Subtract"; 
}

Instruction_sisp::Instruction_sisp() :
Instruction_immediateShortPositive(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_s());
}
Instruction_sisp::~Instruction_sisp()
{

}


void Instruction_sisp::execute() const
{
  Instruction_immediateShortPositive::execute();
}
