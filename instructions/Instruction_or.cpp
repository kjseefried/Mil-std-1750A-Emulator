
#include "Instruction_or.h"
#include "Operation_or.h"

namespace {
  opCodeRange opCode = {0xE0, 0xE0};
  const std::string opCodeStr = "OR";
  const std::string opDescription = "Inclusive Logical OR"; 
}

Instruction_or::Instruction_or() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_or());
}
Instruction_or::~Instruction_or()
{

}


void Instruction_or::execute() const
{
  Instruction_longInstruction::execute();
}
