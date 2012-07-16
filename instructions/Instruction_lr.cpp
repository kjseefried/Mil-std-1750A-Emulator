#include <iostream>
#include <iomanip>

#include "Instruction_lr.h"
#include "Operation_l.h"

namespace {
  opCodeRange opCode = {0x81, 0x81};
  const std::string opCodeStr = "LR";
  const std::string opDescription = "Single Precision Integer Load"; 
}

Instruction_lr::Instruction_lr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_l());
}
Instruction_lr::~Instruction_lr()
{

}


void Instruction_lr::execute() const
{
  Instruction_register2Register::execute();
}
