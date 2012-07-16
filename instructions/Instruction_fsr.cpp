#include <iostream>
#include <iomanip>

#include "Instruction_fsr.h"
#include "Operation_fs.h"

namespace {
  opCodeRange opCode = {0xB9, 0xB9};
  const std::string opCodeStr = "FSR";
  const std::string opDescription = "Floating Point Subtract"; 
}

Instruction_fsr::Instruction_fsr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_fs());
}
Instruction_fsr::~Instruction_fsr()
{

}


void Instruction_fsr::execute() const
{
  Instruction_register2Register::execute();
}
