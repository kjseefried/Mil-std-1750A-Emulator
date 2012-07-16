#include <iostream>
#include <iomanip>

#include "Instruction_fab.h"
#include "Operation_fa.h"

namespace {
  opCodeRange opCode = {0x20, 0x23};
  const unsigned short int ra = 0;
  const std::string opCodeStr = "FAB";
  const std::string opDescription = "Floating Point Add"; 
}

Instruction_fab::Instruction_fab() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_fa());
}
Instruction_fab::~Instruction_fab()
{

}


void Instruction_fab::execute() const
{
  Instruction_baseRelative::execute();
}
