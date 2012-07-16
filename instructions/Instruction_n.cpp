
#include "Instruction_n.h"
#include "Operation_n.h"

namespace {
  opCodeRange opCode = {0xE6, 0xE6};
  const std::string opCodeStr = "N";
  const std::string opDescription = "Logical NAND"; 
}

Instruction_n::Instruction_n() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_n());
}
Instruction_n::~Instruction_n()
{

}


void Instruction_n::execute() const
{
  Instruction_longInstruction::execute();
}
