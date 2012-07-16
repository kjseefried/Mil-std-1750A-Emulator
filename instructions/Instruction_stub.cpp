#include <iostream>
#include <iomanip>

#include "Instruction_stub.h"
#include "Operation_sub.h"

namespace {
  opCodeRange opCode = {0x9B, 0x9B};
  const std::string opCodeStr = "STUB";
  const std::string opDescription = "Store Upper Byte"; 
}

Instruction_stub::Instruction_stub() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_sub());
}
Instruction_stub::~Instruction_stub()
{

}


void Instruction_stub::execute() const
{
  Instruction_longInstruction::execute();
}
