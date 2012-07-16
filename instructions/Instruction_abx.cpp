#include <iostream>
#include <iomanip>

#include "Instruction_abx.h"
#include "Operation_a.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  const std::string opCodeStr = "ABX";
  const unsigned short int ra = 2;
  char opEx = 0x04;
  const std::string opDescription = "Single Precision Integer Add"; 
}

Instruction_abx::Instruction_abx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra,opCodeStr, opDescription)
{
  setOperation(new Operation_a());
}
Instruction_abx::~Instruction_abx()
{

}


void Instruction_abx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
