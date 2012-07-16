#include <iostream>
#include <iomanip>

#include "Instruction_fa.h"
#include "Operation_fa.h"

namespace {
  opCodeRange opCode = {0xA8, 0xA8};
  const std::string opCodeStr = "FA";
  const std::string opDescription = "Floating Point Add"; 
}

Instruction_fa::Instruction_fa() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_fa());
}
Instruction_fa::~Instruction_fa()
{

}


void Instruction_fa::execute() const
{
  Instruction_longInstruction::execute();
}
