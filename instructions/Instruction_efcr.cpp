#include <iostream>
#include <iomanip>

#include "Instruction_efcr.h"
#include "Operation_efc.h"

namespace {
  opCodeRange opCode = {0xFB, 0xFB};
  const std::string opCodeStr = "EFCR";
  const std::string opDescription = "Extended Precision Floating Point Compare"; 
}
Instruction_efcr::Instruction_efcr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_efc());
}
Instruction_efcr::~Instruction_efcr()
{

}


void Instruction_efcr::execute() const
{
  Instruction_register2Register::execute();
}
