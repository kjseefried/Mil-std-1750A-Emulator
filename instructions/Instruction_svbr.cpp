#include <iostream>
#include <iomanip>

#include "Instruction_svbr.h"
#include "Operation_svbr.h"

namespace {
  opCodeRange opCode = {0x5A, 0x5A};
  const std::string opCodeStr = "SVBR";
  const std::string opDescription = "Set Variable Bit In Register"; 
}

Instruction_svbr::Instruction_svbr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_svbr());
}
Instruction_svbr::~Instruction_svbr()
{

}


void Instruction_svbr::execute() const
{
  Instruction_register2Register::execute();
}
