
#include "Instruction_orim.h"
#include "Operation_or.h"

namespace {
  opCodeRange opCode = {0x4A, 0x4A};
  char opEx = 0x08;
  const std::string opCodeStr = "ORIM";
  const std::string opDescription = "Inclusive Logical OR"; 
}

Instruction_orim::Instruction_orim() :
Instruction_immediate(opCode, opEx, opCodeStr, opDescription)
{
 setOperation(new Operation_or);
}
Instruction_orim::~Instruction_orim()
{
}


void Instruction_orim::execute() const
{
  Instruction_immediate::execute();
}
