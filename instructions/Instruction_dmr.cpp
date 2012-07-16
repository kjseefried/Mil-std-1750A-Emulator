#include <iostream>
#include <iomanip>

#include "Instruction_dmr.h"
#include "Operation_dm.h"

namespace {
  opCodeRange opCode = {0xC7, 0xC7};
  const std::string opCodeStr = "DMR";
  const std::string opDescription = "Double Precision Integer Multiply"; 
}

Instruction_dmr::Instruction_dmr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dm());
}
Instruction_dmr::~Instruction_dmr()
{

}


void Instruction_dmr::execute() const
{
  Instruction_register2Register::execute();
}
