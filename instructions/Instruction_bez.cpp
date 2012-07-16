#include <iostream>
#include <iomanip>

#include "Instruction_bez.h"
#include "Operation_bez.h"

namespace {
  opCodeRange opCode = {0x75, 0x75};
  const std::string opCodeStr = "BEZ";
  const std::string opDescription = "Branch if equal to zero"; 
}

Instruction_bez::Instruction_bez() :
Instruction_counterRelative(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_bez());
}
Instruction_bez::~Instruction_bez()
{

}


void Instruction_bez::execute() const
{
  Instruction_counterRelative::execute();
}
