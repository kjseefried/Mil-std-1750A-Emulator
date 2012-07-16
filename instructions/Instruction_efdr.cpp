#include <iostream>
#include <iomanip>

#include "Instruction_efdr.h"
#include "Operation_efd.h"

namespace {
  opCodeRange opCode = {0xDB, 0xDB};
  const std::string opCodeStr = "EFDR";
  const std::string opDescription = "Extended Precision Floating Point Divide"; 
}

Instruction_efdr::Instruction_efdr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_efd());
}
Instruction_efdr::~Instruction_efdr()
{

}


void Instruction_efdr::execute() const
{
  Instruction_register2Register::execute();
}
