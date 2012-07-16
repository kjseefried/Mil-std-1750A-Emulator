#include <iostream>
#include <iomanip>

#include "Instruction_disn.h"
#include "Operation_dv.h"

namespace {
  opCodeRange opCode = {0xD3, 0xD3};
  const std::string opCodeStr = "DISN";
  const std::string opDescription = "Single Precision Integer Divide, 16 bit dividend"; 
}

Instruction_disn::Instruction_disn() :
Instruction_immediateShortNegative(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dv());
}
Instruction_disn::~Instruction_disn()
{

}


void Instruction_disn::execute() const
{
  Instruction_immediateShortNegative::execute();
}
