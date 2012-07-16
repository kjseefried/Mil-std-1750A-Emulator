#include <iostream>
#include <iomanip>

#include "Instruction_srl.h"
#include "Operation_srl.h"

namespace {
  opCodeRange opCode = {0x61, 0x61};
  const std::string opCodeStr = "SRL";
  const std::string opDescription = "Shift Right Logical"; 
}

Instruction_srl::Instruction_srl() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_srl());
}
Instruction_srl::~Instruction_srl()
{

}


void Instruction_srl::execute() const
{
  Instruction_register2Register::execute();
}
