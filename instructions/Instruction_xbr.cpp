#include <iostream>
#include <iomanip>

#include "Instruction_xbr.h"
#include "Operation_xbr.h"

namespace {
  opCodeRange opCode = {0xEC, 0xEC};
  const std::string opCodeStr = "XWB";
  const std::string opDescription = "Exchange Bytes in Registers"; 
}

Instruction_xbr::Instruction_xbr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_xbr());
}
Instruction_xbr::~Instruction_xbr()
{

}


void Instruction_xbr::execute() const
{
  Instruction_register2Register::execute();
}
