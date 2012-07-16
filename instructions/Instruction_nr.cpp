#include <iostream>
#include <iomanip>

#include "Instruction_nr.h"
#include "Operation_n.h"

namespace {
  opCodeRange opCode = {0xE7, 0xE7};
  const std::string opCodeStr = "NR";
  const std::string opDescription = "Logical NAND"; 
}

Instruction_nr::Instruction_nr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_n());
}
Instruction_nr::~Instruction_nr()
{

}


void Instruction_nr::execute() const
{
  Instruction_register2Register::execute();
}
