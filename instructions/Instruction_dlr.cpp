#include <iostream>
#include <iomanip>

#include "Instruction_dlr.h"
#include "Operation_dl.h"

namespace {
  opCodeRange opCode = {0x87, 0x87};
  const std::string opCodeStr = "DLR";
  const std::string opDescription = "Double Precision Integer Load"; 
}

Instruction_dlr::Instruction_dlr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_dl());
}
Instruction_dlr::~Instruction_dlr()
{

}


void Instruction_dlr::execute() const
{
  Instruction_register2Register::execute();
}
