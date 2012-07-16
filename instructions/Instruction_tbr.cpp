#include <iostream>
#include <iomanip>

#include "Instruction_tbr.h"
#include "Operation_tb.h"

namespace {
  opCodeRange opCode = {0x57, 0x57};
  const std::string opCodeStr = "TBR";
  const std::string opDescription = "Test Bit"; 
}

Instruction_tbr::Instruction_tbr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_tb());
}
Instruction_tbr::~Instruction_tbr()
{

}


void Instruction_tbr::execute() const
{
  Instruction_register2Register::execute();
}
