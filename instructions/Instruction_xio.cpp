
#include "Instruction_xio.h"
#include "Operation_xio.h"

namespace {
  opCodeRange opCode = {0x48, 0x48};
  const std::string opCodeStr = "XIO";
  const std::string opDescription = "Execute Input/Output"; 
}

Instruction_xio::Instruction_xio() :
Instruction_longInstructionData(opCode, opCodeStr, opDescription)
{
 setOperation(new Operation_xio());
}
Instruction_xio::~Instruction_xio()
{
}


void Instruction_xio::execute() const
{
  Instruction_longInstructionData::execute();
}
