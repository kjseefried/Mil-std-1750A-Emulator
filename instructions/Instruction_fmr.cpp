#include <iostream>
#include <iomanip>

#include "Instruction_fmr.h"
#include "Operation_fm.h"

namespace {
  opCodeRange opCode = {0xC9, 0xC9};
  const std::string opCodeStr = "FMR";
  const std::string opDescription = "Floating Point Multiply"; 
}

Instruction_fmr::Instruction_fmr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_fm());
}
Instruction_fmr::~Instruction_fmr()
{

}


void Instruction_fmr::execute() const
{
  Instruction_register2Register::execute();
}
