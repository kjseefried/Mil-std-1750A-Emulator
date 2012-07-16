
#include "Operation_xor.h"
#include "Instruction_xor.h"

namespace {
  opCodeRange opCode = {0xE4, 0xE4};
  const std::string opCodeStr = "XOR";
  const std::string opDescription = "Exlusive Logical OR"; 
}

Instruction_xor::Instruction_xor() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_xor());
}
Instruction_xor::~Instruction_xor()
{

}


void Instruction_xor::execute() const
{
  Instruction_longInstruction::execute();
}
