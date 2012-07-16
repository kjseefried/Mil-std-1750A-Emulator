#include <iostream>
#include <iomanip>

#include "Instruction_orr.h"
#include "Operation_or.h"

namespace {
  opCodeRange opCode = {0xE1, 0xE1};
  const std::string opCodeStr = "ORR";
  const std::string opDescription = "Inclusive Logical OR"; 
}

Instruction_orr::Instruction_orr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_or());
}
Instruction_orr::~Instruction_orr()
{

}

void Instruction_orr::execute() const
{
  Instruction_register2Register::execute();
}
