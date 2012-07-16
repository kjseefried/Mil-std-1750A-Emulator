#include <iostream>
#include <iomanip>

#include "Instruction_sll.h"
#include "Operation_sll.h"

namespace {
  opCodeRange opCode = {0x60, 0x60};
  const std::string opCodeStr = "SLL";
  const std::string opDescription = "Shift Left Logical"; 
}

Instruction_sll::Instruction_sll() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_sll());
}
Instruction_sll::~Instruction_sll()
{

}


void Instruction_sll::execute() const
{
  Instruction_register2Register::execute();
}
