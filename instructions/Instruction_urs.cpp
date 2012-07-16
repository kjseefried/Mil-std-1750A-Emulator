#include <iostream>
#include <iomanip>

#include "Instruction_urs.h"
#include "Operation_urs.h"

namespace {
  opCodeRange opCode = {0x7F, 0x7F};
  const std::string opCodeStr = "URS";
  const std::string opDescription = "Unstack IC And Return From Subroutine"; 
}

Instruction_urs::Instruction_urs() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_urs());
}
Instruction_urs::~Instruction_urs()
{

}


void Instruction_urs::execute() const
{
  Instruction_register2Register::execute();
}
