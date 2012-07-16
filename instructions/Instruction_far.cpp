#include <iostream>
#include <iomanip>

#include "Instruction_far.h"
#include "Operation_fa.h"

namespace {
  opCodeRange opCode = {0xA9, 0xA9};
  const std::string opCodeStr = "FAR";
  const std::string opDescription = "Floating Point Add"; 
}

Instruction_far::Instruction_far() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_fa());
}
Instruction_far::~Instruction_far()
{

}


void Instruction_far::execute() const
{
  Instruction_register2Register::execute();
}
