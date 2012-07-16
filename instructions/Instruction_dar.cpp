#include <iostream>
#include <iomanip>

#include "Instruction_dar.h"
#include "Operation_da.h"

namespace {
  opCodeRange opCode = {0xA7, 0xA7};
  const std::string opCodeStr = "DAR";
  const std::string opDescription = "Double Precision Integer Add"; 
}

Instruction_dar::Instruction_dar() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_da());
}
Instruction_dar::~Instruction_dar()
{

}


void Instruction_dar::execute() const
{
  Instruction_register2Register::execute();
}
