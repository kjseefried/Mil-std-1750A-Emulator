#include <iostream>
#include <iomanip>

#include "Instruction_efsr.h"
#include "Operation_efs.h"

namespace {
  opCodeRange opCode = {0xBB, 0xBB};
  const std::string opCodeStr = "EFSR";
  const std::string opDescription = "Extended Precision Floating Point Subtract"; 
}

Instruction_efsr::Instruction_efsr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_efs());
}
Instruction_efsr::~Instruction_efsr()
{

}


void Instruction_efsr::execute() const
{
  Instruction_register2Register::execute();
}
