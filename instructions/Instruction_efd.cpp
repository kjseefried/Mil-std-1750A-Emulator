#include <iostream>
#include <iomanip>

#include "Instruction_efd.h"
#include "Operation_efd.h"

namespace {
  opCodeRange opCode = {0xDA, 0xDA};
  const std::string opCodeStr = "EFD";
  const std::string opDescription = "Extended Precision Floating Point Divide"; 
}

Instruction_efd::Instruction_efd() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_efd());
}
Instruction_efd::~Instruction_efd()
{

}


void Instruction_efd::execute() const
{
  Instruction_longInstruction::execute();
}
