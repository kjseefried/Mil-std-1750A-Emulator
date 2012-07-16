#include <iostream>
#include <iomanip>

#include "Instruction_dsra.h"
#include "Operation_dsra.h"

namespace {
  opCodeRange opCode = {0x67, 0x67};
  const std::string opCodeStr = "DSRA";
  const std::string opDescription = "Double Shift Right Arithmetic"; 
}

Instruction_dsra::Instruction_dsra() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dsra());
}
Instruction_dsra::~Instruction_dsra()
{

}


void Instruction_dsra::execute() const
{
  Instruction_register2Register::execute();
}
