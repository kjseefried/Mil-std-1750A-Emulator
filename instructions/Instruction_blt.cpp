#include <iostream>
#include <iomanip>

#include "Instruction_blt.h"
#include "Operation_blt.h"

namespace {
  opCodeRange opCode = {0x76, 0x76};
  const std::string opCodeStr = "BLT";
  const std::string opDescription = "Branch if less than zero"; 
}

Instruction_blt::Instruction_blt() :
Instruction_counterRelative(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_blt());
}
Instruction_blt::~Instruction_blt()
{

}


void Instruction_blt::execute() const
{
  Instruction_counterRelative::execute();
}
