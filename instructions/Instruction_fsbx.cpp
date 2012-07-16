#include <iostream>
#include <iomanip>

#include "Instruction_fsbx.h"
#include "Operation_fs.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  const std::string opCodeStr = "FSBX";
  const unsigned short int ra = 0;
  char opEx = 0x09;
  const std::string opDescription = "Floating Point Divide"; 
}

Instruction_fsbx::Instruction_fsbx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_fs());
}
Instruction_fsbx::~Instruction_fsbx()
{

}


void Instruction_fsbx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
