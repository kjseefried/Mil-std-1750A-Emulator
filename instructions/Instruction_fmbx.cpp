#include <iostream>
#include <iomanip>

#include "Instruction_fmbx.h"
#include "Operation_fm.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  const std::string opCodeStr = "FMBX";
  const unsigned short int ra = 0;
  char opEx = 0x0A;
  const std::string opDescription = "Floating Point Multiply"; 
}

Instruction_fmbx::Instruction_fmbx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_fm());
}
Instruction_fmbx::~Instruction_fmbx()
{

}


void Instruction_fmbx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
