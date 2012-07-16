#include <iostream>
#include <iomanip>

#include "Instruction_xwr.h"
#include "Operation_xwr.h"

namespace {
  opCodeRange opCode = {0xED, 0xED};
  const std::string opCodeStr = "XWR";
  const std::string opDescription = "Exchange Words in Registers"; 
}

Instruction_xwr::Instruction_xwr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_xwr());
}
Instruction_xwr::~Instruction_xwr()
{

}


void Instruction_xwr::execute() const
{
  Instruction_register2Register::execute();
}
