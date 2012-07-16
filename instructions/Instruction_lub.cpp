#include <iostream>
#include <iomanip>

#include "Instruction_lub.h"
#include "Operation_lub.h"

namespace {
  opCodeRange opCode = {0x8B, 0x8B};
  const std::string opCodeStr = "LUB";
  const std::string opDescription = "Load Upper Byte"; 
}

Instruction_lub::Instruction_lub() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_lub());
}
Instruction_lub::~Instruction_lub()
{

}


void Instruction_lub::execute() const
{
  Instruction_longInstruction::execute();
}
