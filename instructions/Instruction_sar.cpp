#include <iostream>
#include <iomanip>

#include "Instruction_sar.h"
#include "Operation_sar.h"

namespace {
  opCodeRange opCode = {0x6B, 0x6B};
  const std::string opCodeStr = "SAR";
  const std::string opDescription = "Shift Arithmetic, Count In Register"; 
}

Instruction_sar::Instruction_sar() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_sar());
}
Instruction_sar::~Instruction_sar()
{

}


void Instruction_sar::execute() const
{
  Instruction_register2Register::execute();
}
