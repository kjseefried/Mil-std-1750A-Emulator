#include <iostream>
#include <iomanip>

#include "Instruction_sr.h"
#include "Operation_s.h"

namespace {
  opCodeRange opCode = {0xB1, 0xB1};
  const std::string opCodeStr = "SR";
  const std::string opDescription = "Single Precision Integer subtract"; 
}

Instruction_sr::Instruction_sr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_s());
}
Instruction_sr::~Instruction_sr()
{

}


void Instruction_sr::execute() const
{
  Instruction_register2Register::execute();
}
