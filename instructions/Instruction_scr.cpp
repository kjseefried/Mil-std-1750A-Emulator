#include <iostream>
#include <iomanip>

#include "Instruction_scr.h"
#include "Operation_scr.h"

namespace {
  opCodeRange opCode = {0x6C, 0x6C};
  const std::string opCodeStr = "SCR";
  const std::string opDescription = "Shift Cyclic, Count In Register"; 
}

Instruction_scr::Instruction_scr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_scr());
}
Instruction_scr::~Instruction_scr()
{

}


void Instruction_scr::execute() const
{
  Instruction_register2Register::execute();
}
