#include <iostream>
#include <iomanip>

#include "Instruction_dlbx.h"
#include "Operation_dl.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  const std::string opCodeStr = "DLBX";
  const unsigned short int ra = 0;
  char opEx = 0x01;
  const std::string opDescription = "Double Precision Integer Load"; 
}

Instruction_dlbx::Instruction_dlbx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_dl());
}
Instruction_dlbx::~Instruction_dlbx()
{

}


void Instruction_dlbx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
