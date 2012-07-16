#include <iostream>
#include <iomanip>

#include "Instruction_dvr.h"
#include "Operation_dv.h"

namespace {
  opCodeRange opCode = {0xD1, 0xD1};
  const std::string opCodeStr = "DVR";
  const std::string opDescription = "Single Precision Integer Divide, 16 bit dividend"; 
}

Instruction_dvr::Instruction_dvr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dv());
}
Instruction_dvr::~Instruction_dvr()
{

}


void Instruction_dvr::execute() const
{
  Instruction_register2Register::execute();
}
