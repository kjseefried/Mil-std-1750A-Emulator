#include <iostream>
#include <iomanip>

#include "Instruction_lisn.h"

namespace {
  opCodeRange opCode = {0x83, 0x83};
  const std::string opCodeStr = "LISN";
  const std::string opDescription = "Single Precision Integer Load"; 
}
Instruction_lisn::Instruction_lisn() :
Instruction_immediateShortNegative(opCode, opCodeStr, opDescription)
{

}
Instruction_lisn::~Instruction_lisn()
{

}


void Instruction_lisn::execute() const
{
  Instruction_immediateShortNegative::execute();
}
