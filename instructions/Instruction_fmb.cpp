#include <iostream>
#include <iomanip>

#include "Instruction_fmb.h"
#include "Operation_fm.h"

namespace {
  opCodeRange opCode = {0x28, 0x2B};
  const unsigned short int ra = 0;
  const std::string opCodeStr = "FMB";
  const std::string opDescription = "Floating Point Multiply"; 
}

Instruction_fmb::Instruction_fmb() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_fm());
}
Instruction_fmb::~Instruction_fmb()
{

}


void Instruction_fmb::execute() const
{
  Instruction_baseRelative::execute();
}
