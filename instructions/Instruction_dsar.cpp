#include <iostream>
#include <iomanip>

#include "Instruction_dsar.h"
#include "Operation_dsar.h"

namespace {
  opCodeRange opCode = {0x6E, 0x6E};
  const std::string opCodeStr = "DSAR";
  const std::string opDescription = "Double Shift Arithmetic, Count In Register"; 
}

Instruction_dsar::Instruction_dsar() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dsar());
}
Instruction_dsar::~Instruction_dsar()
{

}


void Instruction_dsar::execute() const
{
  Instruction_register2Register::execute();
}
