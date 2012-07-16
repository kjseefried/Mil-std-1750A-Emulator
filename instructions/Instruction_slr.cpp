#include <iostream>
#include <iomanip>

#include "Instruction_slr.h"
#include "Operation_slr.h"

namespace {
  opCodeRange opCode = {0x6A, 0x6A};
  const std::string opCodeStr = "SLR";
  const std::string opDescription = "Shift Logical, Count In Register"; 
}

Instruction_slr::Instruction_slr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_slr());
}
Instruction_slr::~Instruction_slr()
{

}


void Instruction_slr::execute() const
{
  Instruction_register2Register::execute();
}
