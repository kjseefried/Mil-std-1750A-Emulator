#include <iostream>
#include <iomanip>

#include "Instruction_br.h"
#include "Operation_br.h"

namespace {
  opCodeRange opCode = {0x74, 0x74};
  const std::string opCodeStr = "BR";
  const std::string opDescription = "Branch Unconditionally"; 
}

Instruction_br::Instruction_br() :
Instruction_counterRelative(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_br());
}
Instruction_br::~Instruction_br()
{

}


void Instruction_br::execute() const
{
  Instruction_counterRelative::execute();
}
