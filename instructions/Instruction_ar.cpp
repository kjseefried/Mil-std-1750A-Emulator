#include <iostream>
#include <iomanip>

#include "Instruction_ar.h"
#include "Operation_a.h"

namespace {
  opCodeRange opCode = {0xA1, 0xA1};
  const std::string opCodeStr = "AR";
  const std::string opDescription = "Single Precision Integer add"; 
}

Instruction_ar::Instruction_ar() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_a());
}
Instruction_ar::~Instruction_ar()
{

}


void Instruction_ar::execute() const
{
  Instruction_register2Register::execute();
}
