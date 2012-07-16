#include <iostream>
#include <iomanip>

#include "Instruction_incm.h"
#include "Operation_incm.h"

namespace {
  opCodeRange opCode = {0xA3, 0xA3};
  const std::string opCodeStr = "INCM";
  const std::string opDescription = "Increment Memory by Positive Integer"; 
}

Instruction_incm::Instruction_incm() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_incm());
}
Instruction_incm::~Instruction_incm()
{

}


void Instruction_incm::execute() const
{
  Instruction_longInstruction::execute();
}
