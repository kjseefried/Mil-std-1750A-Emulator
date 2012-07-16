
#include "Instruction_tb.h"
#include "Operation_tb.h"

namespace {
  opCodeRange opCode = {0x56, 0x56};
  const std::string opCodeStr = "TB";
  const std::string opDescription = "Test Bit"; 
}

Instruction_tb::Instruction_tb() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_tb());
}
Instruction_tb::~Instruction_tb()
{

}


void Instruction_tb::execute() const
{
  Instruction_longInstruction::execute();
}
