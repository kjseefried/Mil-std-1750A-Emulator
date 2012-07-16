#include <iostream>
#include <iomanip>

#include "Instruction_fabx.h"
#include "Operation_fa.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  const std::string opCodeStr = "FABX";
  const unsigned short int ra = 0;
  char opEx = 0x08;
  const std::string opDescription = "Floating Point Add"; 
}

Instruction_fabx::Instruction_fabx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_fa());
}
Instruction_fabx::~Instruction_fabx()
{

}


void Instruction_fabx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
