#include <iostream>
#include <iomanip>

#include "Instruction_efix.h"
#include "Operation_efix.h"

namespace {
  opCodeRange opCode = {0xEA, 0xEA};
  const std::string opCodeStr = "EFIX";
  const std::string opDescription = "Convert Extended Floating Point to 32 bit Integer"; 
}

Instruction_efix::Instruction_efix() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_efix());
}
Instruction_efix::~Instruction_efix()
{

}


void Instruction_efix::execute() const
{
  Instruction_register2Register::execute();
}
