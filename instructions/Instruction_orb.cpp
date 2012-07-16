#include <iostream>
#include <iomanip>

#include "Instruction_orb.h"
#include "Operation_or.h"

namespace {
  opCodeRange opCode = {0x30, 0x33};
  const unsigned short int ra = 2;
  const std::string opCodeStr = "ORB";
  const std::string opDescription = "Inclusive Logical OR"; 
}

Instruction_orb::Instruction_orb() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_or());
}
Instruction_orb::~Instruction_orb()
{

}


void Instruction_orb::execute() const
{
  Instruction_baseRelative::execute();
}
