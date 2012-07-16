#include <iostream>
#include <iomanip>

#include "Instruction_efm.h"
#include "Operation_efm.h"

namespace {
  opCodeRange opCode = {0xCA, 0xCA};
  const std::string opCodeStr = "EFM";
  const std::string opDescription = "Extended Precision Floating Point Muliply"; 
}

Instruction_efm::Instruction_efm() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_efm());
}
Instruction_efm::~Instruction_efm()
{

}


void Instruction_efm::execute() const
{
  Instruction_longInstruction::execute();
}
