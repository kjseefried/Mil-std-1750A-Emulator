#include <iostream>
#include <iomanip>

#include "Instruction_sti.h"
#include "Operation_st.h"

namespace {
  opCodeRange opCode = {0x94, 0x94};
  const std::string opCodeStr = "STI";
  const std::string opDescription = "Single Precision Integer Store"; 
}

Instruction_sti::Instruction_sti() :
Instruction_longInstructionIndirect(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_st());
}
Instruction_sti::~Instruction_sti()
{

}


void Instruction_sti::execute() const
{
  Instruction_longInstructionIndirect::execute();
}
