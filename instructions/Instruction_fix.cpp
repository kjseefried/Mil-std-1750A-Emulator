#include <iostream>
#include <iomanip>

#include "Instruction_fix.h"
#include "Operation_fix.h"

namespace {
  opCodeRange opCode = {0xE8, 0xE8};
  const std::string opCodeStr = "FIX";
  const std::string opDescription = "Convert Floating Point to 16 bit Integer"; 
}

Instruction_fix::Instruction_fix() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_fix());
}
Instruction_fix::~Instruction_fix()
{

}


void Instruction_fix::execute() const
{
  Instruction_register2Register::execute();
}
