#include <iostream>
#include <iomanip>

#include "Instruction_sbb.h"
#include "Operation_s.h"

namespace {
  opCodeRange opCode = {0x14, 0x17};
  const unsigned short int ra = 2;
  const std::string opCodeStr = "SBB";
  const std::string opDescription = "Single Precision Integer Subtract"; 
}

Instruction_sbb::Instruction_sbb() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_s());
}
Instruction_sbb::~Instruction_sbb()
{

}


void Instruction_sbb::execute() const
{
  Instruction_baseRelative::execute();
}
