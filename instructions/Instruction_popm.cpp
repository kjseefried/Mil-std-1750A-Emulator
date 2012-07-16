#include <iostream>
#include <iomanip>

#include "Instruction_popm.h"
#include "Operation_popm.h"

namespace {
  opCodeRange opCode = {0x8F, 0x8F};
  const std::string opCodeStr = "POPM";
  const std::string opDescription = "Pop Multiple Registers Off the Stack"; 
}

Instruction_popm::Instruction_popm() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_popm());
}
Instruction_popm::~Instruction_popm()
{

}


void Instruction_popm::execute() const
{
  Instruction_register2Register::execute();
}
