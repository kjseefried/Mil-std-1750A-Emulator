
#include "Instruction_aim.h"
#include "Operation_a.h"

namespace {
  opCodeRange opCode = {0x4A, 0x4A};
  char opEx = 0x01;
  const std::string opCodeStr = "AIM";
  const std::string opDescription = "Single Precision Integer Add"; 
}

Instruction_aim::Instruction_aim() :
Instruction_immediate(opCode, opEx, opCodeStr, opDescription)
{
 setOperation(new Operation_a());
}
Instruction_aim::~Instruction_aim()
{
}


void Instruction_aim::execute() const
{
  Instruction_immediate::execute();
}
