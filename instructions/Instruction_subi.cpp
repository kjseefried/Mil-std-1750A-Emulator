#include <iostream>
#include <iomanip>

#include "Instruction_subi.h"
#include "Operation_sub.h"

namespace {
  opCodeRange opCode = {0x9D, 0x9D};
  const std::string opCodeStr = "SUBI";
  const std::string opDescription = "Store Upper Byte"; 
}

Instruction_subi::Instruction_subi() :
Instruction_longInstructionIndirect(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_sub());
}
Instruction_subi::~Instruction_subi()
{

}


void Instruction_subi::execute() const
{
  Instruction_longInstructionIndirect::execute();
}
