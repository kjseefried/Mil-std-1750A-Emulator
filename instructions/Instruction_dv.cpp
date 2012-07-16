#include <iostream>
#include <iomanip>

#include "Instruction_dv.h"
#include "Operation_dv.h"

namespace {
  opCodeRange opCode = {0xD0, 0xD0};
  const std::string opCodeStr = "DV";
  const std::string opDescription = "Single Precision Integer divide, 16 bit dividend"; 
}

Instruction_dv::Instruction_dv() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dv());
}
Instruction_dv::~Instruction_dv()
{

}


void Instruction_dv::execute() const
{
  Instruction_longInstruction::execute();
}
