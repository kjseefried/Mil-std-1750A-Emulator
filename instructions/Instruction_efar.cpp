#include <iostream>
#include <iomanip>

#include "Instruction_efar.h"
#include "Operation_efa.h"

namespace {
  opCodeRange opCode = {0xAB, 0xAB};
  const std::string opCodeStr = "EFAR";
  const std::string opDescription = "Extended Precision Floating Point Add"; 
}

Instruction_efar::Instruction_efar() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_efa());
}
Instruction_efar::~Instruction_efar()
{

}


void Instruction_efar::execute() const
{
  Instruction_register2Register::execute();
}
