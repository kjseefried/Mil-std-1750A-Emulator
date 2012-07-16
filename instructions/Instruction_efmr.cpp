#include <iostream>
#include <iomanip>

#include "Instruction_efmr.h"
#include "Operation_efm.h"

namespace {
  opCodeRange opCode = {0xCB, 0xCB};
  const std::string opCodeStr = "EFMR";
  const std::string opDescription = "Extended Precision Floating Point Multiply"; 
}

Instruction_efmr::Instruction_efmr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_efm());
}
Instruction_efmr::~Instruction_efmr()
{

}


void Instruction_efmr::execute() const
{
  Instruction_register2Register::execute();
}
