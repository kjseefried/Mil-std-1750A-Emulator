#include <iostream>
#include <iomanip>

#include "Instruction_llbi.h"
#include "Operation_llb.h"

namespace {
  opCodeRange opCode = {0x8E, 0x8E};
  const std::string opCodeStr = "LLBI";
  const std::string opDescription = "Load Lower Byte"; 
}

Instruction_llbi::Instruction_llbi() :
Instruction_longInstructionIndirect(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_llb());
}
Instruction_llbi::~Instruction_llbi()
{

}


void Instruction_llbi::execute() const
{
  Instruction_longInstructionIndirect::execute();
}
