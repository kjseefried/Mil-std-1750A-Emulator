#include <iostream>
#include <iomanip>

#include "Instruction_fdr.h"
#include "Operation_fd.h"

namespace {
  opCodeRange opCode = {0xD9, 0xD9};
  const std::string opCodeStr = "FDR";
  const std::string opDescription = "Floating Point Divide"; 
}

Instruction_fdr::Instruction_fdr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_fd());
}
Instruction_fdr::~Instruction_fdr()
{

}


void Instruction_fdr::execute() const
{
  Instruction_register2Register::execute();
}
