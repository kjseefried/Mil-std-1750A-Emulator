#include <iostream>
#include <iomanip>

#include "Instruction_stlb.h"
#include "Operation_slb.h"

namespace {
  opCodeRange opCode = {0x9C, 0x9C};
  const std::string opCodeStr = "STLB";
  const std::string opDescription = "Store Lower Byte"; 
}

Instruction_stlb::Instruction_stlb() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_slb());
}
Instruction_stlb::~Instruction_stlb()
{

}


void Instruction_stlb::execute() const
{
  Instruction_longInstruction::execute();
}
