#include <iostream>
#include <iomanip>

#include "Instruction_disp.h"
#include "Operation_dv.h"

namespace {
  opCodeRange opCode = {0xD2, 0xD2};
  const std::string opCodeStr = "DISP";
  const std::string opDescription = "Single Precision Integer Divide, 16 bit dividend"; 
}

Instruction_disp::Instruction_disp() :
Instruction_immediateShortPositive(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dv());
}
Instruction_disp::~Instruction_disp()
{

}


void Instruction_disp::execute() const
{
  Instruction_immediateShortPositive::execute();
}
