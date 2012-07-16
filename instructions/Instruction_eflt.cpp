#include <iostream>
#include <iomanip>

#include "Instruction_eflt.h"
#include "Operation_eflt.h"

namespace {
  opCodeRange opCode = {0xEB, 0xEB};
  const std::string opCodeStr = "EFLT";
  const std::string opDescription = "Convert 32 bit Integer to Extended Floating Point"; 
}

Instruction_eflt::Instruction_eflt() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_eflt());
}
Instruction_eflt::~Instruction_eflt()
{

}


void Instruction_eflt::execute() const
{
  Instruction_register2Register::execute();
}
