#include <iostream>
#include <iomanip>

#include "Instruction_fs.h"
#include "Operation_fs.h"

namespace {
  opCodeRange opCode = {0xB8, 0xB8};
  const std::string opCodeStr = "FS";
  const std::string opDescription = "Floating Point Subtract"; 
}

Instruction_fs::Instruction_fs() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_fs());
}
Instruction_fs::~Instruction_fs()
{

}


void Instruction_fs::execute() const
{
  Instruction_longInstruction::execute();
}
