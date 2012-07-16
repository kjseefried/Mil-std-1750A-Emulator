#include <iostream>
#include <iomanip>

#include "Instruction_dm.h"
#include "Operation_dm.h"

namespace {
  opCodeRange opCode = {0xC6, 0xC6};
  const std::string opCodeStr = "DM";
  const std::string opDescription = "Double Precision Integer Multiply"; 
}

Instruction_dm::Instruction_dm() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dm());
}
Instruction_dm::~Instruction_dm()
{

}


void Instruction_dm::execute() const
{
  Instruction_longInstruction::execute();
}
