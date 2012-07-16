#include <iostream>
#include <iomanip>

#include "Instruction_dslc.h"
#include "Operation_dslc.h"

namespace {
  opCodeRange opCode = {0x68, 0x68};
  const std::string opCodeStr = "DSLC";
  const std::string opDescription = "Double Shift Left Cyclic"; 
}

Instruction_dslc::Instruction_dslc() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dslc());
}
Instruction_dslc::~Instruction_dslc()
{

}


void Instruction_dslc::execute() const
{
  Instruction_register2Register::execute();
}
