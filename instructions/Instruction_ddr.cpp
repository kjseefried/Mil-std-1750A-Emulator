#include <iostream>
#include <iomanip>

#include "Instruction_ddr.h"
#include "Operation_dd.h"

namespace {
  opCodeRange opCode = {0xD7, 0xD7};
  const std::string opCodeStr = "DDR";
  const std::string opDescription = "Double Precision Integer Divide"; 
}

Instruction_ddr::Instruction_ddr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dd());
}
Instruction_ddr::~Instruction_ddr()
{

}


void Instruction_ddr::execute() const
{
  Instruction_register2Register::execute();
}
