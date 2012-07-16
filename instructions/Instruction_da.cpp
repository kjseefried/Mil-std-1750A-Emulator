#include <iostream>
#include <iomanip>

#include "Instruction_da.h"
#include "Operation_da.h"

namespace {
  opCodeRange opCode = {0xA6, 0xA6};
  const std::string opCodeStr = "DA";
  const std::string opDescription = "Double Precision Integer Add"; 
}

Instruction_da::Instruction_da() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_da());
}
Instruction_da::~Instruction_da()
{

}


void Instruction_da::execute() const
{
  Instruction_longInstruction::execute();
}
