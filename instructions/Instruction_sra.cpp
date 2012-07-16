#include <iostream>
#include <iomanip>

#include "Instruction_sra.h"
#include "Operation_sra.h"

namespace {
  opCodeRange opCode = {0x62, 0x62};
  const std::string opCodeStr = "SRA";
  const std::string opDescription = "Double Shift Right Arithmetic"; 
}

Instruction_sra::Instruction_sra() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_sra());
}
Instruction_sra::~Instruction_sra()
{

}


void Instruction_sra::execute() const
{
  Instruction_register2Register::execute();
}
