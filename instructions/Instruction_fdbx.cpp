#include <iostream>
#include <iomanip>

#include "Instruction_fdbx.h"
#include "Operation_fd.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  const std::string opCodeStr = "FDBX";
  const unsigned short int ra = 0;
  char opEx = 0x0B;
  const std::string opDescription = "Floating Point Divide"; 
}

Instruction_fdbx::Instruction_fdbx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_fd());
}
Instruction_fdbx::~Instruction_fdbx()
{

}


void Instruction_fdbx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
