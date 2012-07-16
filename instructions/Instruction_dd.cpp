#include <iostream>
#include <iomanip>

#include "Instruction_dd.h"
#include "Operation_dd.h"

namespace {
  opCodeRange opCode = {0xD6, 0xD6};
  const std::string opCodeStr = "DD";
  const std::string opDescription = "Double Precision Integer Divide"; 
}

Instruction_dd::Instruction_dd() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dd());
}
Instruction_dd::~Instruction_dd()
{

}


void Instruction_dd::execute() const
{
  Instruction_longInstruction::execute();
}
