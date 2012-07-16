#include <iostream>
#include <iomanip>

#include "Instruction_tsb.h"
#include "Operation_tsb.h"

namespace {
  opCodeRange opCode = {0x59, 0x59};
  const std::string opCodeStr = "TSB";
  const std::string opDescription = "Test And Set Bit"; 
}

Instruction_tsb::Instruction_tsb() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_tsb());
}
Instruction_tsb::~Instruction_tsb()
{

}


void Instruction_tsb::execute() const
{
  Instruction_register2Register::execute();
}
