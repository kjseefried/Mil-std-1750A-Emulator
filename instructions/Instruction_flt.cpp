#include <iostream>
#include <iomanip>

#include "Instruction_flt.h"
#include "Operation_flt.h"

namespace {
  opCodeRange opCode = {0xE9, 0xE9};
  const std::string opCodeStr = "FLT";
  const std::string opDescription = "Convert 16 bit Integer to Floating Point"; 
}

Instruction_flt::Instruction_flt() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_flt());
}
Instruction_flt::~Instruction_flt()
{

}


void Instruction_flt::execute() const
{
  Instruction_register2Register::execute();
}
