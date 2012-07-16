#include <iostream>
#include <iomanip>

#include "Instruction_dstx.h"
#include "Operation_dst.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  const std::string opCodeStr = "DTSX";
  const unsigned short int ra = 0;
  char opEx = 0x03;
  const std::string opDescription = "Double Precision Integer Store"; 
}

Instruction_dstx::Instruction_dstx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_dst());
}
Instruction_dstx::~Instruction_dstx()
{

}


void Instruction_dstx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
