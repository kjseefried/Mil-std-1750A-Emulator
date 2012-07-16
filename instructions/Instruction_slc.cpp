#include <iostream>
#include <iomanip>

#include "Instruction_slc.h"
#include "Operation_slc.h"

namespace {
  opCodeRange opCode = {0x63, 0x63};
  const std::string opCodeStr = "SLC";
  const std::string opDescription = "Shift Left Cyclic"; 
}

Instruction_slc::Instruction_slc() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_slc());
}
Instruction_slc::~Instruction_slc()
{

}


void Instruction_slc::execute() const
{
  Instruction_register2Register::execute();
}
