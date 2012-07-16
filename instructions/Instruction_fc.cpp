
#include "Instruction_fc.h"
#include "Operation_fc.h"

namespace {
  opCodeRange opCode = {0xF8, 0xF8};
  const std::string opCodeStr = "FC";
  const std::string opDescription = "Floating Point Compare"; 
}

Instruction_fc::Instruction_fc() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_fc());

}
Instruction_fc::~Instruction_fc()
{

}


void Instruction_fc::execute() const
{
  Instruction_longInstruction::execute();
}
