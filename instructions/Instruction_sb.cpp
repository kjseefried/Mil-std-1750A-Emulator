
#include "Instruction_sb.h"
#include "Operation_sb.h"

namespace {
  opCodeRange opCode = {0x50, 0x50};
  const std::string opCodeStr = "SB";
  const std::string opDescription = "Set Bit"; 
}

Instruction_sb::Instruction_sb() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
 setOperation(new Operation_sb());
}
Instruction_sb::~Instruction_sb()
{

}


void Instruction_sb::execute() const
{
  Instruction_longInstruction::execute();
}
