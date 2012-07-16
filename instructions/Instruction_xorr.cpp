#include <iostream>
#include <iomanip>

#include "Operation_xor.h"
#include "Instruction_xorr.h"

namespace {
  opCodeRange opCode = {0xE5, 0xE5};
  const std::string opCodeStr = "XORR";
  const std::string opDescription = "Exclusive Logical OR"; 
}

Instruction_xorr::Instruction_xorr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_xor());
}
Instruction_xorr::~Instruction_xorr()
{

}


void Instruction_xorr::execute() const
{
  Instruction_register2Register::execute();
}
