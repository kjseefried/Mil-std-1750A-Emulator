#include <iostream>
#include <iomanip>

#include "Instruction_ds.h"
#include "Operation_ds.h"

namespace {
  opCodeRange opCode = {0xB6, 0xB6};
  const std::string opCodeStr = "DS";
  const std::string opDescription = "Double Precision Integer Subtract"; 
}

Instruction_ds::Instruction_ds() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_ds());
}
Instruction_ds::~Instruction_ds()
{

}


void Instruction_ds::execute() const
{
  Instruction_longInstruction::execute();
}
