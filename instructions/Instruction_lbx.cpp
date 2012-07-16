#include <iostream>
#include <iomanip>

#include "Instruction_lbx.h"
#include "Operation_l.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  const std::string opCodeStr = "LBX";
  const unsigned short int ra = 2;
  char opEx = 0x00;
  const std::string opDescription = "Single Precision Integer Load"; 
}

Instruction_lbx::Instruction_lbx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_l());
}
Instruction_lbx::~Instruction_lbx()
{

}


void Instruction_lbx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
