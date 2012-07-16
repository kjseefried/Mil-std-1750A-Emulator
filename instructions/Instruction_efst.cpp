#include <iostream>
#include <iomanip>

#include "Instruction_efst.h"
#include "Operation_efst.h"

namespace {
  opCodeRange opCode = {0x9A, 0x9A};
  const std::string opCodeStr = "EFST";
  const std::string opDescription = "Extended Precision Floating Point Store"; 
}

Instruction_efst::Instruction_efst() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_efst());
}
Instruction_efst::~Instruction_efst()
{

}


void Instruction_efst::execute() const
{
  Instruction_longInstruction::execute();
}
