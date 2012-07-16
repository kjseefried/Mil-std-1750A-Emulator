#include <iostream>
#include <iomanip>

#include "Instruction_dsrl.h"
#include "Operation_dsrl.h"

namespace {
  opCodeRange opCode = {0x66, 0x66};
  const std::string opCodeStr = "DSRL";
  const std::string opDescription = "Double Shift Right Logical"; 
}

Instruction_dsrl::Instruction_dsrl() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dsrl());
}
Instruction_dsrl::~Instruction_dsrl()
{

}


void Instruction_dsrl::execute() const
{
  Instruction_register2Register::execute();
}
