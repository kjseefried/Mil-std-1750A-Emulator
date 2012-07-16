#include <iostream>
#include <iomanip>

#include "Instruction_bnz.h"
#include "Operation_bnz.h"

namespace {
  opCodeRange opCode = {0x7A, 0x7A};
  const std::string opCodeStr = "BNZ";
  const std::string opDescription = "Branch if not equal to zero"; 
}

Instruction_bnz::Instruction_bnz() :
Instruction_counterRelative(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_bnz());
}
Instruction_bnz::~Instruction_bnz()
{

}


void Instruction_bnz::execute() const
{
  Instruction_counterRelative::execute();
}
