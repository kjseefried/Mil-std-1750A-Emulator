#include <iostream>
#include <iomanip>

#include "Instruction_dl.h"
#include "Operation_dl.h"

namespace {
  opCodeRange opCode = {0x86, 0x86};
  const std::string opCodeStr = "DL";
  const std::string opDescription = "Double Precision Integer Load"; 
}

Instruction_dl::Instruction_dl() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dl());
}
Instruction_dl::~Instruction_dl()
{

}


void Instruction_dl::execute() const
{
  Instruction_longInstruction::execute();
}
