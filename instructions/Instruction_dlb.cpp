#include <iostream>
#include <iomanip>

#include "Instruction_dlb.h"
#include "Operation_dl.h"

namespace {
  opCodeRange opCode = {0x04, 0x07};
  const unsigned short int ra = 0;
  const std::string opCodeStr = "DLB";
  const std::string opDescription = "Double Precision Integer Load"; 
}

Instruction_dlb::Instruction_dlb() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_dl());
}
Instruction_dlb::~Instruction_dlb()
{

}


void Instruction_dlb::execute() const
{
  Instruction_baseRelative::execute();
}
