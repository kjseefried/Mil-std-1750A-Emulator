#include <iostream>
#include <iomanip>

#include "Instruction_dsr.h"
#include "Operation_ds.h"

namespace {
  opCodeRange opCode = {0xB7, 0xB7};
  const std::string opCodeStr = "DSR";
  const std::string opDescription = "Double Precision Integer Subtract"; 
}

Instruction_dsr::Instruction_dsr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_ds());
}
Instruction_dsr::~Instruction_dsr()
{

}


void Instruction_dsr::execute() const
{
  Instruction_register2Register::execute();
}
