#include <iostream>
#include <iomanip>

#include "Instruction_nop.h"
#include "Operation_nop.h"

namespace {
  opCodeRange opCode = {0xFF, 0xFF};
  const std::string opCodeStr = "NOP";
  const std::string opDescription = "No Operation"; 
}

Instruction_nop::Instruction_nop() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_nop());
}
Instruction_nop::~Instruction_nop()
{

}


void Instruction_nop::execute() const
{
  Instruction_register2Register::execute();
}
