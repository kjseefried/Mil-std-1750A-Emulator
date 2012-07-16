#include <iostream>
#include <iomanip>

#include "Instruction_dstb.h"
#include "Operation_dst.h"

namespace {
  opCodeRange opCode = {0x0C, 0x0F};
  const unsigned short int ra = 0;
  const std::string opCodeStr = "DTSB";
  const std::string opDescription = "Double Precision Integer Store"; 
}

Instruction_dstb::Instruction_dstb() :
Instruction_baseRelative(opCode, ra,opCodeStr, opDescription)
{
  setOperation(new Operation_dst());
}
Instruction_dstb::~Instruction_dstb()
{

}


void Instruction_dstb::execute() const
{
  Instruction_baseRelative::execute();
}
