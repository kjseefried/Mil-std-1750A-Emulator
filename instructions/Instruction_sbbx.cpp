#include <iostream>
#include <iomanip>

#include "Instruction_sbbx.h"
#include "Operation_s.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  const std::string opCodeStr = "SBBX";
  const unsigned short int ra = 2;
  char opEx = 0x05;
  const std::string opDescription = "Single Precision Integer Subtract"; 
}

Instruction_sbbx::Instruction_sbbx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_s());
}
Instruction_sbbx::~Instruction_sbbx()
{

}


void Instruction_sbbx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
