#include <iostream>
#include <iomanip>

#include "Instruction_stc.h"
#include "Operation_stc.h"

namespace {
  opCodeRange opCode = {0x91, 0x91};
  const std::string opCodeStr = "STC";
  const std::string opDescription = "Store a non negative constant"; 
}

Instruction_stc::Instruction_stc() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_stc());
}
Instruction_stc::~Instruction_stc()
{

}


void Instruction_stc::execute() const
{
  Instruction_longInstruction::execute();
}
