#include <iostream>
#include <iomanip>

#include "Instruction_dsll.h"
#include "Operation_dsll.h"

namespace {
  opCodeRange opCode = {0x65, 0x65};
  const std::string opCodeStr = "DSLL";
  const std::string opDescription = "Double Shift Left Logical"; 
}

Instruction_dsll::Instruction_dsll() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dsll());
}
Instruction_dsll::~Instruction_dsll()
{

}


void Instruction_dsll::execute() const
{
  Instruction_register2Register::execute();
}
