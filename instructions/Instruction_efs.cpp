#include <iostream>
#include <iomanip>

#include "Instruction_efs.h"
#include "Operation_efs.h"

namespace {
  opCodeRange opCode = {0xBA, 0xBA};
  const std::string opCodeStr = "EFS";
  const std::string opDescription = "Extended Precision Floating Point Subtract"; 
}

Instruction_efs::Instruction_efs() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_efs());
}
Instruction_efs::~Instruction_efs()
{

}


void Instruction_efs::execute() const
{
  Instruction_longInstruction::execute();
}
