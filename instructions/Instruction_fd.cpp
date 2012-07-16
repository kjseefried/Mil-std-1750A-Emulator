#include <iostream>
#include <iomanip>

#include "Instruction_fd.h"
#include "Operation_fd.h"

namespace {
  opCodeRange opCode = {0xD8, 0xD8};
  const std::string opCodeStr = "FD";
  const std::string opDescription = "Floating Point Divide"; 
}

Instruction_fd::Instruction_fd() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_fd());
}
Instruction_fd::~Instruction_fd()
{

}


void Instruction_fd::execute() const
{
  Instruction_longInstruction::execute();
}
