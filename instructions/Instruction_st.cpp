#include <iostream>
#include <iomanip>

#include "Instruction_st.h"
#include "Operation_st.h"

namespace {
  opCodeRange opCode = {0x90, 0x90};
  const std::string opCodeStr = "ST";
  const std::string opDescription = "Single Precision Integer Store"; 
}

Instruction_st::Instruction_st() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_st());
}
Instruction_st::~Instruction_st()
{

}


void Instruction_st::execute() const
{
  Instruction_longInstruction::execute();
}
