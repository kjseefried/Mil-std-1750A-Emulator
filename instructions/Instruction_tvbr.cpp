#include <iostream>
#include <iomanip>

#include "Instruction_tvbr.h"
#include "Operation_tvbr.h"

namespace {
  opCodeRange opCode = {0x5E, 0x5E};
  const std::string opCodeStr = "TVBR";
  const std::string opDescription = "Test Variable Bit In Register"; 
}

Instruction_tvbr::Instruction_tvbr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_tvbr());
}
Instruction_tvbr::~Instruction_tvbr()
{

}


void Instruction_tvbr::execute() const
{
  Instruction_register2Register::execute();
}
