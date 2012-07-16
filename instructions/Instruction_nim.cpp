
#include "Instruction_nim.h"
#include "Operation_n.h"

namespace {
  opCodeRange opCode = {0x4A, 0x4A};
  char opEx = 0x0B;
  const std::string opCodeStr = "NIM";
  const std::string opDescription = "Logical NAND"; 
}

Instruction_nim::Instruction_nim() :
Instruction_immediate(opCode, opEx, opCodeStr, opDescription)
{
  setOperation(new Operation_n());
}
Instruction_nim::~Instruction_nim()
{

}


void Instruction_nim::execute() const
{
  Instruction_immediate::execute();
}
