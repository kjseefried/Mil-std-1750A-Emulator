#include <iostream>
#include <iomanip>

#include "Instruction_dscr.h"
#include "Operation_dscr.h"

namespace {
  opCodeRange opCode = {0x6F, 0x6F};
  const std::string opCodeStr = "DSCR";
  const std::string opDescription = "Double Shift Cyclic, Count In Register"; 
}

Instruction_dscr::Instruction_dscr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dscr());
}
Instruction_dscr::~Instruction_dscr()
{

}


void Instruction_dscr::execute() const
{
  Instruction_register2Register::execute();
}
