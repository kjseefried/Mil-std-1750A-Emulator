#include <iostream>
#include <iomanip>

#include "Instruction_dslr.h"
#include "Operation_dslr.h"

namespace {
  opCodeRange opCode = {0x6D, 0x6D};
  const std::string opCodeStr = "DSLR";
  const std::string opDescription = "Double Shift Logical, Count In Register"; 
}

Instruction_dslr::Instruction_dslr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dslr());
}
Instruction_dslr::~Instruction_dslr()
{

}


void Instruction_dslr::execute() const
{
  Instruction_register2Register::execute();
}
