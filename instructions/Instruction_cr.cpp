#include <iostream>
#include <iomanip>

#include "Instruction_cr.h"
#include "Operation_c.h"

namespace {
  opCodeRange opCode = {0xF1, 0xF1};
  const std::string opCodeStr = "CR";
  const std::string opDescription = "Single Precision Compare"; 
}
Instruction_cr::Instruction_cr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_c());
}
Instruction_cr::~Instruction_cr()
{

}


void Instruction_cr::execute() const
{
  Instruction_register2Register::execute();
}
