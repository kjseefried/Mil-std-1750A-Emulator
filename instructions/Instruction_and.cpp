
#include "Instruction_and.h"
#include "Operation_and.h"

namespace {
  opCodeRange opCode = {0xE2, 0xE2};
  const std::string opCodeStr = "AND";
  const std::string opDescription = "Logical AND"; 
}

Instruction_and::Instruction_and() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_and());
}
Instruction_and::~Instruction_and()
{

}


void Instruction_and::execute() const
{
  Instruction_longInstruction::execute();
}
