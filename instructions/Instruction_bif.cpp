
#include "Instruction_bif.h"

namespace {
  opCodeRange opCode = {0x4F, 0x4F};
  const std::string opCodeStr = "BIF";
  const std::string opDescription = "Built-in Function"; 
}

Instruction_bif::Instruction_bif() :
Instruction_special(opCode, opCodeStr, opDescription)
{

}
Instruction_bif::~Instruction_bif()
{

}


void Instruction_bif::execute() const
{
  Instruction_special::execute();
}
