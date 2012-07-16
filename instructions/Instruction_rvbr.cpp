#include <iostream>
#include <iomanip>

#include "Instruction_rvbr.h"
#include "Operation_rvbr.h"

namespace {
  opCodeRange opCode = {0x5C, 0x5C};
  const std::string opCodeStr = "RVBR";
  const std::string opDescription = "Rest Variable Bit In Register"; 
}

Instruction_rvbr::Instruction_rvbr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_rvbr());
}
Instruction_rvbr::~Instruction_rvbr()
{

}


void Instruction_rvbr::execute() const
{
  Instruction_register2Register::execute();
}
