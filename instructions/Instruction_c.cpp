
#include "Instruction_c.h"
#include "Operation_c.h"

namespace {
  opCodeRange opCode = {0xF0, 0xF0};
  const std::string opCodeStr = "C";
  const std::string opDescription = "Single Precision Compare"; 
}

Instruction_c::Instruction_c() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_c());
}
Instruction_c::~Instruction_c()
{

}


void Instruction_c::execute() const
{
  Instruction_longInstruction::execute();
}
