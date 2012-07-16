#include <iostream>
#include <iomanip>

#include "Instruction_bex.h"
#include "Operation_bex.h"

namespace {
  opCodeRange opCode = {0x77, 0x77};
  const std::string opCodeStr = "BEX";
  const std::string opDescription = "Branch to executive"; 
}

Instruction_bex::Instruction_bex() :
Instruction_counterRelative(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_bex());
}
Instruction_bex::~Instruction_bex()
{

}


void Instruction_bex::execute() const
{
  Instruction_counterRelative::execute();
}
