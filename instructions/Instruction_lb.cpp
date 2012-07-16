#include <iostream>
#include <iomanip>

#include "Instruction_lb.h"
#include "Operation_l.h"

namespace {
  opCodeRange opCode = {0x00, 0x03};
  const unsigned short int ra = 2;
  const std::string opCodeStr = "LB";
  const std::string opDescription = "Single Precision Integer Load"; 
}

Instruction_lb::Instruction_lb() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_l());
}
Instruction_lb::~Instruction_lb()
{

}


void Instruction_lb::execute() const
{
  Instruction_baseRelative::execute();
}
