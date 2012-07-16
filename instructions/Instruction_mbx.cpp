#include <iostream>
#include <iomanip>

#include "Instruction_mbx.h"
#include "Operation_m.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  const std::string opCodeStr = "MBX";
  const unsigned short int ra = 2;
  char opEx = 0x06;
  const std::string opDescription = "Single Precision Integer Multiply, 32 bit dividend"; 
}

Instruction_mbx::Instruction_mbx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_m());
}
Instruction_mbx::~Instruction_mbx()
{

}


void Instruction_mbx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
