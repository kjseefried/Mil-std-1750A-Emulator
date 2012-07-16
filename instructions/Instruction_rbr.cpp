#include <iostream>
#include <iomanip>

#include "Instruction_rbr.h"
#include "Operation_rb.h"

namespace {
  opCodeRange opCode = {0x54, 0x54};
  const std::string opCodeStr = "RBR";
  const std::string opDescription = "Retest Bit"; 
}

Instruction_rbr::Instruction_rbr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_rb());
}
Instruction_rbr::~Instruction_rbr()
{

}


void Instruction_rbr::execute() const
{
  Instruction_register2Register::execute();
}
