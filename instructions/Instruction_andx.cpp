#include <iostream>
#include <iomanip>

#include "Instruction_andx.h"
#include "Operation_and.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  const std::string opCodeStr = "ANDB";
  const unsigned short int ra = 2;
  char opEx = 0x0E;
  const std::string opDescription = "Logical AND"; 
}

Instruction_andx::Instruction_andx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_and());

}
Instruction_andx::~Instruction_andx()
{

}


void Instruction_andx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
