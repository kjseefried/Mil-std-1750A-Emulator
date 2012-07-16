#include <iostream>
#include <iomanip>

#include "Instruction_fm.h"
#include "Operation_fm.h"

namespace {
  opCodeRange opCode = {0xC8, 0xC8};
  const std::string opCodeStr = "FM";
  const std::string opDescription = "Floating Point Multiply"; 
}

Instruction_fm::Instruction_fm() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_fm());
}
Instruction_fm::~Instruction_fm()
{

}


void Instruction_fm::execute() const
{
  Instruction_longInstruction::execute();
}
