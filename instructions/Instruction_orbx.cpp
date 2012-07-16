#include <iostream>
#include <iomanip>

#include "Instruction_orbx.h"
#include "Operation_or.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  const std::string opCodeStr = "ORBX";
  const unsigned short int ra = 2;
  char opEx = 0x0F;
  const std::string opDescription = "Inclusive Logical OR"; 
}

Instruction_orbx::Instruction_orbx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_or());
}
Instruction_orbx::~Instruction_orbx()
{

}


void Instruction_orbx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
