#include <iostream>
#include <iomanip>

#include "Instruction_llb.h"
#include "Operation_llb.h"

namespace {
  opCodeRange opCode = {0x8C, 0x8C};
  const std::string opCodeStr = "LLB";
  const std::string opDescription = "Load Lower Byte"; 
}

Instruction_llb::Instruction_llb() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_llb());
}
Instruction_llb::~Instruction_llb()
{

}


void Instruction_llb::execute() const
{
  Instruction_longInstruction::execute();
}
