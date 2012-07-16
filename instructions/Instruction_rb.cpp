
#include "Operation_rb.h"
#include "Instruction_rb.h"

namespace {
  opCodeRange opCode = {0x53, 0x53};
  const std::string opCodeStr = "RB";
  const std::string opDescription = "Reset Bit"; 
}

Instruction_rb::Instruction_rb() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_rb());
}
Instruction_rb::~Instruction_rb()
{

}


void Instruction_rb::execute() const
{
  Instruction_longInstruction::execute();
}
