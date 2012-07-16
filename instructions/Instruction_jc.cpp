#include <iostream>
#include <iomanip>

#include "Instruction_jc.h"
#include "Operation_jc.h"

namespace {
  opCodeRange opCode = {0x70, 0x70};
  const std::string opCodeStr = "JC";
  const std::string opDescription = "Jump On Condition"; 
}

Instruction_jc::Instruction_jc() :
Instruction_longInstructionData(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_jc());
}
Instruction_jc::~Instruction_jc()
{

}


void Instruction_jc::execute() const
{
  Instruction_longInstructionData::execute();
}
