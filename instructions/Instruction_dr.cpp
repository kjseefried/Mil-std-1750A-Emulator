#include <iostream>
#include <iomanip>

#include "Instruction_dr.h"
#include "Operation_d.h"

namespace {
  opCodeRange opCode = {0xD5, 0xD5};
  const std::string opCodeStr = "DR";
  const std::string opDescription = "Single Precision Integer Divide, 32 bit dividend"; 
}

Instruction_dr::Instruction_dr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_d());
}
Instruction_dr::~Instruction_dr()
{

}


void Instruction_dr::execute() const
{
  Instruction_register2Register::execute();
}
