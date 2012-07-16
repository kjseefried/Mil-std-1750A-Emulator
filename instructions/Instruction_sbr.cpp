#include <iostream>
#include <iomanip>

#include "Instruction_sbr.h"
#include "Operation_sb.h"

namespace {
  opCodeRange opCode = {0x51, 0x51};
  const std::string opCodeStr = "SBR";
  const std::string opDescription = "Set Bit"; 
}

Instruction_sbr::Instruction_sbr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_sb());
}
Instruction_sbr::~Instruction_sbr()
{

}


void Instruction_sbr::execute() const
{
  Instruction_register2Register::execute();
}
