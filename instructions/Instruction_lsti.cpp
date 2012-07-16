#include <iostream>
#include <iomanip>

#include "Instruction_lsti.h"
#include "Operation_lst.h"

namespace {
  opCodeRange opCode = {0x7C, 0x7C};
  const std::string opCodeStr = "LSTI";
  const std::string opDescription = "Load Status"; 
}

Instruction_lsti::Instruction_lsti() :
Instruction_longInstructionIndirect(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_lst());
}
Instruction_lsti::~Instruction_lsti()
{

}


void Instruction_lsti::execute() const
{
  Instruction_longInstructionIndirect::execute();
}
