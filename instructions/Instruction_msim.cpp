
#include "Instruction_msim.h"
#include "Operation_ms.h"

namespace {
  opCodeRange opCode = {0x4A, 0x4A};
  char opEx = 0x04;
  const std::string opCodeStr = "MSIM";
  const std::string opDescription = "Single Precision Integer Multiply, 16 bit product"; 
}

Instruction_msim::Instruction_msim() :
Instruction_immediate(opCode, opEx, opCodeStr, opDescription)
{

}
Instruction_msim::~Instruction_msim()
{
 setOperation(new Operation_ms);
}


void Instruction_msim::execute() const
{
  Instruction_immediate::execute();
}
