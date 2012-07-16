
#include "Instruction_lim.h"
#include "Operation_l.h"

namespace {
  opCodeRange opCode = {0x85, 0x85};
  const std::string opCodeStr = "LIM";
  const std::string opDescription = "Single Precision Integer Load"; 
}

Instruction_lim::Instruction_lim() :
Instruction_longInstructionData(opCode, opCodeStr, opDescription)
{
 setOperation(new Operation_l());
}
Instruction_lim::~Instruction_lim()
{
}


void Instruction_lim::execute() const
{
  Instruction_longInstructionData::execute();
}
