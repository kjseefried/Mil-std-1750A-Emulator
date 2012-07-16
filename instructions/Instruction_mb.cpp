#include <iostream>
#include <iomanip>

#include "Instruction_mb.h"
#include "Operation_m.h"

namespace {
  opCodeRange opCode = {0x18, 0x1B};
  const unsigned short int ra = 2;
  const std::string opCodeStr = "DM";
  const std::string opDescription = "Single Precision Integer Multiply, 32 bit dividend"; 
}

Instruction_mb::Instruction_mb() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_m());
}
Instruction_mb::~Instruction_mb()
{

}


void Instruction_mb::execute() const
{
  Instruction_baseRelative::execute();
}
