#include <iostream>
#include <iomanip>

#include "Instruction_slbi.h"
#include "Operation_slb.h"

namespace {
  opCodeRange opCode = {0x9E, 0x9E};
  const std::string opCodeStr = "SLBI";
  const std::string opDescription = "Store Lower Byte"; 
}

Instruction_slbi::Instruction_slbi() :
Instruction_longInstructionIndirect(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_slb());
}
Instruction_slbi::~Instruction_slbi()
{

}


void Instruction_slbi::execute() const
{
  Instruction_longInstructionIndirect::execute();
}
