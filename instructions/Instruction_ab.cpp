#include <iostream>
#include <iomanip>

#include "Instruction_ab.h"
#include "Operation_a.h"

namespace {
  opCodeRange opCode = {0x10, 0x13};
  const unsigned short int ra = 2;
  const std::string opCodeStr = "AB";
  const std::string opDescription = "Single Precision Integer Add"; 
}

Instruction_ab::Instruction_ab() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_a());
}
Instruction_ab::~Instruction_ab()
{

}


void Instruction_ab::execute() const
{
  Instruction_baseRelative::execute();
}
