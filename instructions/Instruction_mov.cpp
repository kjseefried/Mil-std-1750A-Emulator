#include <iostream>
#include <iomanip>

#include "Instruction_mov.h"
#include "Operation_mov.h"

namespace {
  opCodeRange opCode = {0x93, 0x93};
  const std::string opCodeStr = "MOV";
  const std::string opDescription = "Move Multiple Words, Memory to Memory"; 
}

Instruction_mov::Instruction_mov() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_mov());
}
Instruction_mov::~Instruction_mov()
{

}


void Instruction_mov::execute() const
{
  Instruction_register2Register::execute();
}
