#include <iostream>
#include <iomanip>

#include "Instruction_dcr.h"
#include "Operation_dc.h"

namespace {
  opCodeRange opCode = {0xF7, 0xF7};
  const std::string opCodeStr = "DFC";
  const std::string opDescription = "Double Precision Compare"; 
}
Instruction_dcr::Instruction_dcr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dc());
}
Instruction_dcr::~Instruction_dcr()
{

}


void Instruction_dcr::execute() const
{
  Instruction_register2Register::execute();
}
