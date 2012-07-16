#include <iostream>
#include <iomanip>

#include "Instruction_andr.h"
#include "Operation_and.h"

namespace {
  opCodeRange opCode = {0xE3, 0xE3};
  const std::string opCodeStr = "ANDR";
  const std::string opDescription = "Logical AND"; 
}

Instruction_andr::Instruction_andr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_and());

}
Instruction_andr::~Instruction_andr()
{

}


void Instruction_andr::execute() const
{
  Instruction_register2Register::execute();
}
