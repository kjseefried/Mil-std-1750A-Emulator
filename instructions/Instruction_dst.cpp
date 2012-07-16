#include <iostream>
#include <iomanip>

#include "Instruction_dst.h"
#include "Operation_dst.h"

namespace {
  opCodeRange opCode = {0x96, 0x96};
  const std::string opCodeStr = "DST";
  const std::string opDescription = "Double Precision Integer Store"; 
}

Instruction_dst::Instruction_dst() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dst());
}
Instruction_dst::~Instruction_dst()
{

}


void Instruction_dst::execute() const
{
  Instruction_longInstruction::execute();
}
